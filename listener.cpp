#include "listener.h"
#include "defines.h"

Listener::Listener()
{

}


Listener * Listener::instance = nullptr;

void Listener::Create()
{
    assert(instance == nullptr);
    instance = new Listener();
}

void Listener::Destroy()
{
    assert(instance != nullptr);
    delete instance;
    instance = nullptr;
}

Listener * Listener::getInstance()
{
    assert(instance != nullptr);
    return instance;
}

void Listener::buttonPressed()
{
    _emit(echo("Hejka"));
}

void Listener::addEventListener(EventListener * listener){
    assert(listener);
    assert(std::find(listenersVector.begin(), listenersVector.end(), listener) == listenersVector.end());

    listenersVector.push_back(listener);
}

void Listener::removeEventListener(EventListener * listener){
    assert(listener);
    EventListeners_t::iterator it = std::find(listenersVector.begin(), listenersVector.end(), listener);

    if (it == listenersVector.end()) return;
    listenersVector.erase(it);
}

void EventListener::stateChanged()
{

}

void EventListener::echo(std::string)
{

}
