///////////////////////////////////////////////////////////////////////////////
//   mainwindow.cpp
//
//   Fenster mit Benutzeroberfläche
//
///////////////////////////////////////////////////////////////////////////////

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QString>
#include <math.h>
#include "grafik.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent), ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_nincButton_clicked()         // + Button
{   int n=ui->zeichenbereich->N;
    if (n < 100) n+=2;                           // Anzahl der Oberwellen erhöhen
    ui->zeichenbereich->N=n;
    ui->NLabel->setText(QString("%1").arg(n));
    ui->zeichenbereich->update();                // Zeichnung erneuern
}

void MainWindow::on_ndecButton_clicked()         // - Button
{   int n=ui->zeichenbereich->N;
    if (n > 1) n-=2;                             // Anzahl der Oberwellen verringern
    ui->zeichenbereich->N=n;
    ui->NLabel->setText(QString("%1").arg(n));
    ui->zeichenbereich->update();                // Zeichnung erneuern
}

void MainWindow::on_quitButton_clicked()         // Quit Button
{
    close();                                     // Fenster schließen
}


