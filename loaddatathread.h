#ifndef LOADDATATHREAD_H
#define LOADDATATHREAD_H

#include "include.h"

class LoadDataThread :public QThread
{
    Q_OBJECT
    QMutex loadDataMutex;
private:

    const  long long OriginLongitude;//经度原点
    const  long long OriginLatitude;//纬度原点
    const  long long DeltaLongitude;
    const  long long DeltaLatitude;
    void run() override;
    double prog=0;
    StartEnd startEnd;
    int computeGridNumber( long long longitude, long long latitude);//计算经纬度的grid编号
public:
    LoadDataThread(StartEnd se);
signals:
    void emitFileNumber(int fileNumber);
    void loadDone();
    void emitOneRecord(QString,QDateTime,QDateTime,int,int,double);

};


#endif // LOADDATATHREAD_H
