#include "timer.h"

Timer::Timer(QObject *parent) :
    QTimer(parent),
    msecInterval(40)
{
    setInterval(msecInterval);
}

void Timer::receiveSlowDown()
{
    msecInterval--;
    setInterval(msecInterval);
}

void Timer::receiveSpeedUp()
{
    msecInterval++;
    setInterval(msecInterval);
}
