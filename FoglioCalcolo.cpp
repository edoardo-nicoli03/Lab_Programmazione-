//
// Created by Asus on 19/03/2025.
//
#include "FoglioCalcolo.h"

FoglioCalcolo::FoglioCalcolo(int rows, int cols) : rows(rows), cols(cols) { //costruttore
  cells.resize(rows, std::vector<Cell>(cols));
        }

Cell &FoglioCalcolo::getCell(int row, int col) { //metodo per ottenere una cella
    return cells[row][col];
}
void FoglioCalcolo::setCell(int row, int col, double value) { //metodo per settare il valore di una cella
    cells[row][col].setValue(value);
}

int FoglioCalcolo::getRows() const { //metodo per ottenere il numero di righe
    return rows;
}

int FoglioCalcolo::getCols() const { //metodo per ottenere il numero di colonne
    return cols;
}

