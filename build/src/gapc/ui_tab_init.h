/********************************************************************************
** Form generated from reading UI file 'tab_init.ui'
**
** Created: Wed Dec 18 13:39:59 2013
**      by: Qt User Interface Compiler version 4.8.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TAB_INIT_H
#define UI_TAB_INIT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QListWidget>
#include <QtGui/QSpacerItem>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Init
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QListWidget *list_composition;
    QLineEdit *edit_composition;
    QLabel *label_14;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QFrame *line;
    QDoubleSpinBox *spin_minIAD;
    QSpacerItem *verticalSpacer_2;
    QLabel *label;
    QDoubleSpinBox *spin_maxIAD;

    void setupUi(QWidget *Tab_Init)
    {
        if (Tab_Init->objectName().isEmpty())
            Tab_Init->setObjectName(QString::fromUtf8("Tab_Init"));
        Tab_Init->resize(920, 453);
        gridLayout = new QGridLayout(Tab_Init);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        groupBox_2 = new QGroupBox(Tab_Init);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        gridLayout_4 = new QGridLayout(groupBox_2);
        gridLayout_4->setObjectName(QString::fromUtf8("gridLayout_4"));
        list_composition = new QListWidget(groupBox_2);
        list_composition->setObjectName(QString::fromUtf8("list_composition"));

        gridLayout_4->addWidget(list_composition, 1, 1, 1, 4);

        edit_composition = new QLineEdit(groupBox_2);
        edit_composition->setObjectName(QString::fromUtf8("edit_composition"));

        gridLayout_4->addWidget(edit_composition, 0, 2, 1, 3);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_14, 0, 1, 1, 1);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(Tab_Init);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 0, 0, 3, 1);

        spin_minIAD = new QDoubleSpinBox(groupBox);
        spin_minIAD->setObjectName(QString::fromUtf8("spin_minIAD"));
        spin_minIAD->setEnabled(true);
        spin_minIAD->setDecimals(2);
        spin_minIAD->setMaximum(999999);
        spin_minIAD->setSingleStep(0.1);
        spin_minIAD->setValue(1);

        gridLayout_3->addWidget(spin_minIAD, 4, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 5, 1, 1, 1);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        gridLayout_3->addWidget(label, 4, 0, 1, 1);

        spin_maxIAD = new QDoubleSpinBox(groupBox);
        spin_maxIAD->setObjectName(QString::fromUtf8("spin_maxIAD"));
        spin_maxIAD->setValue(3);

        gridLayout_3->addWidget(spin_maxIAD, 4, 2, 1, 1);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_14->setBuddy(edit_composition);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(edit_composition, list_composition);
        QWidget::setTabOrder(list_composition, spin_minIAD);

        retranslateUi(Tab_Init);

        QMetaObject::connectSlotsByName(Tab_Init);
    } // setupUi

    void retranslateUi(QWidget *Tab_Init)
    {
        Tab_Init->setWindowTitle(QApplication::translate("Tab_Init", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Tab_Init->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("Tab_Init", "Composition", 0, QApplication::UnicodeUTF8));
        label_14->setText(QApplication::translate("Tab_Init", "&Cell composition:", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Tab_Init", "Structural Parameters", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_minIAD->setToolTip(QApplication::translate("Tab_Init", "Use this to limit the shortest interatomic distance between atoms. This ensures that atoms aren't overlapping.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spin_minIAD->setSuffix(QApplication::translate("Tab_Init", " \303\205", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        label->setToolTip(QApplication::translate("Tab_Init", "Set the range for the nearest neighbor distance in the cluster.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("Tab_Init", "Nearest neighbor distance range:", 0, QApplication::UnicodeUTF8));
        spin_maxIAD->setSuffix(QApplication::translate("Tab_Init", " \303\205", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tab_Init: public Ui_Tab_Init {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_INIT_H
