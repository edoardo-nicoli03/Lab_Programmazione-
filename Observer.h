//
// Created by Asus on 25/02/2025.
//

#ifndef LABORATORIO_OBSERVER_H
#define LABORATORIO_OBSERVER_H

//definizione classe Observer, per implementare il relativo design pattern
class Observer {
public:
    virtual void update() = 0;
    virtual ~Observer() = default;
};


#endif //LABORATORIO_OBSERVER_H
