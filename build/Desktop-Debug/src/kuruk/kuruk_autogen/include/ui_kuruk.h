/********************************************************************************
** Form generated from reading UI file 'kuruk.ui'
**
** Created by: Qt User Interface Compiler version 5.15.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_KURUK_H
#define UI_KURUK_H

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
#include "kshetra/kshetra.h"

QT_BEGIN_NAMESPACE

class Ui_kuruk
{
public:
    QAction *actionreset;
    QWidget *centralwidget;
    QVBoxLayout *verticalLayout;
    Kshetra *kshetra;
    QMenuBar *menubar;
    QMenu *menuKuruK;
    QStatusBar *statusbar;
    QToolBar *toolBar;

    void setupUi(QMainWindow *kuruk)
    {
        if (kuruk->objectName().isEmpty())
            kuruk->setObjectName(QString::fromUtf8("kuruk"));
        kuruk->resize(800, 600);
        actionreset = new QAction(kuruk);
        actionreset->setObjectName(QString::fromUtf8("actionreset"));
        actionreset->setCheckable(false);
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/icons/edit-redo.svg"), QSize(), QIcon::Normal, QIcon::Off);
        actionreset->setIcon(icon);
        actionreset->setMenuRole(QAction::NoRole);
        centralwidget = new QWidget(kuruk);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        verticalLayout = new QVBoxLayout(centralwidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        kshetra = new Kshetra(centralwidget);
        kshetra->setObjectName(QString::fromUtf8("kshetra"));
        kshetra->setAutoFillBackground(false);
        QBrush brush(QColor(0, 170, 0, 255));
        brush.setStyle(Qt::NoBrush);
        kshetra->setBackgroundBrush(brush);
        QBrush brush1(QColor(0, 170, 0, 255));
        brush1.setStyle(Qt::NoBrush);
        kshetra->setForegroundBrush(brush1);

        verticalLayout->addWidget(kshetra);

        kuruk->setCentralWidget(centralwidget);
        menubar = new QMenuBar(kuruk);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 22));
        menuKuruK = new QMenu(menubar);
        menuKuruK->setObjectName(QString::fromUtf8("menuKuruK"));
        kuruk->setMenuBar(menubar);
        statusbar = new QStatusBar(kuruk);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        kuruk->setStatusBar(statusbar);
        toolBar = new QToolBar(kuruk);
        toolBar->setObjectName(QString::fromUtf8("toolBar"));
        kuruk->addToolBar(Qt::TopToolBarArea, toolBar);

        menubar->addAction(menuKuruK->menuAction());
        menuKuruK->addSeparator();
        toolBar->addSeparator();
        toolBar->addAction(actionreset);

        retranslateUi(kuruk);

        QMetaObject::connectSlotsByName(kuruk);
    } // setupUi

    void retranslateUi(QMainWindow *kuruk)
    {
        kuruk->setWindowTitle(QCoreApplication::translate("kuruk", "MainWindow", nullptr));
        actionreset->setText(QCoreApplication::translate("kuruk", "Reset", nullptr));
#if QT_CONFIG(tooltip)
        actionreset->setToolTip(QCoreApplication::translate("kuruk", "<html><head/><body><p><span style=\" font-weight:700;\">Resets the field </span></p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(shortcut)
        actionreset->setShortcut(QCoreApplication::translate("kuruk", "Ctrl+R", nullptr));
#endif // QT_CONFIG(shortcut)
#if QT_CONFIG(whatsthis)
        kshetra->setWhatsThis(QCoreApplication::translate("kuruk", "<html><head/><body><p>graphics view class showing the field</p><p><br/></p></body></html>", nullptr));
#endif // QT_CONFIG(whatsthis)
        menuKuruK->setTitle(QCoreApplication::translate("kuruk", "KuruK", nullptr));
        toolBar->setWindowTitle(QCoreApplication::translate("kuruk", "toolBar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class kuruk: public Ui_kuruk {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_KURUK_H
