/********************************************************************************
** Form generated from reading UI file 'bhoomi.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BHOOMI_H
#define UI_BHOOMI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>
#include "kshetra/ranbhoomi.h"

QT_BEGIN_NAMESPACE

class Ui_ranbhoomi
{
public:
    QAction *actionreset;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    Ranbhoomi *bhoomi;
    QMenuBar *menubar;
    QMenu *menubhoomi;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *ranbhoomi)
    {
        if (ranbhoomi->objectName().isEmpty())
            ranbhoomi->setObjectName(QString::fromUtf8("ranbhoomi"));
        ranbhoomi->resize(800, 600);
        actionreset = new QAction(ranbhoomi);
        actionreset->setObjectName(QString::fromUtf8("actionreset"));
        actionreset->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/edit-redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionreset->setIcon(icon);
        actionreset->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(ranbhoomi);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        bhoomi = new Ranbhoomi(centralwidget);
        bhoomi->setObjectName(QString::fromUtf8("bhoomi"));
        bhoomi->setAutoFillBackground(false);
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::NoBrush);
        bhoomi->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        bhoomi->setForegroundBrush(brush1);

        verticalLayout->addWidget(bhoomi);

        ranbhoomi->setCentralWidget(centralwidget);
        menubar = new QMenuBar(ranbhoomi);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menubhoomi = new QMenu(menubar);
        menubhoomi->setObjectName(QString::fromUtf8("menubhoomi"));
        ranbhoomi->setMenuBar(menubar);
        statusbar = new QStatusBar(ranbhoomi);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        ranbhoomi->setStatusBar(statusbar);
        toolBar = new QToolBar(ranbhoomi);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        ranbhoomi->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menubhoomi->menuAction());
        menubhoomi->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionreset);

        retranslateUi(ranbhoomi);

        QMetaObject::connectSlotsByName(ranbhoomi);
    } // setupUi

    void retranslateUi(QMainWindow *ranbhoomi)
    {
        ranbhoomi->setWindowTitle(QCoreApplication::translate("ranbhoomi", "MainWindow", nullptr));
        actionreset->setText(QCoreApplication::translate("ranbhoomi", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        actionreset->setToolTip(QCoreApplication::translate("ranbhoomi", "<html><head/><body><p><span style=\" font-weight:700;\">Resets the field </span></p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionreset->setShortcut(QCoreApplication::translate("ranbhoomi", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(whatsthis)
        bhoomi->setWhatsThis(QCoreApplication::translate("ranbhoomi", "<html><head/><body><p>graphics view class showing the field</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        menubhoomi->setTitle(QCoreApplication::translate("ranbhoomi", "Bhoomi", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("ranbhoomi", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ranbhoomi: public Ui_ranbhoomi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BHOOMI_H
