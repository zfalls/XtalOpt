/********************************************************************************
** Form generated from reading UI file 'dialog.ui'
**
** Created: Thu Nov 14 12:44:57 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_H
#define UI_DIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QProgressBar>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QTabWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_XtalOptDialog
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton;
    QPushButton *push_begin;
    QPushButton *push_save;
    QPushButton *push_resume;
    QFrame *frame;
    QGridLayout *gridLayout_2;
    QLabel *label;
    QLabel *label_opt;
    QFrame *frame_2;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_run;
    QFrame *frame_4;
    QGridLayout *gridLayout_5;
    QLabel *label_7;
    QLabel *label_fail;
    QTabWidget *tabs;
    QWidget *tab_log;
    QGridLayout *gridLayout_7;
    QSpacerItem *horizontalSpacer;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_prog;
    QProgressBar *progbar;

    void setupUi(QDialog *XtalOptDialog)
    {
        if (XtalOptDialog->objectName().isEmpty())
            XtalOptDialog->setObjectName(QString::fromUtf8("XtalOptDialog"));
        XtalOptDialog->resize(944, 436);
        QSizePolicy sizePolicy(QSizePolicy::Preferred, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(XtalOptDialog->sizePolicy().hasHeightForWidth());
        XtalOptDialog->setSizePolicy(sizePolicy);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/xtalopt/icons/images/xtalopt-logo.png"), QSize(), QIcon::Normal, QIcon::Off);
        XtalOptDialog->setWindowIcon(icon);
        gridLayout = new QGridLayout(XtalOptDialog);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton = new QPushButton(XtalOptDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(pushButton->sizePolicy().hasHeightForWidth());
        pushButton->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(pushButton, 4, 8, 1, 1);

        push_begin = new QPushButton(XtalOptDialog);
        push_begin->setObjectName(QString::fromUtf8("push_begin"));
        sizePolicy1.setHeightForWidth(push_begin->sizePolicy().hasHeightForWidth());
        push_begin->setSizePolicy(sizePolicy1);

        gridLayout->addWidget(push_begin, 4, 7, 1, 1);

        push_save = new QPushButton(XtalOptDialog);
        push_save->setObjectName(QString::fromUtf8("push_save"));

        gridLayout->addWidget(push_save, 4, 0, 1, 1);

        push_resume = new QPushButton(XtalOptDialog);
        push_resume->setObjectName(QString::fromUtf8("push_resume"));

        gridLayout->addWidget(push_resume, 4, 1, 1, 1);

        frame = new QFrame(XtalOptDialog);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout_2 = new QGridLayout(frame);
        gridLayout_2->setObjectName(QString::fromUtf8("gridLayout_2"));
        label = new QLabel(frame);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_2->addWidget(label, 0, 0, 1, 1);

        label_opt = new QLabel(frame);
        label_opt->setObjectName(QString::fromUtf8("label_opt"));

        gridLayout_2->addWidget(label_opt, 0, 1, 1, 1);


        gridLayout->addWidget(frame, 4, 3, 1, 1);

        frame_2 = new QFrame(XtalOptDialog);
        frame_2->setObjectName(QString::fromUtf8("frame_2"));
        frame_2->setFrameShape(QFrame::StyledPanel);
        frame_2->setFrameShadow(QFrame::Raised);
        gridLayout_3 = new QGridLayout(frame_2);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(frame_2);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 0, 0, 1, 1);

        label_run = new QLabel(frame_2);
        label_run->setObjectName(QString::fromUtf8("label_run"));

        gridLayout_3->addWidget(label_run, 0, 1, 1, 1);


        gridLayout->addWidget(frame_2, 4, 4, 1, 1);

        frame_4 = new QFrame(XtalOptDialog);
        frame_4->setObjectName(QString::fromUtf8("frame_4"));
        frame_4->setFrameShape(QFrame::StyledPanel);
        frame_4->setFrameShadow(QFrame::Raised);
        gridLayout_5 = new QGridLayout(frame_4);
        gridLayout_5->setObjectName(QString::fromUtf8("gridLayout_5"));
        label_7 = new QLabel(frame_4);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        gridLayout_5->addWidget(label_7, 0, 0, 1, 1);

        label_fail = new QLabel(frame_4);
        label_fail->setObjectName(QString::fromUtf8("label_fail"));

        gridLayout_5->addWidget(label_fail, 0, 1, 1, 1);


        gridLayout->addWidget(frame_4, 4, 5, 1, 1);

        tabs = new QTabWidget(XtalOptDialog);
        tabs->setObjectName(QString::fromUtf8("tabs"));
        tabs->setUsesScrollButtons(false);
        tab_log = new QWidget();
        tab_log->setObjectName(QString::fromUtf8("tab_log"));
        gridLayout_7 = new QGridLayout(tab_log);
        gridLayout_7->setObjectName(QString::fromUtf8("gridLayout_7"));
        tabs->addTab(tab_log, QString());

        gridLayout->addWidget(tabs, 2, 0, 1, 9);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer, 4, 6, 1, 1);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        gridLayout->addItem(horizontalSpacer_2, 4, 2, 1, 1);

        label_prog = new QLabel(XtalOptDialog);
        label_prog->setObjectName(QString::fromUtf8("label_prog"));

        gridLayout->addWidget(label_prog, 5, 0, 1, 2);

        progbar = new QProgressBar(XtalOptDialog);
        progbar->setObjectName(QString::fromUtf8("progbar"));
        progbar->setValue(24);

        gridLayout->addWidget(progbar, 5, 2, 1, 7);

        QWidget::setTabOrder(tabs, push_save);
        QWidget::setTabOrder(push_save, push_resume);
        QWidget::setTabOrder(push_resume, push_begin);
        QWidget::setTabOrder(push_begin, pushButton);

        retranslateUi(XtalOptDialog);
        QObject::connect(pushButton, SIGNAL(clicked()), XtalOptDialog, SLOT(accept()));

        tabs->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(XtalOptDialog);
    } // setupUi

    void retranslateUi(QDialog *XtalOptDialog)
    {
        XtalOptDialog->setWindowTitle(QApplication::translate("XtalOptDialog", "XtalOpt", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("XtalOptDialog", "&Hide", 0, QApplication::UnicodeUTF8));
        push_begin->setText(QApplication::translate("XtalOptDialog", "&Begin...", 0, QApplication::UnicodeUTF8));
        push_save->setText(QApplication::translate("XtalOptDialog", "Sa&ve Session", 0, QApplication::UnicodeUTF8));
        push_resume->setText(QApplication::translate("XtalOptDialog", "Resu&me stored session", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("XtalOptDialog", "Optimized: ", 0, QApplication::UnicodeUTF8));
        label_opt->setText(QApplication::translate("XtalOptDialog", "0", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("XtalOptDialog", "Running: ", 0, QApplication::UnicodeUTF8));
        label_run->setText(QApplication::translate("XtalOptDialog", "0", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("XtalOptDialog", "Failures: ", 0, QApplication::UnicodeUTF8));
        label_fail->setText(QApplication::translate("XtalOptDialog", "0", 0, QApplication::UnicodeUTF8));
        tabs->setTabText(tabs->indexOf(tab_log), QApplication::translate("XtalOptDialog", "&Log", 0, QApplication::UnicodeUTF8));
        label_prog->setText(QApplication::translate("XtalOptDialog", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class XtalOptDialog: public Ui_XtalOptDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_H
