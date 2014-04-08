/********************************************************************************
** Form generated from reading UI file 'tab_opt.ui'
**
** Created: Wed Dec 18 13:39:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_OPT_H
#define UI_TAB_OPT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QComboBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QListWidget>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QSpinBox>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Opt
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_3;
    QGridLayout *gridLayout_4;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_3;
    QListWidget *list_seeds;
    QPushButton *push_addSeed;
    QPushButton *push_removeSeed;
    QSpacerItem *horizontalSpacer;
    QHBoxLayout *horizontalLayout_6;
    QLabel *label_9;
    QSpacerItem *horizontalSpacer_4;
    QSpinBox *spin_numInitial;
    QVBoxLayout *verticalLayout;
    QGroupBox *groupBox_4;
    QGridLayout *gridLayout_5;
    QLabel *label_26;
    QSpinBox *spin_popSize;
    QLabel *label_genTotal;
    QSpinBox *spin_contStructs;
    QCheckBox *cb_limitRunningJobs;
    QSpinBox *spin_runningJobLimit;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QSpinBox *spin_failLimit;
    QComboBox *combo_failAction;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QDoubleSpinBox *spin_explode;
    QLabel *label_7;
    QSpacerItem *horizontalSpacer_3;
    QHBoxLayout *horizontalLayout_5;
    QSpacerItem *horizontalSpacer_2;
    QComboBox *combo_explode;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_2;
    QDoubleSpinBox *spin_tol_enthalpy;
    QLabel *label;
    QPushButton *push_dup_reset;
    QSpacerItem *verticalSpacer_2;
    QLabel *label_2;
    QDoubleSpinBox *spin_tol_geo;
    QVBoxLayout *verticalLayout_2;
    QGroupBox *groupBox_5;
    QGridLayout *gridLayout_6;
    QLabel *label_25;
    QSpinBox *spin_p_cross;
    QGroupBox *groupBox_8;
    QGridLayout *gridLayout_9;
    QLabel *label_3;
    QSpinBox *spin_p_twist;
    QLabel *label_10;
    QSpinBox *spin_twist_minRot;
    QGroupBox *groupBox_6;
    QGridLayout *gridLayout_7;
    QLabel *label_29;
    QLabel *label_27;
    QSpinBox *spin_p_exch;
    QSpinBox *spin_exch_numExch;
    QGroupBox *groupBox_7;
    QGridLayout *gridLayout_8;
    QLabel *label_31;
    QLabel *label_30;
    QSpinBox *spin_p_randw;
    QLabel *label_5;
    QSpinBox *spin_randw_numWalkers;
    QHBoxLayout *horizontalLayout;
    QDoubleSpinBox *spin_randw_minWalk;
    QDoubleSpinBox *spin_randw_maxWalk;
    QGroupBox *groupBox_9;
    QGridLayout *gridLayout_10;
    QLabel *label_8;
    QSpinBox *spin_p_aniso;
    QDoubleSpinBox *spin_aniso_amp;
    QLabel *label_11;
    QSpacerItem *verticalSpacer_3;

    void setupUi(QWidget *Tab_Opt)
    {
        if (Tab_Opt->objectName().isEmpty())
            Tab_Opt->setObjectName(QString::fromUtf8("Tab_Opt"));
        Tab_Opt->resize(1242, 642);
        gridLayout = new QGridLayout(Tab_Opt);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_3 = new QGroupBox(Tab_Opt);
        groupBox_3->setObjectName(QString::fromUtf8("groupBox_3"));
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::MinimumExpanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(groupBox_3->sizePolicy().hasHeightForWidth());
        groupBox_3->setSizePolicy(sizePolicy);
        gridLayout_4 = new QGridLayout(groupBox_3);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        groupBox_2 = new QGroupBox(groupBox_3);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_3 = new QGridLayout(groupBox_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        list_seeds = new QListWidget(groupBox_2);
        list_seeds->setObjectName(QString::fromUtf8("list_seeds"));
        QSizePolicy sizePolicy1(QSizePolicy::MinimumExpanding, QSizePolicy::MinimumExpanding);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(list_seeds->sizePolicy().hasHeightForWidth());
        list_seeds->setSizePolicy(sizePolicy1);

        gridLayout_3->addWidget(list_seeds, 0, 0, 1, 3);

        push_addSeed = new QPushButton(groupBox_2);
        push_addSeed->setObjectName(QString::fromUtf8("push_addSeed"));
        QSizePolicy sizePolicy2(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy2.setHorizontalStretch(0);
        sizePolicy2.setVerticalStretch(0);
        sizePolicy2.setHeightForWidth(push_addSeed->sizePolicy().hasHeightForWidth());
        push_addSeed->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(push_addSeed, 1, 0, 1, 1);

        push_removeSeed = new QPushButton(groupBox_2);
        push_removeSeed->setObjectName(QString::fromUtf8("push_removeSeed"));
        sizePolicy2.setHeightForWidth(push_removeSeed->sizePolicy().hasHeightForWidth());
        push_removeSeed->setSizePolicy(sizePolicy2);

        gridLayout_3->addWidget(push_removeSeed, 1, 2, 1, 1);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout_3->addItem(horizontalSpacer, 1, 1, 1, 1);


        gridLayout_4->addWidget(groupBox_2, 2, 0, 1, 2);

        horizontalLayout_6 = new QHBoxLayout();
        horizontalLayout_6->setObjectName(QString::fromUtf8("horizontalLayout_6"));
        label_9 = new QLabel(groupBox_3);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        QSizePolicy sizePolicy3(QSizePolicy::Fixed, QSizePolicy::Preferred);
        sizePolicy3.setHorizontalStretch(0);
        sizePolicy3.setVerticalStretch(0);
        sizePolicy3.setHeightForWidth(label_9->sizePolicy().hasHeightForWidth());
        label_9->setSizePolicy(sizePolicy3);

        horizontalLayout_6->addWidget(label_9);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_6->addItem(horizontalSpacer_4);

        spin_numInitial = new QSpinBox(groupBox_3);
        spin_numInitial->setObjectName(QString::fromUtf8("spin_numInitial"));
        QSizePolicy sizePolicy4(QSizePolicy::Maximum, QSizePolicy::Fixed);
        sizePolicy4.setHorizontalStretch(0);
        sizePolicy4.setVerticalStretch(0);
        sizePolicy4.setHeightForWidth(spin_numInitial->sizePolicy().hasHeightForWidth());
        spin_numInitial->setSizePolicy(sizePolicy4);
        spin_numInitial->setMaximum(9999);
        spin_numInitial->setValue(20);

        horizontalLayout_6->addWidget(spin_numInitial);


        gridLayout_4->addLayout(horizontalLayout_6, 1, 0, 1, 2);


        gridLayout->addWidget(groupBox_3, 0, 0, 1, 1);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        groupBox_4 = new QGroupBox(Tab_Opt);
        groupBox_4->setObjectName(QString::fromUtf8("groupBox_4"));
        gridLayout_5 = new QGridLayout(groupBox_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_26 = new QLabel(groupBox_4);
        label_26->setObjectName(QString::fromUtf8("label_26"));

        gridLayout_5->addWidget(label_26, 0, 0, 1, 1);

        spin_popSize = new QSpinBox(groupBox_4);
        spin_popSize->setObjectName(QString::fromUtf8("spin_popSize"));
        spin_popSize->setMaximum(9999);
        spin_popSize->setValue(20);

        gridLayout_5->addWidget(spin_popSize, 0, 1, 1, 1);

        label_genTotal = new QLabel(groupBox_4);
        label_genTotal->setObjectName(QString::fromUtf8("label_genTotal"));

        gridLayout_5->addWidget(label_genTotal, 1, 0, 1, 1);

        spin_contStructs = new QSpinBox(groupBox_4);
        spin_contStructs->setObjectName(QString::fromUtf8("spin_contStructs"));

        gridLayout_5->addWidget(spin_contStructs, 1, 1, 1, 1);

        cb_limitRunningJobs = new QCheckBox(groupBox_4);
        cb_limitRunningJobs->setObjectName(QString::fromUtf8("cb_limitRunningJobs"));

        gridLayout_5->addWidget(cb_limitRunningJobs, 3, 0, 1, 1);

        spin_runningJobLimit = new QSpinBox(groupBox_4);
        spin_runningJobLimit->setObjectName(QString::fromUtf8("spin_runningJobLimit"));
        spin_runningJobLimit->setEnabled(false);
        spin_runningJobLimit->setValue(1);

        gridLayout_5->addWidget(spin_runningJobLimit, 3, 1, 1, 1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label_4 = new QLabel(groupBox_4);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        sizePolicy3.setHeightForWidth(label_4->sizePolicy().hasHeightForWidth());
        label_4->setSizePolicy(sizePolicy3);

        horizontalLayout_2->addWidget(label_4);

        spin_failLimit = new QSpinBox(groupBox_4);
        spin_failLimit->setObjectName(QString::fromUtf8("spin_failLimit"));
        sizePolicy2.setHeightForWidth(spin_failLimit->sizePolicy().hasHeightForWidth());
        spin_failLimit->setSizePolicy(sizePolicy2);
        spin_failLimit->setMaximum(100);

        horizontalLayout_2->addWidget(spin_failLimit);

        combo_failAction = new QComboBox(groupBox_4);
        combo_failAction->setObjectName(QString::fromUtf8("combo_failAction"));

        horizontalLayout_2->addWidget(combo_failAction);


        gridLayout_5->addLayout(horizontalLayout_2, 4, 0, 1, 2);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_6 = new QLabel(groupBox_4);
        label_6->setObjectName(QString::fromUtf8("label_6"));

        horizontalLayout_4->addWidget(label_6);

        spin_explode = new QDoubleSpinBox(groupBox_4);
        spin_explode->setObjectName(QString::fromUtf8("spin_explode"));

        horizontalLayout_4->addWidget(spin_explode);

        label_7 = new QLabel(groupBox_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_4->addWidget(label_7);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_4->addItem(horizontalSpacer_3);


        gridLayout_5->addLayout(horizontalLayout_4, 5, 0, 1, 2);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_5->addItem(horizontalSpacer_2);

        combo_explode = new QComboBox(groupBox_4);
        combo_explode->setObjectName(QString::fromUtf8("combo_explode"));
        QSizePolicy sizePolicy5(QSizePolicy::MinimumExpanding, QSizePolicy::Fixed);
        sizePolicy5.setHorizontalStretch(0);
        sizePolicy5.setVerticalStretch(0);
        sizePolicy5.setHeightForWidth(combo_explode->sizePolicy().hasHeightForWidth());
        combo_explode->setSizePolicy(sizePolicy5);

        horizontalLayout_5->addWidget(combo_explode);


        gridLayout_5->addLayout(horizontalLayout_5, 7, 0, 1, 2);


        verticalLayout->addWidget(groupBox_4);

        groupBox = new QGroupBox(Tab_Opt);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_2 = new QGridLayout(groupBox);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        spin_tol_enthalpy = new QDoubleSpinBox(groupBox);
        spin_tol_enthalpy->setObjectName(QString::fromUtf8("spin_tol_enthalpy"));
        spin_tol_enthalpy->setDecimals(6);
        spin_tol_enthalpy->setSingleStep(0.001);

        gridLayout_2->addWidget(spin_tol_enthalpy, 0, 2, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        sizePolicy3.setHeightForWidth(label->sizePolicy().hasHeightForWidth());
        label->setSizePolicy(sizePolicy3);

        gridLayout_2->addWidget(label, 0, 1, 1, 1);

        push_dup_reset = new QPushButton(groupBox);
        push_dup_reset->setObjectName(QString::fromUtf8("push_dup_reset"));

        gridLayout_2->addWidget(push_dup_reset, 2, 1, 1, 2);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_2->addItem(verticalSpacer_2, 3, 1, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_2->addWidget(label_2, 1, 1, 1, 1);

        spin_tol_geo = new QDoubleSpinBox(groupBox);
        spin_tol_geo->setObjectName(QString::fromUtf8("spin_tol_geo"));
        spin_tol_geo->setDecimals(6);
        spin_tol_geo->setMaximum(100000);

        gridLayout_2->addWidget(spin_tol_geo, 1, 2, 1, 1);


        verticalLayout->addWidget(groupBox);


        gridLayout->addLayout(verticalLayout, 0, 1, 1, 1);

        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        groupBox_5 = new QGroupBox(Tab_Opt);
        groupBox_5->setObjectName(QString::fromUtf8("groupBox_5"));
        gridLayout_6 = new QGridLayout(groupBox_5);
        gridLayout_6->setObjectName(QString::fromUtf8("gridLayout_6"));
        label_25 = new QLabel(groupBox_5);
        label_25->setObjectName(QString::fromUtf8("label_25"));

        gridLayout_6->addWidget(label_25, 2, 0, 1, 1);

        spin_p_cross = new QSpinBox(groupBox_5);
        spin_p_cross->setObjectName(QString::fromUtf8("spin_p_cross"));
        spin_p_cross->setMaximum(100);
        spin_p_cross->setValue(15);

        gridLayout_6->addWidget(spin_p_cross, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_5);

        groupBox_8 = new QGroupBox(Tab_Opt);
        groupBox_8->setObjectName(QString::fromUtf8("groupBox_8"));
        gridLayout_9 = new QGridLayout(groupBox_8);
        gridLayout_9->setObjectName(QString::fromUtf8("gridLayout_9"));
        label_3 = new QLabel(groupBox_8);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        QSizePolicy sizePolicy6(QSizePolicy::Maximum, QSizePolicy::Preferred);
        sizePolicy6.setHorizontalStretch(0);
        sizePolicy6.setVerticalStretch(0);
        sizePolicy6.setHeightForWidth(label_3->sizePolicy().hasHeightForWidth());
        label_3->setSizePolicy(sizePolicy6);

        gridLayout_9->addWidget(label_3, 0, 0, 1, 1);

        spin_p_twist = new QSpinBox(groupBox_8);
        spin_p_twist->setObjectName(QString::fromUtf8("spin_p_twist"));
        spin_p_twist->setMaximum(100);

        gridLayout_9->addWidget(spin_p_twist, 0, 1, 1, 1);

        label_10 = new QLabel(groupBox_8);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_9->addWidget(label_10, 1, 0, 1, 1);

        spin_twist_minRot = new QSpinBox(groupBox_8);
        spin_twist_minRot->setObjectName(QString::fromUtf8("spin_twist_minRot"));

        gridLayout_9->addWidget(spin_twist_minRot, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_8);

        groupBox_6 = new QGroupBox(Tab_Opt);
        groupBox_6->setObjectName(QString::fromUtf8("groupBox_6"));
        gridLayout_7 = new QGridLayout(groupBox_6);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        label_29 = new QLabel(groupBox_6);
        label_29->setObjectName(QString::fromUtf8("label_29"));
        sizePolicy6.setHeightForWidth(label_29->sizePolicy().hasHeightForWidth());
        label_29->setSizePolicy(sizePolicy6);

        gridLayout_7->addWidget(label_29, 0, 0, 1, 1);

        label_27 = new QLabel(groupBox_6);
        label_27->setObjectName(QString::fromUtf8("label_27"));

        gridLayout_7->addWidget(label_27, 1, 0, 1, 1);

        spin_p_exch = new QSpinBox(groupBox_6);
        spin_p_exch->setObjectName(QString::fromUtf8("spin_p_exch"));
        spin_p_exch->setMaximum(100);
        spin_p_exch->setValue(50);

        gridLayout_7->addWidget(spin_p_exch, 0, 1, 1, 1);

        spin_exch_numExch = new QSpinBox(groupBox_6);
        spin_exch_numExch->setObjectName(QString::fromUtf8("spin_exch_numExch"));

        gridLayout_7->addWidget(spin_exch_numExch, 1, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_6);

        groupBox_7 = new QGroupBox(Tab_Opt);
        groupBox_7->setObjectName(QString::fromUtf8("groupBox_7"));
        gridLayout_8 = new QGridLayout(groupBox_7);
        gridLayout_8->setObjectName(QString::fromUtf8("gridLayout_8"));
        label_31 = new QLabel(groupBox_7);
        label_31->setObjectName(QString::fromUtf8("label_31"));
        sizePolicy6.setHeightForWidth(label_31->sizePolicy().hasHeightForWidth());
        label_31->setSizePolicy(sizePolicy6);

        gridLayout_8->addWidget(label_31, 0, 0, 1, 1);

        label_30 = new QLabel(groupBox_7);
        label_30->setObjectName(QString::fromUtf8("label_30"));

        gridLayout_8->addWidget(label_30, 2, 0, 1, 1);

        spin_p_randw = new QSpinBox(groupBox_7);
        spin_p_randw->setObjectName(QString::fromUtf8("spin_p_randw"));
        spin_p_randw->setMaximum(100);
        spin_p_randw->setValue(35);

        gridLayout_8->addWidget(spin_p_randw, 0, 1, 1, 1);

        label_5 = new QLabel(groupBox_7);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_8->addWidget(label_5, 1, 0, 1, 1);

        spin_randw_numWalkers = new QSpinBox(groupBox_7);
        spin_randw_numWalkers->setObjectName(QString::fromUtf8("spin_randw_numWalkers"));

        gridLayout_8->addWidget(spin_randw_numWalkers, 1, 1, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        spin_randw_minWalk = new QDoubleSpinBox(groupBox_7);
        spin_randw_minWalk->setObjectName(QString::fromUtf8("spin_randw_minWalk"));

        horizontalLayout->addWidget(spin_randw_minWalk);

        spin_randw_maxWalk = new QDoubleSpinBox(groupBox_7);
        spin_randw_maxWalk->setObjectName(QString::fromUtf8("spin_randw_maxWalk"));

        horizontalLayout->addWidget(spin_randw_maxWalk);


        gridLayout_8->addLayout(horizontalLayout, 2, 1, 1, 1);


        verticalLayout_2->addWidget(groupBox_7);

        groupBox_9 = new QGroupBox(Tab_Opt);
        groupBox_9->setObjectName(QString::fromUtf8("groupBox_9"));
        gridLayout_10 = new QGridLayout(groupBox_9);
        gridLayout_10->setObjectName(QString::fromUtf8("gridLayout_10"));
        label_8 = new QLabel(groupBox_9);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_10->addWidget(label_8, 0, 0, 1, 1);

        spin_p_aniso = new QSpinBox(groupBox_9);
        spin_p_aniso->setObjectName(QString::fromUtf8("spin_p_aniso"));
        spin_p_aniso->setMaximum(100);

        gridLayout_10->addWidget(spin_p_aniso, 0, 1, 1, 1);

        spin_aniso_amp = new QDoubleSpinBox(groupBox_9);
        spin_aniso_amp->setObjectName(QString::fromUtf8("spin_aniso_amp"));

        gridLayout_10->addWidget(spin_aniso_amp, 1, 1, 1, 1);

        label_11 = new QLabel(groupBox_9);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_10->addWidget(label_11, 1, 0, 1, 1);


        verticalLayout_2->addWidget(groupBox_9);

        verticalSpacer_3 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        verticalLayout_2->addItem(verticalSpacer_3);


        gridLayout->addLayout(verticalLayout_2, 0, 2, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_9->setBuddy(spin_numInitial);
        label_26->setBuddy(spin_popSize);
        label_genTotal->setBuddy(spin_contStructs);
        label->setBuddy(spin_tol_enthalpy);
        label_2->setBuddy(spin_tol_geo);
        label_25->setBuddy(spin_p_cross);
        label_3->setBuddy(spin_p_twist);
        label_10->setBuddy(spin_twist_minRot);
        label_29->setBuddy(spin_p_exch);
        label_27->setBuddy(spin_exch_numExch);
        label_31->setBuddy(spin_p_randw);
        label_30->setBuddy(spin_randw_minWalk);
        label_5->setBuddy(spin_randw_numWalkers);
        label_8->setBuddy(spin_p_aniso);
        label_11->setBuddy(spin_aniso_amp);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(list_seeds, push_addSeed);
        QWidget::setTabOrder(push_addSeed, push_removeSeed);
        QWidget::setTabOrder(push_removeSeed, spin_popSize);
        QWidget::setTabOrder(spin_popSize, spin_contStructs);
        QWidget::setTabOrder(spin_contStructs, cb_limitRunningJobs);
        QWidget::setTabOrder(cb_limitRunningJobs, spin_runningJobLimit);
        QWidget::setTabOrder(spin_runningJobLimit, spin_failLimit);
        QWidget::setTabOrder(spin_failLimit, combo_failAction);
        QWidget::setTabOrder(combo_failAction, spin_tol_enthalpy);
        QWidget::setTabOrder(spin_tol_enthalpy, spin_tol_geo);
        QWidget::setTabOrder(spin_tol_geo, push_dup_reset);
        QWidget::setTabOrder(push_dup_reset, spin_p_cross);
        QWidget::setTabOrder(spin_p_cross, spin_p_twist);
        QWidget::setTabOrder(spin_p_twist, spin_twist_minRot);
        QWidget::setTabOrder(spin_twist_minRot, spin_p_exch);
        QWidget::setTabOrder(spin_p_exch, spin_exch_numExch);
        QWidget::setTabOrder(spin_exch_numExch, spin_p_randw);
        QWidget::setTabOrder(spin_p_randw, spin_randw_numWalkers);
        QWidget::setTabOrder(spin_randw_numWalkers, spin_randw_minWalk);
        QWidget::setTabOrder(spin_randw_minWalk, spin_randw_maxWalk);

        retranslateUi(Tab_Opt);
        QObject::connect(cb_limitRunningJobs, SIGNAL(toggled(bool)), spin_runningJobLimit, SLOT(setEnabled(bool)));

        QMetaObject::connectSlotsByName(Tab_Opt);
    } // setupUi

    void retranslateUi(QWidget *Tab_Opt)
    {
        Tab_Opt->setWindowTitle(QApplication::translate("Tab_Opt", "Form", 0, QApplication::UnicodeUTF8));
        groupBox_3->setTitle(QApplication::translate("Tab_Opt", "Initial Generation", 0, QApplication::UnicodeUTF8));
        groupBox_2->setTitle(QApplication::translate("Tab_Opt", "Initial Seed Structures:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        list_seeds->setToolTip(QApplication::translate("Tab_Opt", "Load any initial seed structures here.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        push_addSeed->setText(QApplication::translate("Tab_Opt", "&Add", 0, QApplication::UnicodeUTF8));
        push_removeSeed->setText(QApplication::translate("Tab_Opt", "&Remove", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_9->setToolTip(QApplication::translate("Tab_Opt", "Number of initial structures / number of structures to keep in queue for continuous mode.\n"
"\n"
"Default: 20\n"
"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_9->setText(QApplication::translate("Tab_Opt", "Initial structures:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_numInitial->setToolTip(QApplication::translate("Tab_Opt", "Number of initial structures / number of structures to keep in queue for continuous mode.\n"
"", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_4->setTitle(QApplication::translate("Tab_Opt", "Search Parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_26->setToolTip(QApplication::translate("Tab_Opt", "Number of structures to be considered for genetic operations.\n"
"\n"
"Structures are chosen for genetic operations based on a weighted probability list, such that the lowest enthalpy structures have the greatest probability of being chosen. The number specified here is used to determine how many of the lowest enthalpy structures will have a non-zero probability.\n"
"\n"
"Default: 60", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_26->setText(QApplication::translate("Tab_Opt", "Pool size:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_popSize->setToolTip(QApplication::translate("Tab_Opt", "Number of structures to be considered for genetic operations.\n"
"\n"
"Structures are chosen for genetic operations based on a weighted probability list, such that the lowest enthalpy structures have the greatest probability of being chosen. The number specified here is used to determine how many of the lowest enthalpy structures will have a non-zero probability.\n"
"\n"
"Default: 20", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label_genTotal->setToolTip(QApplication::translate("Tab_Opt", "How many structures are created for population > 1. This has no effect in continuous mode.\n"
"\n"
"Default: 10", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_genTotal->setText(QApplication::translate("Tab_Opt", "Continuous structures:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_contStructs->setToolTip(QApplication::translate("Tab_Opt", "Number of structures to be kept \"in progress\" during after the initial generation.\n"
"\n"
"This should depend on the resources available. If a running job limit is set below,\n"
"\n"
"[running job limit] + 1\n"
"\n"
"is a good value here.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cb_limitRunningJobs->setToolTip(QApplication::translate("Tab_Opt", "Check this box to set a limit on the number of jobs that are submitted for a local optimization at any given time.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cb_limitRunningJobs->setText(QApplication::translate("Tab_Opt", "Limit running jobs?", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_runningJobLimit->setToolTip(QApplication::translate("Tab_Opt", "Maximum number of simultaneous local optimizations allowed.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spin_runningJobLimit->setSuffix(QApplication::translate("Tab_Opt", " jobs", 0, QApplication::UnicodeUTF8));
        spin_runningJobLimit->setPrefix(QApplication::translate("Tab_Opt", "Limit to ", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Tab_Opt", "If a job fails ", 0, QApplication::UnicodeUTF8));
        spin_failLimit->setSuffix(QApplication::translate("Tab_Opt", " times,", 0, QApplication::UnicodeUTF8));
        combo_failAction->clear();
        combo_failAction->insertItems(0, QStringList()
         << QApplication::translate("Tab_Opt", "keep trying to optimize.", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Tab_Opt", "kill the structure.", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Tab_Opt", "replace with random.", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        combo_failAction->setToolTip(QApplication::translate("Tab_Opt", "Either keep trying to optimize, kill, or randomize individuals that fail more than the specified number of times.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_6->setText(QApplication::translate("Tab_Opt", "If an atom is", 0, QApplication::UnicodeUTF8));
        spin_explode->setSuffix(QApplication::translate("Tab_Opt", " \303\205", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Tab_Opt", "away from the cluster:", 0, QApplication::UnicodeUTF8));
        combo_explode->clear();
        combo_explode->insertItems(0, QStringList()
         << QApplication::translate("Tab_Opt", "replace with random.", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("Tab_Opt", "kill the structure.", 0, QApplication::UnicodeUTF8)
        );
#ifndef QT_NO_TOOLTIP
        groupBox->setToolTip(QApplication::translate("Tab_Opt", "Experimental: These options are used to fine-tune matching of duplicate structures.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox->setTitle(QApplication::translate("Tab_Opt", "Duplicate matching tolerances", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_tol_enthalpy->setToolTip(QApplication::translate("Tab_Opt", "Tolerance for enthalpy comparisons.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Tab_Opt", "Experimental: These options are used to fine-tune matching of duplicate structures.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Tab_Opt", "Enthalpy (eV/atom)", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        push_dup_reset->setToolTip(QApplication::translate("Tab_Opt", "Manually recheck all structures for duplicates (necessary after changing the above options).", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        push_dup_reset->setText(QApplication::translate("Tab_Opt", "Reset duplicates...", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Tab_Opt", "Geometry", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_tol_geo->setToolTip(QApplication::translate("Tab_Opt", "Geometry tolerance setting", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        groupBox_5->setTitle(QApplication::translate("Tab_Opt", "Crossover", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_25->setToolTip(QApplication::translate("Tab_Opt", "Percentage of new structures to be created from the heredity operator.\n"
"\n"
"Heredity combines two random spatially coherent slabs from two unique parents to form a single offspring.\n"
"\n"
"Default: 85", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_25->setText(QApplication::translate("Tab_Opt", "Percent new crossover:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_p_cross->setToolTip(QApplication::translate("Tab_Opt", "Percentage of new structures to be created from the crossover operator.\n"
"\n"
"Default: 15", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spin_p_cross->setSuffix(QApplication::translate("Tab_Opt", "%", 0, QApplication::UnicodeUTF8));
        groupBox_8->setTitle(QApplication::translate("Tab_Opt", "Twist", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Tab_Opt", "Percent new twist:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_p_twist->setToolTip(QApplication::translate("Tab_Opt", "Percentage of new structures to be created from the crossover operator.\n"
"\n"
"Default: 15", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spin_p_twist->setSuffix(QApplication::translate("Tab_Opt", "%", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Tab_Opt", "Minimum rotation:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_twist_minRot->setToolTip(QApplication::translate("Tab_Opt", "The smallest rotation allowed during the twist.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spin_twist_minRot->setSuffix(QApplication::translate("Tab_Opt", "\302\260", 0, QApplication::UnicodeUTF8));
        groupBox_6->setTitle(QApplication::translate("Tab_Opt", "Exchange", 0, QApplication::UnicodeUTF8));
        label_29->setText(QApplication::translate("Tab_Opt", "Percent new exchange:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_27->setToolTip(QApplication::translate("Tab_Opt", "Standard deviation of the random elements of the strain matrix.\n"
"\n"
"Default: 0.07", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_27->setText(QApplication::translate("Tab_Opt", "Number of exchanges:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_p_exch->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        spin_p_exch->setSuffix(QApplication::translate("Tab_Opt", "%", 0, QApplication::UnicodeUTF8));
        groupBox_7->setTitle(QApplication::translate("Tab_Opt", "Random Walk", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_31->setToolTip(QApplication::translate("Tab_Opt", "Percentage of offspring structures that will be generated from the permutation operator.\n"
"\n"
"The permutation operator will swap two atoms of different type within a single parent. Set to zero if there is only one atom type in the cell!\n"
"\n"
"Default: 5%", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_31->setText(QApplication::translate("Tab_Opt", "Percent new:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label_30->setToolTip(QApplication::translate("Tab_Opt", "Number of separate swaps in the permutation operator.\n"
"\n"
"Default: 3", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_30->setText(QApplication::translate("Tab_Opt", "Displacement range:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_p_randw->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        spin_p_randw->setSuffix(QApplication::translate("Tab_Opt", "%", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Tab_Opt", "Number of walkers:", 0, QApplication::UnicodeUTF8));
        spin_randw_minWalk->setSuffix(QApplication::translate("Tab_Opt", " \303\205", 0, QApplication::UnicodeUTF8));
        spin_randw_maxWalk->setSuffix(QApplication::translate("Tab_Opt", " \303\205", 0, QApplication::UnicodeUTF8));
        groupBox_9->setTitle(QApplication::translate("Tab_Opt", "Anisotropic Expansion", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Tab_Opt", "Percent new:", 0, QApplication::UnicodeUTF8));
        spin_p_aniso->setSuffix(QApplication::translate("Tab_Opt", "%", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Tab_Opt", "Amplitude:", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tab_Opt: public Ui_Tab_Opt {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_OPT_H
