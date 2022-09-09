#include "secondlistener.h"
#include <QDebug>


SecondListener::SecondListener()
{
    Listener::getInstance()->addEventListener(this);
}

void SecondListener::echo(std::string text)
{
    qDebug()<< Q_FUNC_INFO << text.c_str();
}
