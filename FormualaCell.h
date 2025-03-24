//
// Created by Asus on 26/02/2025.
//

#ifndef LABORATORIO_FORMUALACELL_H
#define LABORATORIO_FORMUALACELL_H
#include "Observer.h"
#include "Cell.h"
#include <vector>

enum FormulaType { SUM, MAX, MIN, AVG }; //enumerazione per i tipi di formule possibili (somma, massimo, minimo, media)

class FormulaCell : public Observer, public Cell {
public :
    FormulaCell (const std:: vector<Cell*>& cells, FormulaType type); //costruttore
    void update() override; //metodo per aggiornare il valore della cella
    int calculate () const ; //metodo per calcolare il valore della cella
private:
    std :: vector<Cell*> cells; //lista di celle
    FormulaType type; //tipo di formula

};


#endif //LABORATORIO_FORMUALACELL_H
