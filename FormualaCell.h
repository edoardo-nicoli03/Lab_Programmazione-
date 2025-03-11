//
// Created by Asus on 26/02/2025.
//

#ifndef LABORATORIO_FORMUALACELL_H
#define LABORATORIO_FORMUALACELL_H
#include "Observer.h"
#include "Cell.h"
#include <vector>

enum FormulaType { SUM, MAX, MIN, AVG }; //enumerazione per i tipi di formule possibili (somma, massimo, minimo, media)

class FormulaCell : public Observer {
public :
    FormulaCell (const std:: vector<Cell*>& cells, FormulaType type); //costruttore
    void update() override; //metodo per aggiornare il valore della cella
    double getValue() const ; //metodo per ottenere il valore della cella
private:
    std :: vector<Cell*> cells; //lista di celle
    FormulaType type; //tipo di formula
    double value; //valore della cella
    void calculateValue(); //metodo per calcolare il valore della cella


};


#endif //LABORATORIO_FORMUALACELL_H
