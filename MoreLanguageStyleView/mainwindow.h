#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include <QLabel>
#include <QProgressBar>

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
    void on_btnCN_clicked();

    void on_btnEN_clicked();

    void on_btnCSS1_clicked();

    void on_btnCSS2_clicked();

    void on_btnClearCSS_clicked();

    void on_btnSysCSS_clicked();

private:
    void ChangeLanguage(QString strLang);

    void initUI();

    void translateUI();

private:
    Ui::MainWindow *ui;

    QLabel *m_labState;
    QProgressBar *m_pgbState;
};

#endif // MAINWINDOW_H
