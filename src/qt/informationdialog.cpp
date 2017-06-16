#include "informationdialog.h"
#include "ui_informationdialog.h"

InformationDialog::InformationDialog(const QString& information,const QString &Ammount,const QString &key,QWidget *parent) :
    QDialog(parent),
    ui(new Ui::InformationDialog)
{
    ui->setupUi(this);
    this->setModal(true);
    if(!key.size()){
        ui->InfKey->hide();
        ui->InfFon->layout()->removeItem(ui->verticalSpacer);
        ui->InfFon->layout()->removeItem(ui->verticalSpacer_3);
        ui->InfFon->layout()->removeItem(ui->verticalSpacer_4);
        ui->InfAmmount->hide();
    }
    else{
        ui->InfAmmount->setText(Ammount);
        ui->InfKey->setText(key);
    }
    ui->InfMessage->setText(information);
    this->setGeometry(this->x(),this->y(),this->width(),0);
}

InformationDialog::~InformationDialog()
{
    delete ui;
}
