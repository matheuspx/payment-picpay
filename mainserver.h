#ifndef MAINSERVER_H
#define MAINSERVER_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainServer;
}
QT_END_NAMESPACE

class MainServer : public QMainWindow
{
    Q_OBJECT

public:
    MainServer(QWidget *parent = nullptr);
    ~MainServer();

private:
    Ui::MainServer *ui;
};
#endif // MAINSERVER_H
