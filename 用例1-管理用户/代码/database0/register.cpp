#include "register.h"
#include "ui_register.h"

Register::Register(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::Register)
{
    ui->setupUi(this);
}

Register::~Register()
{
delete ui;
}

void Register::on_account_input_editingFinished()
{
    QString account = ui->account_input->text();
}

void Register::on_nickname_input_editingFinished()
{
    QString nickname = ui->nickname_input->text();
}

void Register::on_password_input_editingFinished()
{
    QString password = ui->password_input->text();
}

void Register::on_password_again_input_editingFinished()
{
    QString password_again = ui->password_again_input->text();
}

void Register::on_firstname_input_editingFinished()
{
    QString firstname = ui->firstname_input->text();
}

void Register::on_lineEdit_5_editingFinished()
{
    QString lastname = ui->lastname_input->text();
}

void Register::on_phone_number_input_editingFinished()
{
    QString phonename = ui->phone_number_input->text();
}
void Register::on_Email_input_editingFinished()
{
    QString Email = ui->Email_input->text();
}

void Register::on_gender_input_activated(const QString &arg1)
{
    QString gender = ui->gender_input->currentText();
}

void Register::on_is_merchant_input_activated(const QString &arg1)
{
    QString is_merchant = ui->is_merchant_input->currentText();
}

void Register::on_id_card_input_activated(const QString &arg1)
{
    QString id_card = ui->id_card_input->currentText();
}

void Register::on_payment_method1_input_activated(const QString &arg1)
{
    QString payment_method1 = ui->payment_method1_input->currentText();
}

void Register::on_payment_method2_input_activated(const QString &arg1)
{
    QString payment_method2 = ui->payment_method2_input->currentText();
}

void Register::on_id_number_input_editingFinished()
{
    QString id_number = ui->id_number_input->text();
}

void Register::on_payment_account1_input_editingFinished()
{
    QString payment_account1 = ui->payment_account1_input->text();
}

void Register::on_payment_account2_input_editingFinished()
{
    QString payment_account2 = ui->payment_account2_input->text();
}

void Register::receive()
{
    this->show();
}
void Register::on_cancel_clicked()
{
    this->hide();
    emit r2l();
}
