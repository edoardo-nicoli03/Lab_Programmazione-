//
// Created by Asus on 25/02/2025.
//

#ifndef LABORATORIO_CELL_H
#define LABORATORIO_CELL_H
#include "Observer.h"
#include <vector>

//classe Cell, che rappresenta una cella della griglia del foglio di calcolo
class Cell {
public :
Cell (double value = 0); //costruttore
 void setValue (double newValue); //metodo per settare il valore della cella
    double getValue () const; //metodo per ottenere il valore della cella
    void subscribe (Observer* o ) ; //metodo per aggiungere un observer alla lista di observer
    void unsubscribe (Observer* o ) ; //metodo per rimuovere un observer dalla lista di observer
    void notifyObserver() ; //metodo per notificare tutti gli observer

private :
    double value ; //valore della cella
    std :: vector <Observer*> observers ; //lista di observer

};


#endif //LABORATORIO_CELL_H
