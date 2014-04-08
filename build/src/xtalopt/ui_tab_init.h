/********************************************************************************
** Form generated from reading UI file 'tab_init.ui'
**
** Created: Tue Apr 8 13:31:57 2014
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
#include <QtGui/QCheckBox>
#include <QtGui/QDoubleSpinBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QGroupBox>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QSpacerItem>
#include <QtGui/QTableWidget>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Tab_Init
{
public:
    QGridLayout *gridLayout;
    QGroupBox *groupBox_2;
    QGridLayout *gridLayout_4;
    QLineEdit *edit_composition;
    QLabel *label_14;
    QTableWidget *table_comp;
    QGroupBox *groupBox;
    QGridLayout *gridLayout_3;
    QLabel *label_3;
    QLabel *label_2;
    QLabel *label_4;
    QLabel *label_5;
    QDoubleSpinBox *spin_a_min;
    QDoubleSpinBox *spin_b_min;
    QDoubleSpinBox *spin_c_min;
    QDoubleSpinBox *spin_alpha_min;
    QDoubleSpinBox *spin_a_max;
    QDoubleSpinBox *spin_b_max;
    QDoubleSpinBox *spin_c_max;
    QDoubleSpinBox *spin_alpha_max;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_10;
    QDoubleSpinBox *spin_beta_min;
    QDoubleSpinBox *spin_gamma_min;
    QDoubleSpinBox *spin_vol_min;
    QDoubleSpinBox *spin_beta_max;
    QDoubleSpinBox *spin_vol_max;
    QDoubleSpinBox *spin_gamma_max;
    QLabel *label_11;
    QFrame *line;
    QDoubleSpinBox *spin_fixedVolume;
    QCheckBox *cb_fixedVolume;
    QDoubleSpinBox *spin_scaleFactor;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QCheckBox *cb_interatomicDistanceLimit;
    QSpacerItem *horizontalSpacer;
    QLabel *label;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QLabel *label_9;
    QDoubleSpinBox *spin_minRadius;
    QCheckBox *cb_customIAD;
    QCheckBox *cb_checkStepOpt;
    QTableWidget *table_IAD;

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
        edit_composition = new QLineEdit(groupBox_2);
        edit_composition->setObjectName(QString::fromUtf8("edit_composition"));

        gridLayout_4->addWidget(edit_composition, 0, 2, 1, 2);

        label_14 = new QLabel(groupBox_2);
        label_14->setObjectName(QString::fromUtf8("label_14"));
        QSizePolicy sizePolicy(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(label_14->sizePolicy().hasHeightForWidth());
        label_14->setSizePolicy(sizePolicy);

        gridLayout_4->addWidget(label_14, 0, 1, 1, 1);

        table_comp = new QTableWidget(groupBox_2);
        if (table_comp->columnCount() < 5)
            table_comp->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        table_comp->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        table_comp->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        table_comp->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        table_comp->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        table_comp->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        table_comp->setObjectName(QString::fromUtf8("table_comp"));
        table_comp->setEditTriggers(QAbstractItemView::NoEditTriggers);
        table_comp->setSortingEnabled(true);
        table_comp->horizontalHeader()->setMinimumSectionSize(9);
        table_comp->horizontalHeader()->setStretchLastSection(true);

        gridLayout_4->addWidget(table_comp, 1, 1, 1, 3);


        gridLayout->addWidget(groupBox_2, 0, 0, 1, 1);

        groupBox = new QGroupBox(Tab_Init);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        gridLayout_3 = new QGridLayout(groupBox);
        gridLayout_3->setObjectName(QString::fromUtf8("gridLayout_3"));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        gridLayout_3->addWidget(label_3, 2, 0, 1, 1);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        gridLayout_3->addWidget(label_2, 3, 0, 1, 1);

        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        gridLayout_3->addWidget(label_4, 4, 0, 1, 1);

        label_5 = new QLabel(groupBox);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        gridLayout_3->addWidget(label_5, 1, 0, 1, 1);

        spin_a_min = new QDoubleSpinBox(groupBox);
        spin_a_min->setObjectName(QString::fromUtf8("spin_a_min"));
        spin_a_min->setDecimals(5);
        spin_a_min->setSingleStep(0.1);
        spin_a_min->setValue(3);

        gridLayout_3->addWidget(spin_a_min, 1, 1, 1, 1);

        spin_b_min = new QDoubleSpinBox(groupBox);
        spin_b_min->setObjectName(QString::fromUtf8("spin_b_min"));
        spin_b_min->setDecimals(5);
        spin_b_min->setSingleStep(0.1);
        spin_b_min->setValue(3);

        gridLayout_3->addWidget(spin_b_min, 2, 1, 1, 1);

        spin_c_min = new QDoubleSpinBox(groupBox);
        spin_c_min->setObjectName(QString::fromUtf8("spin_c_min"));
        spin_c_min->setDecimals(5);
        spin_c_min->setSingleStep(0.1);
        spin_c_min->setValue(3);

        gridLayout_3->addWidget(spin_c_min, 3, 1, 1, 1);

        spin_alpha_min = new QDoubleSpinBox(groupBox);
        spin_alpha_min->setObjectName(QString::fromUtf8("spin_alpha_min"));
        spin_alpha_min->setDecimals(5);
        spin_alpha_min->setMaximum(180);
        spin_alpha_min->setSingleStep(0.1);
        spin_alpha_min->setValue(60);

        gridLayout_3->addWidget(spin_alpha_min, 4, 1, 1, 1);

        spin_a_max = new QDoubleSpinBox(groupBox);
        spin_a_max->setObjectName(QString::fromUtf8("spin_a_max"));
        spin_a_max->setDecimals(5);
        spin_a_max->setMaximum(9999.99);
        spin_a_max->setSingleStep(0.1);
        spin_a_max->setValue(10);

        gridLayout_3->addWidget(spin_a_max, 1, 3, 1, 1);

        spin_b_max = new QDoubleSpinBox(groupBox);
        spin_b_max->setObjectName(QString::fromUtf8("spin_b_max"));
        spin_b_max->setDecimals(5);
        spin_b_max->setMaximum(9999.99);
        spin_b_max->setSingleStep(0.1);
        spin_b_max->setValue(10);

        gridLayout_3->addWidget(spin_b_max, 2, 3, 1, 1);

        spin_c_max = new QDoubleSpinBox(groupBox);
        spin_c_max->setObjectName(QString::fromUtf8("spin_c_max"));
        spin_c_max->setDecimals(5);
        spin_c_max->setMaximum(9999.99);
        spin_c_max->setSingleStep(0.1);
        spin_c_max->setValue(10);

        gridLayout_3->addWidget(spin_c_max, 3, 3, 1, 1);

        spin_alpha_max = new QDoubleSpinBox(groupBox);
        spin_alpha_max->setObjectName(QString::fromUtf8("spin_alpha_max"));
        spin_alpha_max->setDecimals(5);
        spin_alpha_max->setMaximum(180);
        spin_alpha_max->setSingleStep(0.1);
        spin_alpha_max->setValue(120);

        gridLayout_3->addWidget(spin_alpha_max, 4, 3, 1, 1);

        label_6 = new QLabel(groupBox);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        QSizePolicy sizePolicy1(QSizePolicy::Minimum, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(label_6->sizePolicy().hasHeightForWidth());
        label_6->setSizePolicy(sizePolicy1);
        label_6->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_6, 0, 1, 1, 1);

        label_7 = new QLabel(groupBox);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setAlignment(Qt::AlignCenter);

        gridLayout_3->addWidget(label_7, 0, 3, 1, 1);

        label_8 = new QLabel(groupBox);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        gridLayout_3->addWidget(label_8, 5, 0, 1, 1);

        label_10 = new QLabel(groupBox);
        label_10->setObjectName(QString::fromUtf8("label_10"));

        gridLayout_3->addWidget(label_10, 8, 0, 1, 1);

        spin_beta_min = new QDoubleSpinBox(groupBox);
        spin_beta_min->setObjectName(QString::fromUtf8("spin_beta_min"));
        spin_beta_min->setDecimals(5);
        spin_beta_min->setMaximum(180);
        spin_beta_min->setSingleStep(0.1);
        spin_beta_min->setValue(60);

        gridLayout_3->addWidget(spin_beta_min, 5, 1, 1, 1);

        spin_gamma_min = new QDoubleSpinBox(groupBox);
        spin_gamma_min->setObjectName(QString::fromUtf8("spin_gamma_min"));
        spin_gamma_min->setDecimals(5);
        spin_gamma_min->setMaximum(180);
        spin_gamma_min->setSingleStep(0.1);
        spin_gamma_min->setValue(60);

        gridLayout_3->addWidget(spin_gamma_min, 6, 1, 1, 1);

        spin_vol_min = new QDoubleSpinBox(groupBox);
        spin_vol_min->setObjectName(QString::fromUtf8("spin_vol_min"));
        spin_vol_min->setDecimals(2);
        spin_vol_min->setMaximum(1e+06);
        spin_vol_min->setSingleStep(1);
        spin_vol_min->setValue(0);

        gridLayout_3->addWidget(spin_vol_min, 8, 1, 1, 1);

        spin_beta_max = new QDoubleSpinBox(groupBox);
        spin_beta_max->setObjectName(QString::fromUtf8("spin_beta_max"));
        spin_beta_max->setDecimals(5);
        spin_beta_max->setMaximum(180);
        spin_beta_max->setSingleStep(0.1);
        spin_beta_max->setValue(120);

        gridLayout_3->addWidget(spin_beta_max, 5, 3, 1, 1);

        spin_vol_max = new QDoubleSpinBox(groupBox);
        spin_vol_max->setObjectName(QString::fromUtf8("spin_vol_max"));
        spin_vol_max->setDecimals(2);
        spin_vol_max->setMaximum(1e+06);
        spin_vol_max->setSingleStep(1);
        spin_vol_max->setValue(1e+06);

        gridLayout_3->addWidget(spin_vol_max, 8, 3, 1, 1);

        spin_gamma_max = new QDoubleSpinBox(groupBox);
        spin_gamma_max->setObjectName(QString::fromUtf8("spin_gamma_max"));
        spin_gamma_max->setDecimals(5);
        spin_gamma_max->setMaximum(180);
        spin_gamma_max->setSingleStep(0.1);
        spin_gamma_max->setValue(120);

        gridLayout_3->addWidget(spin_gamma_max, 6, 3, 1, 1);

        label_11 = new QLabel(groupBox);
        label_11->setObjectName(QString::fromUtf8("label_11"));

        gridLayout_3->addWidget(label_11, 6, 0, 1, 1);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);

        gridLayout_3->addWidget(line, 1, 2, 8, 1);

        spin_fixedVolume = new QDoubleSpinBox(groupBox);
        spin_fixedVolume->setObjectName(QString::fromUtf8("spin_fixedVolume"));
        spin_fixedVolume->setEnabled(false);
        spin_fixedVolume->setDecimals(5);
        spin_fixedVolume->setMaximum(999999);
        spin_fixedVolume->setSingleStep(0.1);
        spin_fixedVolume->setValue(500);

        gridLayout_3->addWidget(spin_fixedVolume, 10, 3, 1, 1);

        cb_fixedVolume = new QCheckBox(groupBox);
        cb_fixedVolume->setObjectName(QString::fromUtf8("cb_fixedVolume"));

        gridLayout_3->addWidget(cb_fixedVolume, 10, 0, 1, 2);

        spin_scaleFactor = new QDoubleSpinBox(groupBox);
        spin_scaleFactor->setObjectName(QString::fromUtf8("spin_scaleFactor"));
        spin_scaleFactor->setEnabled(false);
        spin_scaleFactor->setDecimals(2);
        spin_scaleFactor->setMaximum(1);
        spin_scaleFactor->setSingleStep(0.05);
        spin_scaleFactor->setValue(0.5);

        gridLayout_3->addWidget(spin_scaleFactor, 12, 3, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout_3->addItem(verticalSpacer_2, 14, 3, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        cb_interatomicDistanceLimit = new QCheckBox(groupBox);
        cb_interatomicDistanceLimit->setObjectName(QString::fromUtf8("cb_interatomicDistanceLimit"));
        cb_interatomicDistanceLimit->setEnabled(true);

        horizontalLayout->addWidget(cb_interatomicDistanceLimit);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setEnabled(false);

        horizontalLayout->addWidget(label);


        gridLayout_3->addLayout(horizontalLayout, 12, 0, 1, 2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        label_9 = new QLabel(groupBox);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        label_9->setEnabled(false);

        horizontalLayout_3->addWidget(label_9);


        gridLayout_3->addLayout(horizontalLayout_3, 13, 0, 1, 2);

        spin_minRadius = new QDoubleSpinBox(groupBox);
        spin_minRadius->setObjectName(QString::fromUtf8("spin_minRadius"));
        spin_minRadius->setEnabled(false);
        spin_minRadius->setDecimals(2);
        spin_minRadius->setSingleStep(0.05);
        spin_minRadius->setValue(0.25);

        gridLayout_3->addWidget(spin_minRadius, 13, 3, 1, 1);

        cb_customIAD = new QCheckBox(groupBox);
        cb_customIAD->setObjectName(QString::fromUtf8("cb_customIAD"));
        cb_customIAD->setEnabled(true);

        gridLayout_3->addWidget(cb_customIAD, 14, 0, 1, 1);

        cb_checkStepOpt = new QCheckBox(groupBox);
        cb_checkStepOpt->setObjectName(QString::fromUtf8("cb_checkStepOpt"));
        cb_checkStepOpt->setEnabled(true);

        gridLayout_3->addWidget(cb_checkStepOpt, 14, 1, 1, 1);

        table_IAD = new QTableWidget(groupBox);
        if (table_IAD->columnCount() < 3)
            table_IAD->setColumnCount(3);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        table_IAD->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        table_IAD->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        table_IAD->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        table_IAD->setObjectName(QString::fromUtf8("table_IAD"));
        table_IAD->setSortingEnabled(true);
        table_IAD->setEditTriggers(QAbstractItemView::DoubleClicked);
        table_IAD->horizontalHeader()->setMinimumSectionSize(9);
        table_IAD->horizontalHeader()->setStretchLastSection(true);

        gridLayout_3->addWidget(table_IAD, 15, 0, 1, 3);


        gridLayout->addWidget(groupBox, 0, 1, 1, 1);

#ifndef QT_NO_SHORTCUT
        label_14->setBuddy(edit_composition);
        label_3->setBuddy(spin_b_min);
        label_2->setBuddy(spin_c_min);
        label_4->setBuddy(spin_alpha_min);
        label_5->setBuddy(spin_a_min);
        label_8->setBuddy(spin_beta_min);
        label_10->setBuddy(spin_vol_min);
        label_11->setBuddy(spin_gamma_min);
        label->setBuddy(spin_scaleFactor);
        label_9->setBuddy(spin_minRadius);
#endif // QT_NO_SHORTCUT
        QWidget::setTabOrder(edit_composition, spin_a_min);
        QWidget::setTabOrder(spin_a_min, spin_a_max);
        QWidget::setTabOrder(spin_a_max, spin_b_min);
        QWidget::setTabOrder(spin_b_min, spin_b_max);
        QWidget::setTabOrder(spin_b_max, spin_c_min);
        QWidget::setTabOrder(spin_c_min, spin_c_max);
        QWidget::setTabOrder(spin_c_max, spin_alpha_min);
        QWidget::setTabOrder(spin_alpha_min, spin_alpha_max);
        QWidget::setTabOrder(spin_alpha_max, spin_beta_min);
        QWidget::setTabOrder(spin_beta_min, spin_beta_max);
        QWidget::setTabOrder(spin_beta_max, spin_gamma_min);
        QWidget::setTabOrder(spin_gamma_min, spin_gamma_max);
        QWidget::setTabOrder(spin_gamma_max, spin_vol_min);
        QWidget::setTabOrder(spin_vol_min, spin_vol_max);
        QWidget::setTabOrder(spin_vol_max, cb_fixedVolume);
        QWidget::setTabOrder(cb_fixedVolume, spin_fixedVolume);
        QWidget::setTabOrder(spin_fixedVolume, cb_interatomicDistanceLimit);
        QWidget::setTabOrder(cb_interatomicDistanceLimit, spin_scaleFactor);
        QWidget::setTabOrder(spin_scaleFactor, spin_minRadius);
        QWidget::setTabOrder(spin_minRadius, table_comp);
        QWidget::setTabOrder(table_comp, table_IAD);
        QWidget::setTabOrder(table_IAD, cb_customIAD);
        QWidget::setTabOrder(cb_customIAD, cb_checkStepOpt);

        retranslateUi(Tab_Init);
        QObject::connect(cb_fixedVolume, SIGNAL(toggled(bool)), spin_fixedVolume, SLOT(setEnabled(bool)));
        QObject::connect(cb_fixedVolume, SIGNAL(toggled(bool)), spin_vol_min, SLOT(setDisabled(bool)));
        QObject::connect(cb_fixedVolume, SIGNAL(toggled(bool)), label_10, SLOT(setDisabled(bool)));
        QObject::connect(cb_fixedVolume, SIGNAL(toggled(bool)), spin_vol_max, SLOT(setDisabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), spin_scaleFactor, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), label, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), label_9, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), spin_minRadius, SLOT(setEnabled(bool)));
        QObject::connect(cb_interatomicDistanceLimit, SIGNAL(toggled(bool)), cb_customIAD, SLOT(setDisabled(bool)));
        QObject::connect(cb_customIAD, SIGNAL(toggled(bool)), table_IAD, SLOT(setEnabled(bool)));
        QObject::connect(cb_customIAD, SIGNAL(toggled(bool)), cb_interatomicDistanceLimit, SLOT(setDisabled(bool)));

        QMetaObject::connectSlotsByName(Tab_Init);
    } // setupUi

    void retranslateUi(QWidget *Tab_Init)
    {
        Tab_Init->setWindowTitle(QApplication::translate("Tab_Init", "Form", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        Tab_Init->setToolTip(QString());
#endif // QT_NO_TOOLTIP
        groupBox_2->setTitle(QApplication::translate("Tab_Init", "Composition", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        edit_composition->setToolTip(QApplication::translate("Tab_Init", "Type the composition of the crystal here,\n"
"\n"
"Examples:\n"
"ti1o2\n"
"Ti1O2\n"
"TI1O2\n"
"Ti1 O2\n"
"Ti 1 o 2\n"
"etc.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        label_14->setText(QApplication::translate("Tab_Init", "&Cell composition:", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem = table_comp->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("Tab_Init", "Symbol", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem1 = table_comp->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("Tab_Init", "Z", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem2 = table_comp->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("Tab_Init", "#", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem3 = table_comp->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("Tab_Init", "Mass", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem4 = table_comp->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("Tab_Init", "Min. Radius", 0, QApplication::UnicodeUTF8));
        groupBox->setTitle(QApplication::translate("Tab_Init", "Unit Cell Parameters", 0, QApplication::UnicodeUTF8));
        label_3->setText(QApplication::translate("Tab_Init", "Length B (\303\205):", 0, QApplication::UnicodeUTF8));
        label_2->setText(QApplication::translate("Tab_Init", "Length C (\303\205):", 0, QApplication::UnicodeUTF8));
        label_4->setText(QApplication::translate("Tab_Init", "Angle \316\261 (\302\260):", 0, QApplication::UnicodeUTF8));
        label_5->setText(QApplication::translate("Tab_Init", "Length A (\303\205):", 0, QApplication::UnicodeUTF8));
        label_6->setText(QApplication::translate("Tab_Init", "Minimum", 0, QApplication::UnicodeUTF8));
        label_7->setText(QApplication::translate("Tab_Init", "Maximum", 0, QApplication::UnicodeUTF8));
        label_8->setText(QApplication::translate("Tab_Init", "Angle \316\262 (\302\260):", 0, QApplication::UnicodeUTF8));
        label_10->setText(QApplication::translate("Tab_Init", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'Sans Serif'; font-size:10pt; font-weight:400; font-style:normal;\">\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\">Volume (\303\205<span style=\" vertical-align:super;\">3</span>):</p></body></html>", 0, QApplication::UnicodeUTF8));
        label_11->setText(QApplication::translate("Tab_Init", "Angle \316\263 (\302\260):", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_fixedVolume->setToolTip(QApplication::translate("Tab_Init", "Use this to specify a starting volume for the structure before optimizing.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        cb_fixedVolume->setToolTip(QApplication::translate("Tab_Init", "Use this to specify a starting volume for the structure before optimizing.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cb_fixedVolume->setText(QApplication::translate("Tab_Init", "Fixed volume:", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        spin_scaleFactor->setToolTip(QApplication::translate("Tab_Init", "Use this to limit the shortest interatomic distance between\n"
"atoms. This ensures that atoms aren't overlapping.\n"
"\n"
"The value specified here is multiplied by each atom's covalent \n"
"radius, and the sum of the scaled radii are used to enforce a\n"
"minimum atomic separation between atoms.\n"
"\n"
"The default recommended value is 0.5. This ensures that atoms will not be unphysically close (which may prevent\n"
"certain optimization codes from working). Using a higher value\n"
"is acceptable while creating random structures in the first \n"
"generation, but may prevent the crossover operator from being\n"
"able to create offspring that meet this restriction.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        spin_scaleFactor->setSuffix(QApplication::translate("Tab_Init", " * radii", 0, QApplication::UnicodeUTF8));
#ifndef QT_NO_TOOLTIP
        cb_interatomicDistanceLimit->setToolTip(QApplication::translate("Tab_Init", "Use this to limit the shortest interatomic distance between atoms. This ensures that atoms aren't overlapping.", 0, QApplication::UnicodeUTF8));
#endif // QT_NO_TOOLTIP
        cb_interatomicDistanceLimit->setText(QApplication::translate("Tab_Init", "Limit interatomic distance?", 0, QApplication::UnicodeUTF8));
        label->setText(QApplication::translate("Tab_Init", "Scale factor:", 0, QApplication::UnicodeUTF8));
        label_9->setText(QApplication::translate("Tab_Init", "Minimum radius:", 0, QApplication::UnicodeUTF8));
        spin_minRadius->setSuffix(QApplication::translate("Tab_Init", " \303\205", 0, QApplication::UnicodeUTF8));
        cb_customIAD->setText(QApplication::translate("Tab_Init", "Use custom interatomic distances?", 0, QApplication::UnicodeUTF8));
        cb_checkStepOpt->setText(QApplication::translate("Tab_Init", "Check after each opt. step?", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem5 = table_IAD->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("Tab_Init", "Atom 1", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem6 = table_IAD->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("Tab_Init", "Atom 2", 0, QApplication::UnicodeUTF8));
        QTableWidgetItem *___qtablewidgetitem7 = table_IAD->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("Tab_Init", "Min. IAD", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Tab_Init: public Ui_Tab_Init {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TAB_INIT_H
