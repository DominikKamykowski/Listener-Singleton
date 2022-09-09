#ifndef SECONDLISTENER_H
#define SECONDLISTENER_H

#include <QObject>
#include "listener.h"

class SecondListener : public EventListener
{
public:
    SecondListener();

private:
    void echo(std::string);
};

#endif // SECONDLISTENER_H
