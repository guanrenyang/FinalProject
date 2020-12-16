#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "include.h"
#include "selectdialog.h"
#include "loaddatathread.h"
QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    void Menu();
    void OpenSelectWindow();

private:

    Ui::MainWindow *ui;
    LoadDataThread *loadDataThread;
    Dialog *selectWindow;
    QVector<QVector<int> > gridStartPerHour;
    QVector<QVector<int> > gridEndPerHour;
    QVector<QVector<double>> gridFeesPerHour;

    QDateTime *startDateTime;
    QDateTime *endDateTime;
    qint64 allHours;

signals:
    void emitDateTime(QList<QString>);//用于向读取文件的线程传输文件名和时间
public slots:
    void InitializeGridData(StartEnd startEnd);
    void LoadGridData(QString orderID,QDateTime oneRecordStartDateTime,QDateTime oneRecordEndDateTime,int startGrid,int endGrid,double fees);
    void drawProgressBar();
    void LoadData(StartEnd se);//用于向选择窗口读取日期和时间
    void ShowGraph();
};
#endif // MAINWINDOW_H
