/********************************************************************************
** Form generated from reading UI file 'filesrvdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILESRVDLG_H
#define UI_FILESRVDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QProgressBar>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_FileSrvDlg
{
public:
    QPushButton *openFilePushButton;
    QPushButton *sendFilePushButton;
    QProgressBar *sendProgressBar;
    QPushButton *srvClosePushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *sfileNameLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *sfileSizeLineEdit;
    QLineEdit *sendSizeLineEdit;
    QLabel *label_5;

    void setupUi(QDialog *FileSrvDlg)
    {
        if (FileSrvDlg->objectName().isEmpty())
            FileSrvDlg->setObjectName(QStringLiteral("FileSrvDlg"));
        FileSrvDlg->resize(440, 210);
        openFilePushButton = new QPushButton(FileSrvDlg);
        openFilePushButton->setObjectName(QStringLiteral("openFilePushButton"));
        openFilePushButton->setGeometry(QRect(300, 60, 31, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        openFilePushButton->setFont(font);
        sendFilePushButton = new QPushButton(FileSrvDlg);
        sendFilePushButton->setObjectName(QStringLiteral("sendFilePushButton"));
        sendFilePushButton->setGeometry(QRect(340, 60, 75, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        sendFilePushButton->setFont(font1);
        sendProgressBar = new QProgressBar(FileSrvDlg);
        sendProgressBar->setObjectName(QStringLiteral("sendProgressBar"));
        sendProgressBar->setGeometry(QRect(100, 160, 241, 23));
        sendProgressBar->setValue(0);
        srvClosePushButton = new QPushButton(FileSrvDlg);
        srvClosePushButton->setObjectName(QStringLiteral("srvClosePushButton"));
        srvClosePushButton->setGeometry(QRect(340, 150, 75, 31));
        srvClosePushButton->setFont(font);
        label = new QLabel(FileSrvDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 15, 91, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label->setFont(font2);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(FileSrvDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 71, 31));
        label_2->setFont(font);
        sfileNameLineEdit = new QLineEdit(FileSrvDlg);
        sfileNameLineEdit->setObjectName(QStringLiteral("sfileNameLineEdit"));
        sfileNameLineEdit->setEnabled(false);
        sfileNameLineEdit->setGeometry(QRect(100, 60, 201, 31));
        sfileNameLineEdit->setFont(font);
        sfileNameLineEdit->setAlignment(Qt::AlignCenter);
        sfileNameLineEdit->setReadOnly(true);
        label_3 = new QLabel(FileSrvDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 110, 51, 31));
        label_3->setFont(font);
        label_4 = new QLabel(FileSrvDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 110, 61, 31));
        label_4->setFont(font);
        sfileSizeLineEdit = new QLineEdit(FileSrvDlg);
        sfileSizeLineEdit->setObjectName(QStringLiteral("sfileSizeLineEdit"));
        sfileSizeLineEdit->setEnabled(false);
        sfileSizeLineEdit->setGeometry(QRect(120, 110, 71, 31));
        sfileSizeLineEdit->setFont(font);
        sfileSizeLineEdit->setAlignment(Qt::AlignCenter);
        sfileSizeLineEdit->setReadOnly(true);
        sendSizeLineEdit = new QLineEdit(FileSrvDlg);
        sendSizeLineEdit->setObjectName(QStringLiteral("sendSizeLineEdit"));
        sendSizeLineEdit->setEnabled(false);
        sendSizeLineEdit->setGeometry(QRect(260, 110, 71, 31));
        sendSizeLineEdit->setFont(font);
        sendSizeLineEdit->setAlignment(Qt::AlignCenter);
        sendSizeLineEdit->setReadOnly(true);
        label_5 = new QLabel(FileSrvDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 160, 71, 21));
        label_5->setFont(font);

        retranslateUi(FileSrvDlg);

        QMetaObject::connectSlotsByName(FileSrvDlg);
    } // setupUi

    void retranslateUi(QDialog *FileSrvDlg)
    {
        FileSrvDlg->setWindowTitle(QApplication::translate("FileSrvDlg", "\345\217\221 \351\200\201 \346\226\207 \344\273\266", Q_NULLPTR));
        openFilePushButton->setText(QApplication::translate("FileSrvDlg", "...", Q_NULLPTR));
        sendFilePushButton->setText(QApplication::translate("FileSrvDlg", "\345\217\221  \351\200\201", Q_NULLPTR));
        srvClosePushButton->setText(QApplication::translate("FileSrvDlg", "\345\201\234  \346\255\242", Q_NULLPTR));
        label->setText(QApplication::translate("FileSrvDlg", "\346\226\207 \344\273\266 \345\217\221 \351\200\201", Q_NULLPTR));
        label_2->setText(QApplication::translate("FileSrvDlg", "\345\217\221 \351\200\201 \346\226\207 \344\273\266", Q_NULLPTR));
        label_3->setText(QApplication::translate("FileSrvDlg", "\345\244\247   \345\260\217\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("FileSrvDlg", "\345\267\262 \345\217\221 \351\200\201\357\274\232", Q_NULLPTR));
        sfileSizeLineEdit->setText(QString());
        sendSizeLineEdit->setText(QString());
        label_5->setText(QApplication::translate("FileSrvDlg", "\350\277\233         \345\272\246", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class FileSrvDlg: public Ui_FileSrvDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILESRVDLG_H
