/**********************************************************************
  OptBase - Base class for global search extensions

  Copyright (C) 2010-2011 by David C. Lonie

  This program is free software; you can redistribute it and/or modify
  it under the terms of the GNU General Public License as published by
  the Free Software Foundation version 2 of the License.

  This program is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
  GNU General Public License for more details.
 ***********************************************************************/

#ifndef OPTBASE_H
#define OPTBASE_H

// Prevent redefinition of symbols on windows
#ifdef WIN32
#ifndef WIN32_LEAN_AND_MEAN
#define WIN32_LEAN_AND_MEAN
#endif // WIN32_LEAN_AND_MEAN
#ifndef NOMINMAX
#define NOMINMAX
#endif // NOMINMAX
#endif // WIN32

#include <QtCore/QObject>
#include <QtCore/QMutex>

namespace GlobalSearch {
  class Structure;
  class Tracker;
  class Optimizer;
  class QueueManager;
  class QueueInterface;
  class SSHManager;
  class AbstractDialog;

  /**
   * @class OptBase optbase.h <globalsearch/optbase.h>
   *
   * @brief The OptBase class stores variables and helper functions
   * for global searches.
   *
   * @author David C. Lonie
   *
   * OptBase is the main class in libglobalsearch. It contains the
   * variables that define a search, as well as handling structure
   * generation. This class ties all others together.
   */
  class OptBase : public QObject
  {
    Q_OBJECT

   public:
    /**
     * Constructor
     *
     * @param parent Dialog window of GUI.
     */
    explicit OptBase(AbstractDialog *parent);

    /**
     * Destructor
     */
    virtual ~OptBase();

    /**
     * Actions to take when a structure has failed optimization too
     * many times.
     *
     * @sa OptBase::failAction
     * @sa OptBase::failLimit
     */
    enum FailActions {
      /// Do nothing; keep submitting for optimization
      FA_DoNothing = 0,
      /// Kill the structure
      FA_KillIt,
      /// Replace the failing structure with a new random one
      FA_Randomize,
      /// Replace with a new offspring structure
      FA_NewOffspring
    };

    /**
     * @return An ID string that uniquely identifies this OptBase.
     */
    QString getIDString() {return m_idString;}

    /**
     * Replace the Structure with an appropriate random Structure.
     *
     * @param s The Structure to be replaced. This pointer remains
     * valid -- the structure it points to will be modified.
     * @param reason Reason for replacing. This will appear in the
     * Structure::getParents() string. (Optional)
     *
     * @return The pointer to the structure (same as s).
     */
    virtual Structure* replaceWithRandom(Structure *s,
                                         const QString & reason = "")
    {return 0;}

    /**
     * Replace the Structure with a new offspring. This only makes sense if
     * the search method uses offspring (e.g. a GA). The default
     * implementation of this method calls replaceWithRandom().
     *
     * @param s The Structure to be replaced. This pointer remains
     * valid -- the structure it points to will be modified.
     * @param reason Reason for replacing. This will appear in the
     * Structure::getParents() string. (Optional)
     *
     * @return The pointer to the structure (same as s).
     */
    virtual Structure* replaceWithOffspring(Structure *s,
                                            const QString & reason = "")
    {return replaceWithRandom(s, reason);}

    /**
     * Before starting an optimization, this function will check the
     * parameters of the search to ensure that they are within a
     * reasonable range.
     *
     * @return True if the search parameters are valid, false otherwise.
     */
    virtual bool checkLimits() = 0;

  /**
   *      * Perform any post-optimization checks that need to be performed when a
   *           * structure enters the Structure::StepOptimized state.
   *                * @param s Structure to check
   *                     * @param err If non-NULL, will be overwritten with an explaination of
   *                          * why the check failed.
   *                               * @return True if structure passes, false otherwise.
   *                                    */
        virtual bool checkStepOptimizedStructure(Structure *s, QString *err = NULL)
        {
            Q_UNUSED(s);
            Q_UNUSED(err);
            return true;
        }


    /**
     * Generate a probability list using the enthalpies of a
     * collection of structures.
     *
     * The probability is calculated by:
     *
     * p_i = N * (1 - (H_i - H_min) / (H_max - H_min) )
     *
     * where p_i is the probability of selecting structure i, H_i is
     * the enthalpy of structure i, H_min and H_max are the lowest and
     * highest enthalpies in the collection, and N is a normalization
     * factor.
     *
     * To use the probability list generated by this function, run
@code
double r = RANDDOUBLE();
int ind;
for (ind = 0; ind < probs.size(); ind++)
  if (r < probs.at(ind)) break;
@endcode
     * ind will hold the chosen index.
     *
     * @param structures Collection of Structure objects to use. Must
     * be sorted by enthalpy
     *
     * @sa Structure::sortByEnthalpy()
     *
     * @note IMPORTANT: \a structures must contain one more structure
     * than needed -- the last structure in the list will be removed
     * from the probability list! (e.g. return list has size
     * (structure.size()-1)).
     *
     * @return
     */
    static QList<double> getProbabilityList(const QList<Structure*> &structures);

    /**
     * Save the current search. If filename is omitted, default to
     * m_filePath + "/[search name].state". Must set
     * OptBase::savePending = true before calling.
     *
     * @param filename Filename to write to. Optional.
     * @param notify Whether to display a user-visible notification
     *
     * @return True if successful, false otherwise.
     */
    virtual bool save(const QString & filename = "", bool notify = false);

    /**
     * Load a search session from the specified filename.
     *
     * @param filename State file to resume.
     * @param forceReadOnly Set to true to skip any prompts and load the
     * session readonly
     *
     * @return True is successful, false otherwise.
     */
    virtual bool load(const QString & filename,
                      const bool forceReadOnly = false) {
      Q_UNUSED(forceReadOnly);return false;};

    /**
     * Takes a template and inserts structure specific information by
     * replacing keywords.
     *
     * @param templateString Template
     * @param structure Structure of interest
     *
     * @return Interpreted template with structure information
     * included
     * @sa getTemplateKeywordHelp
     * @sa getTemplateKeywordHelp_base
     * @sa interpretTemplate_base
     */
    virtual QString interpretTemplate(const QString & templateString,
                                      Structure* structure);

    /**
     * @return A QString defining all known keywords.
     */
    virtual QString getTemplateKeywordHelp() {
      return getTemplateKeywordHelp_base();};

    /**
     * @return A pointer to the main dialog..
     */
    AbstractDialog* dialog() {return m_dialog;};

    /**
     * @return A pointer to the main Structure Tracker.
     */
    Tracker* tracker() {return m_tracker;};

    /**
     * @return A pointer to the associated QueueManager.
     */
    QueueManager* queue() {return m_queue;};

    /**
     * @return A pointer to the associated QueueManager.
     * @sa setQueueInterface
     * @sa queueInterfaceChanged
     */
    QueueInterface* queueInterface() {return m_queueInterface;};

    /**
     * @return A pointer to the current Optimizer.
     * @sa setOptimizer
     * @sa optimizerChanged
     */
    Optimizer* optimizer() {return m_optimizer;};

    /**
     * @return A pointer to the SSHManager instance.
     */
    SSHManager* ssh() {return m_ssh;};

    /// Whether to impose the running job limit
    bool limitRunningJobs;

    /// Number of concurrent jobs allowed.
    uint runningJobLimit;

    /// Number of continuous structures generated
    uint contStructs;

    /// How many structures to produce before halting search. -1 for no limit
    int cutoff;

    /// Whether to run benchmarking tests
    bool testingMode;

    /// Starting run number for benchmark
    uint test_nRunsStart;

    /// Ending run number for benchmark
    uint test_nRunsEnd;

    /// Number of Structures per run when benchmarking
    uint test_nStructs;

    /// Number of times a Structure may fail
    /// @sa OptBase::failAction
    /// @sa OptBase::FailActions
    uint failLimit;

    /// What to do when a Structure exceeds failLimit
    /// @sa OptBase::FailActions
    /// @sa OptBase::failLimit
    FailActions failAction;

    /// Local directory to work in
    QString filePath;

    /// Terse description of current search
    QString description;

    /// Host name or IP address of remote PBS server
    QString host;

    /// Port on remote PBS server used for SSH communication
    int port;

    /// Username for ssh login on remote PBS server
    QString username;

    /// Path on remote server to store files during and after
    /// optimization
    QString rempath;

    /// Much of OpenBabel is not written with thread safety in
    /// mind. This mutex should be locked whenever non-static
    /// OpenBabel functions are called.
    QMutex *sOBMutex;

    /// This should be locked whenever the state file (resume file) is
    /// being written
    QMutex *stateFileMutex;

    /// This is locked when generating a backtrace.
    QMutex *backTraceMutex;

    /// True if there is a save requested or in progress
    bool savePending;

    /// True if a session is starting or being loaded
    bool isStarting;

    /// Whether readOnly mode is enabled (e.g. no connection to server)
    bool readOnly;

   signals:
    /**
     * Emitted when a session is starting or being loaded.
     * @sa sessionStarted
     * @sa emitSessionStarted
     * @sa readOnlySessionStarted
     * @sa emitReadOnlySessionStarted
     * @sa startingSession
     * @sa emitStartingSession
     */
    void startingSession();

    /**
     * Emitted when a session finishes starting or loading.
     * @sa sessionStarted
     * @sa emitSessionStarted
     * @sa readOnlySessionStarted
     * @sa emitReadOnlySessionStarted
     * @sa startingSession
     * @sa emitStartingSession
     */
    void sessionStarted();

    /**
     * Emitted when a read-only session finishes loading.
     * @sa sessionStarted
     * @sa emitSessionStarted
     * @sa readOnlySessionStarted
     * @sa emitReadOnlySessionStarted
     * @sa startingSession
     * @sa emitStartingSession
     */
    void readOnlySessionStarted();

    /**
     * Emitted when the current QueueInterface changes
     * @sa setQueueInterface
     * @sa queueInterface
     */
    void queueInterfaceChanged(QueueInterface*);

    /**
     * Emitted when the current Optimizer changed
     * @sa setOptimizer
     * @sa optimizer
     */
    void optimizerChanged(Optimizer*);

    /**
     * Emitted when debug(const QString&) is called.
     * @param s The debugging statement.
     * @sa debug
     * @sa debugStatement
     * @sa warning
     * @sa warningStatement
     * @sa error
     * @sa errorStatement
     */
    void debugStatement(const QString &s);

    /**
     * Emitted when warning(const QString&) is called.
     * @param s The warning statement.
     * @sa debug
     * @sa debugStatement
     * @sa warning
     * @sa warningStatement
     * @sa error
     * @sa errorStatement
     */
    void warningStatement(const QString &s);

    /**
     * Emitted when error(const QString&) is called.
     * @param s The error statement.
     * @sa debug
     * @sa debugStatement
     * @sa warning
     * @sa warningStatement
     * @sa error
     * @sa errorStatement
     */
    void errorStatement(const QString &s);

    /**
     * Prompts user with an "Yes/No" dialog
     *
     * @param message Message to the user.
     * @param ok True if user accepts dialog, false if they cancel.
     * @sa promptForBoolean
     */
    void needBoolean(const QString &message, bool *ok);

    /**
     * Request a password from the user, used for libssh
     * authentication.
     *
     * @param message Message to the user.
     * @param newPassword pointer to the QString that will hold the new password.
     * @param ok True if user accepts dialog, false if they cancel.
     * @sa promptForPassword
     */
    void needPassword(const QString &message, QString *newPassword, bool *ok);

    /**
     * Emitted when a major change has occurred affecting many
     * structures, e.g. when duplicates are set/reset. It is
     * recommended that any user-visible structure data is rebuilt
     * from scratch when this is called.
     */
    void refreshAllStructureInfo();

    // Omit the following from doxygen:
    /// \cond
    void sig_setClipboard(const QString &text) const;
    /// \endcond

   public slots:

    /**
     * Deletes all structures from m_tracker and calls
     * m_tracker->reset() and m_queue->reset().
     */
    virtual void reset();

#ifdef ENABLE_SSH
    /**
     * Creates ssh connections to the remote cluster.
     */
    virtual bool createSSHConnections();
#endif // ENABLE_SSH

    /**
     * Begin the search.
     */
    virtual void startSearch() = 0;

    /**
     * Called when the QueueManager requests more Structures.
     * @sa QueueManager
     */
    virtual void generateNewStructure() {};

    /**
     * Prints a debug message to the terminal and emits
     * debugStatement
     * @param s The debug statement.
     * @sa debug
     * @sa debugStatement
     * @sa warning
     * @sa warningStatement
     * @sa error
     * @sa errorStatement
     */
    void debug(const QString & s);

    /**
     * Prints a warning message to the terminal and emits
     * warningStatement
     * @param s The warning message.
     * @sa debug
     * @sa debugStatement
     * @sa warning
     * @sa warningStatement
     * @sa error
     * @sa errorStatement
     */
    void warning(const QString & s);

    /**
     * Prints a error message to the terminal and emits
     * errorStatement
     * @param s The error statement.
     * @sa debug
     * @sa debugStatement
     * @sa warning
     * @sa warningStatement
     * @sa error
     * @sa errorStatement
     */
    void error(const QString & s);

    /**
     * Emits the sessionStarted signal.
     * @sa sessionStarted
     * @sa readOnlySessionStarted
     * @sa emitReadOnlySessionStarted
     * @sa startingSession
     * @sa emitStartingSession
     */
    void emitSessionStarted() {emit sessionStarted();};

    /**
     * Emits the readOnlySessionStarted signal.
     * @sa sessionStarted
     * @sa emitSessionStarted
     * @sa readOnlySessionStarted
     * @sa startingSession
     * @sa emitStartingSession
     */
    void emitReadOnlySessionStarted() {emit readOnlySessionStarted();};

    /**
     * Emits the startingSession signal.
     * @sa sessionStarted
     * @sa emitSessionStarted
     * @sa startingSession
     * @sa emitStartingSession
     */
    void emitStartingSession() {emit startingSession();};

    /**
     * Sets this->isStarting to true;
     * @sa setIsStartingFalse
     */
    void setIsStartingTrue() {isStarting = true;};

    /**
     * Sets this->isStarting to false;
     * @sa setIsStartingTrue
     */
    void setIsStartingFalse() {isStarting = false;};

    /**
     * Sets this->readOnly to true;
     * @sa setReadOnlyFalse
     */
    void setReadOnlyTrue() {readOnly = true;};

    /**
     * Sets this->readOnly to false;
     * @sa setReadOnlyTrue
     */
    void setReadOnlyFalse() {readOnly = false;};

    /**
     * Prints a backtrace to the terminal
     */
    void printBackTrace();

    /**
     * Update the QueueInterface to \a q.
     *
     * @sa queueInterfaceChanged
     * @sa queueInterface
     */
    void setQueueInterface(QueueInterface *q);

    /**
     * Update the Optimizer to the one indicated
     *
     * @param o New Optimizer to use.
     * @sa optimizerChanged
     * @sa optimizer
     */
    void setOptimizer(Optimizer *o);

    /**
     * Prompt user with a "Yes/No" dialog.
     *
     * @param message Message to the user.
     * @param ok True if user accepts dialog, false if they cancel.
     * @sa needBoolean
     */
    void promptForBoolean(const QString &message, bool *ok = 0);

    /**
     * Request a password from the user, used for libssh
     * authentication.
     *
     * @param message Message to the user.
     * @param newPassword pointer to the QString that will hold the new password.
     * @param ok True if user accepts dialog, false if they cancel.
     * @sa needPassword
     */
    void promptForPassword(const QString &message, QString *newPassword, bool *ok = 0);

    /**
     * Set the clipboard contents to \a text. Also sets the global
     * mouse selection on supported systems.
     *
     * @param text Text to place on the clipboard
     */
    void setClipboard(const QString &text) const;

  protected slots:
    // Disable doxygen parser here:
    /// \cond
    void setClipboard_(const QString &text) const;
    /// \endcond

#ifdef ENABLE_SSH
#ifndef USE_CLI_SSH
    /**
     * Create ssh connections using the libssh backend.
     */
    bool createSSHConnections_libssh();

#else // not USE_CLI_SSH

    /**
     * Create ssh connections using a commandline ssh backend.
     */
    bool createSSHConnections_cli();

#endif // not USE_CLI_SSH
#endif // ENABLE_SSH
  protected:
    /// String that uniquely identifies the derived OptBase
    /// @sa getIDString
    QString m_idString;

    /// Cached pointer to the SSHManager
    /// @sa ssh
    SSHManager *m_ssh;

    /// Cached pointer to the Dialog window
    /// @sa tracker
    AbstractDialog *m_dialog;

    /// Cached pointer to the main Tracker
    /// @sa tracker
    Tracker *m_tracker;

    /// Thread to run the QueueManager
    QThread *m_queueThread;

    /// Cached pointer to the QueueManager
    /// @sa queue
    QueueManager *m_queue;

    /// Cached pointer to the QueueInterface
    /// @sa queueInterface
    QueueInterface *m_queueInterface;

    /// Cache pointer to the current optimizer
    /// @sa optimizerChanged
    /// @sa optimizer
    /// @sa setOptimizer
    Optimizer *m_optimizer;

    /// Hidden call to interpretKeyword
    void interpretKeyword_base(QString &keyword, Structure* structure);

    /// Hidden call to getTemplateKeywordHelp
    QString getTemplateKeywordHelp_base();

    /// Current version of save/resume schema
    unsigned int m_schemaVersion;

  };

} // end namespace GlobalSearch

#endif
