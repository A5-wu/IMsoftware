/********************************************************************************
** Form generated from reading UI file 'filecntdlg.ui'
**
** Created by: Qt User Interface Compiler version 5.9.8
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FILECNTDLG_H
#define UI_FILECNTDLG_H

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

class Ui_FileCntDlg
{
public:
    QProgressBar *recvProgressBar;
    QPushButton *cntClosePushButton;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *rfileNameLineEdit;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *rfileSizeLineEdit;
    QLineEdit *recvSizeLineEdit;
    QLabel *label_5;
    QLabel *rateLabel;

    void setupUi(QDialog *FileCntDlg)
    {
        if (FileCntDlg->objectName().isEmpty())
            FileCntDlg->setObjectName(QStringLiteral("FileCntDlg"));
        FileCntDlg->resize(440, 210);
        recvProgressBar = new QProgressBar(FileCntDlg);
        recvProgressBar->setObjectName(QStringLiteral("recvProgressBar"));
        recvProgressBar->setGeometry(QRect(100, 160, 241, 23));
        recvProgressBar->setValue(0);
        cntClosePushButton = new QPushButton(FileCntDlg);
        cntClosePushButton->setObjectName(QStringLiteral("cntClosePushButton"));
        cntClosePushButton->setGeometry(QRect(340, 60, 75, 31));
        QFont font;
        font.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font.setPointSize(10);
        font.setBold(true);
        font.setWeight(75);
        cntClosePushButton->setFont(font);
        label = new QLabel(FileCntDlg);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(170, 15, 91, 31));
        QFont font1;
        font1.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label->setAlignment(Qt::AlignCenter);
        label_2 = new QLabel(FileCntDlg);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(30, 60, 71, 31));
        QFont font2;
        font2.setFamily(QString::fromUtf8("\345\276\256\350\275\257\351\233\205\351\273\221"));
        font2.setPointSize(10);
        label_2->setFont(font2);
        rfileNameLineEdit = new QLineEdit(FileCntDlg);
        rfileNameLineEdit->setObjectName(QStringLiteral("rfileNameLineEdit"));
        rfileNameLineEdit->setEnabled(false);
        rfileNameLineEdit->setGeometry(QRect(100, 60, 201, 31));
        rfileNameLineEdit->setFont(font2);
        rfileNameLineEdit->setAlignment(Qt::AlignCenter);
        rfileNameLineEdit->setReadOnly(true);
        label_3 = new QLabel(FileCntDlg);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(70, 110, 51, 31));
        label_3->setFont(font2);
        label_4 = new QLabel(FileCntDlg);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(200, 110, 61, 31));
        label_4->setFont(font2);
        rfileSizeLineEdit = new QLineEdit(FileCntDlg);
        rfileSizeLineEdit->setObjectName(QStringLiteral("rfileSizeLineEdit"));
        rfileSizeLineEdit->setEnabled(false);
        rfileSizeLineEdit->setGeometry(QRect(120, 110, 71, 31));
        rfileSizeLineEdit->setFont(font2);
        rfileSizeLineEdit->setAlignment(Qt::AlignCenter);
        rfileSizeLineEdit->setReadOnly(true);
        recvSizeLineEdit = new QLineEdit(FileCntDlg);
        recvSizeLineEdit->setObjectName(QStringLiteral("recvSizeLineEdit"));
        recvSizeLineEdit->setEnabled(false);
        recvSizeLineEdit->setGeometry(QRect(260, 110, 71, 31));
        recvSizeLineEdit->setFont(font2);
        recvSizeLineEdit->setAlignment(Qt::AlignCenter);
        recvSizeLineEdit->setReadOnly(true);
        label_5 = new QLabel(FileCntDlg);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(30, 160, 71, 21));
        label_5->setFont(font2);
        rateLabel = new QLabel(FileCntDlg);
        rateLabel->setObjectName(QStringLiteral("rateLabel"));
        rateLabel->setGeometry(QRect(340, 160, 91, 21));
        rateLabel->setFont(font2);
        rateLabel->setAlignment(Qt::AlignLeading|Qt::AlignLeft|Qt::AlignVCenter);

        retranslateUi(FileCntDlg);

        QMetaObject::connectSlotsByName(FileCntDlg);
    } // setupUi

    void retranslateUi(QDialog *FileCntDlg)
    {
        FileCntDlg->setWindowTitle(QApplication::translate("FileCntDlg", "\346\216\245 \346\224\266 \346\226\207 \344\273\266", Q_NULLPTR));
        cntClosePushButton->setText(QApplication::translate("FileCntDlg", "\345\201\234  \346\255\242", Q_NULLPTR));
        label->setText(QApplication::translate("FileCntDlg", "\346\226\207 \344\273\266 \346\216\245 \346\224\266", Q_NULLPTR));
        label_2->setText(QApplication::translate("FileCntDlg", "\346\216\245 \346\224\266 \346\226\207 \344\273\266", Q_NULLPTR));
        label_3->setText(QApplication::translate("FileCntDlg", "\345\244\247   \345\260\217\357\274\232", Q_NULLPTR));
        label_4->setText(QApplication::translate("FileCntDlg", "\345\267\262 \346\216\245 \346\224\266\357\274\232", Q_NULLPTR));
        rfileSizeLineEdit->setText(QString());
        recvSizeLineEdit->setText(QString());
        label_5->setText(QApplication::translate("FileCntDlg", "\350\277\233         \345\272\246", Q_NULLPTR));
        rateLabel->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class FileCntDlg: public Ui_FileCntDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FILECNTDLG_H
