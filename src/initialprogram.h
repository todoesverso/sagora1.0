#ifndef INITIALPROGRAM_H
#define INITIALPROGRAM_H

#include <QWidget>
#include <QLayout>
#include "ui_serverdlgbase.h"
#include <QMenuBar>

namespace Ui {
class initialprogram;
}

class initialprogram : public QWidget
{
    Q_OBJECT

public:
    explicit initialprogram(QWidget *parent = nullptr);
    ~initialprogram();


private slots:
    void on_client_clicked();
    void on_server_clicked();

private:
    Ui::initialprogram *ui;
    QMenu*             pViewMenu;
    QMenuBar*          pMenu;
};

#endif // INITIALPROGRAM_H
