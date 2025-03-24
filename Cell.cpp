//
// Created by Asus on 25/02/2025.
//

#include "Cell.h"
#include <algorithm>
using namespace std;

Cell::Cell(double value) : value(0) {}

void Cell::setValue (double newValue) { //metodo per settare il valore della cella
    value = newValue;
    notifyObserver();
}

double Cell::getValue() const { //metodo per ottenere il valore della cella
    return value;
}

void Cell::subscribe(Observer *o) { //metodo per aggiungere un observer alla lista di observer
    observers.push_back(o);
}

void Cell::notifyObserver() {
    for (auto o : observers) {
        o->update();
    }
}

void Cell::unsubscribe(Observer *o) { //metodo per rimuovere un observer dalla lista di observer
    auto it = find(observers.begin(), observers.end(), o);
     if (it != observers.end()) {
        observers.erase(it);

    }
}