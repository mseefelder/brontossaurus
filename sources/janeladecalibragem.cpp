#include "janeladecalibragem.h"
#include "ui_janeladecalibragem.h"

JaneladeCalibragem::JaneladeCalibragem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::JaneladeCalibragem)
{
    ui->setupUi(this);
}

JaneladeCalibragem::~JaneladeCalibragem()
{
    delete ui;
}










void JaneladeCalibragem::on_heightSlider_valueChanged(int value)
{
    ui->heightBox->setValue(double(value));
}

void JaneladeCalibragem::on_heightBox_valueChanged(double arg1)
{
    ui->heightBox->setValue(int(arg1));
}

void JaneladeCalibragem::on_horizontalSlider_1_valueChanged(int value)
{
    ui->spinBox_1->setValue(double(value));
}

void JaneladeCalibragem::on_spinBox_1_valueChanged(double arg1)
{
    ui->horizontalSlider_1->setValue(int(arg1));
}

void JaneladeCalibragem::on_horizontalSlider_2_valueChanged(int value)
{
    ui->spinBox_2->setValue(double(value));
}

void JaneladeCalibragem::on_spinBox_2_valueChanged(double arg1)
{
    ui->horizontalSlider_2->setValue(int(arg1));
}

void JaneladeCalibragem::on_horizontalSlider_3_valueChanged(int value)
{
    ui->spinBox_3->setValue(double(value));
}

void JaneladeCalibragem::on_spinBox_3_valueChanged(double arg1)
{
    ui->horizontalSlider_3->setValue(int(arg1));
}

void JaneladeCalibragem::on_horizontalSlider_4_valueChanged(int value)
{
    ui->spinBox_4->setValue(double(value));
}

void JaneladeCalibragem::on_spinBox_4_valueChanged(double arg1)
{
    ui->horizontalSlider_4->setValue(int(arg1));
}

void JaneladeCalibragem::on_horizontalSlider_5_valueChanged(int value)
{
    ui->spinBox_5->setValue(double(value));
}

void JaneladeCalibragem::on_spinBox_5_valueChanged(double arg1)
{
    ui->horizontalSlider_5->setValue(int(arg1));
}
