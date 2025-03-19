//
// Created by Asus on 19/03/2025.
//

#ifndef LABORATORIO_FOGLIOCALCOLO_H
#define LABORATORIO_FOGLIOCALCOLO_H
#include <vector>
#include "Cell.h"
#include "FormualaCell.h"


class FoglioCalcolo {
private:
    std::vector<Cell*> cells; //lista di celle
    int rows; //numero di righe
    int cols; //numero di colonne


public:
    FoglioCalcolo(int rows, int cols); //costruttore
    Cell& getCell(int row, int col); //metodo per ottenere una cella
    void setCell(int row, int col, double value); //metodo per settare il valore di una cella
    int getRows() const; //metodo per ottenere il numero di righe
    int getCols() const; //metodo per ottenere il numero di colonne


};


#endif //LABORATORIO_FOGLIOCALCOLO_H
