#ifndef LISTENER_H
#define LISTENER_H

#include <QObject>
#include <vector>

class EventListener;

class Listener
{

    typedef std::vector<EventListener*> EventListeners_t;

public:
    static void Create();
    static void Destroy();
    static Listener * getInstance();
    void buttonPressed();

    void addEventListener(EventListener *listener);
    void removeEventListener(EventListener *listener);

protected:
    Listener();
    virtual ~Listener(){};

private:
    static Listener * instance;

    EventListeners_t listenersVector;


};

class EventListener{
public:
    virtual void stateChanged();
    virtual void echo(std::string);

};

#endif // LISTENER_H
