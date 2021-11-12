#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();


private slots:
    void on_plus();
    void on_reduce();

    void on_plus_j1_clicked();
    void on_plus_j2_clicked();
    void on_plus_j3_clicked();
    void on_plus_j4_clicked();
    void on_plus_j5_clicked();
    void on_plus_j6_clicked();

    void on_reduce_j1_clicked();
    void on_reduce_j2_clicked();
    void on_reduce_j3_clicked();
    void on_reduce_j4_clicked();
    void on_reduce_j5_clicked();
    void on_reduce_j6_clicked();

private:
    Ui::MainWindow *ui;


private:
    double j1_value_,j2_value_,j3_value_,j4_value_,j5_value_,j6_value_;

};


#endif // MAINWINDOW_H
