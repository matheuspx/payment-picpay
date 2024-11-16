#include "mainserver.h"
#include "ui_mainserver.h"

MainServer::MainServer(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainServer)
{
    ui->setupUi(this);
}

MainServer::~MainServer()
{
    delete ui;
}
