#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QAbstractButton>
#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_buttonBox_clicked(QAbstractButton *button);

    void on_buttonBox_accepted();

    void on_lineEdit_3_returnPressed();

    void on_pushButton_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
