#include "maintable.h"
#include "ui_maintable.h"
#include <QLineEdit>
#include <QGridLayout>
#include <QApplication>
#include <QString>
#include <QLayoutItem>

MainTable::MainTable(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainTable)
{
    ui->setupUi(this);
    initGui();
}

MainTable::~MainTable()
{
    delete ui;
}

void MainTable::initGui()
{
    int k = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            numberField[k] = new QLineEdit(QString::number(k),0);
            ui->tablero->addWidget(numberField[k],i,j);
            k++;
        }
    }

    connect(ui->cmdVerificar, &QPushButton::clicked, this, &MainTable::verify_clicked);
}

void MainTable::getMatriz(QGridLayout *layout){
    //int k = 0;
    for(int i = 0; i < 9; i++)
    {
        for(int j = 0; j < 9; j++)
        {
            qDebug("%s ", "k ase");
            QLayoutItem *qli = layout->itemAtPosition(i,j);
            qDebug("%s ", "k ase");
            QLineEdit *qle = (QLineEdit*)qli;
            qDebug("%s ", "k ase");
            QString srt = qle->text();
            qDebug("%s ", "k ase");
            //QString tmp = QString(((QLineEdit *)(layout->itemAtPosition(i,j)))->text());
            qDebug("%s ", &srt);
            //matriz[i][j] = tmp.toInt();
        }
    }
}

void MainTable::verify_clicked()
{
    getMatriz(ui->tablero);
}