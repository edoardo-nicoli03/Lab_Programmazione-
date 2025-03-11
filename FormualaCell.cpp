//
// Created by Asus on 26/02/2025.
//

#include "FormualaCell.h"
#include <iostream>
#include <limits>
#include <numeric>

FormulaCell::FormulaCell(const std::vector<Cell *> &cells, FormulaType type)
    : cells(cells), type(type), value(0) {
    for (auto cell : cells) {
        cell->subscribe(this);
    }
    calculateValue();
}

void FormulaCell::update() {
    calculateValue();
}

double FormulaCell::getValue() const {
    return value;
}

void FormulaCell::calculateValue(){ //metodo per calcolare il valore della cella
    if (cells.empty()) { //se la lista di celle è vuota, il valore della cella è 0
        return;
    }
    switch (type) {
        case SUM: //se la formula è di tipo somma
           value = 0;
            for (auto cell : cells) { //si sommano i valori delle celle
                value += cell->getValue();
            }
            break;
        case MAX: //se la formula è di tipo massimo
            value = std::numeric_limits<double>::lowest();
            for (auto cell : cells) {
                value = std::max(value, cell->getValue());
            }
            break;
        case MIN: //se la formula è di tipo minimo
            value = std::numeric_limits<double>::max();
            for (auto cell : cells) {
                value = std::min(value, cell->getValue());
            }
            break;
        case AVG: //se la formula è di tipo media
        value = 0;
            for (auto cell : cells) {
                value += cell->getValue();
                value /= cells.size(); //si calcola la media
            }
            break;
    }

}