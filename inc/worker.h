#ifndef WORKER_H
#define WORKER_H

#include <QObject>
#include <QMutex>

class Worker : public QObject
{
    Q_OBJECT

public:
    explicit Worker(QObject *parent = 0);
    void requestWork(int gpio_fd, int proximity_fd);
    void abort();

private:
    bool _abort;
    bool _working;
    int _gpio_fd;
    int _proximity_fd;

    QMutex mutex;

signals:
    void workRequested();
    void gpioInterruptCaptured();
    void proxInterruptCaptured();
    void finished();

public slots:
    void doWork();
};

#endif // WORKER_H
