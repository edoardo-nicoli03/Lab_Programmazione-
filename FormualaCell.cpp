//
// Created by Asus on 26/02/2025.
//

#include "FormualaCell.h"
#include <iostream>
#include <limits>
#include <numeric>
#include <algorithm>

FormulaCell::FormulaCell(const std::vector<Cell *> &cells, FormulaType type)
    : cells(cells), type(type) {
    for (auto cell : cells) {
        cell->subscribe(this);
    }
    this->value = calculate();
}

void FormulaCell::update() {
    this->value = calculate();
}



int FormulaCell::calculate() const { //metodo per calcolare il valore della cella
    if (cells.empty()) { //se la lista di celle è vuota, il valore della cella è 0
        return 0;
    }
    switch (type) {
        case SUM: //se la formula è di tipo somma
            return std::accumulate(cells.begin(), cells.end(), 0,
                                   [](int acc, Cell *c) { return acc + c->getValue(); });

        case MAX: { //se la formula è di tipo massimo
            auto it = std::max_element(cells.begin(), cells.end(),
                                       [](const Cell *a, const Cell *b) {
                                           return a->getValue() < b->getValue();
                                       });
            return (it != cells.end()) ? (*it)->getValue() : 0;
    }


    case MIN: { //se la formula è di tipo minimo
        auto it = std::min_element(cells.begin(), cells.end(),
                                   [](const Cell *a, const Cell *b) {
                                       return a->getValue() < b->getValue();
                                   });
    return (it != cells.end()) ? (*it)->getValue() : 0;
}



        case AVG: //se la formula è di tipo media
            return std::accumulate(cells.begin(), cells.end(), 0,
                                  [](int acc, Cell* c) { return acc + c->getValue(); }) / cells.size();
            default :
                return 0;

    }

}