#include <iostream>
#include "Cell.h"
#include "FormualaCell.h"


int main() {
    Cell cell1 (10); //creo una cella con valore 10
    Cell cell2 (20); //creo una cella con valore 20
    Cell cell3 (30); //creo una cella con valore 30
    Cell cell4 (40); //creo una cella con valore 40
    Cell cell5 (50); //creo una cella con valore 50
    Cell cell6 (60); //creo una cella con valore 60
    Cell cell7 (70); //creo una cella con valore 70
    Cell cell8 (80); //creo una cella con valore 80

    std::vector<Cell*> cells = {&cell1, &cell2, &cell3, &cell4, &cell5, &cell6, &cell7, &cell8}; //creo un vettore di puntatori a celle
    FormulaCell sumCell(cells, SUM); //creo una cella di tipo somma
    FormulaCell maxCell(cells, MAX); //creo una cella di tipo massimo
    FormulaCell minCell(cells, MIN); //creo una cella di tipo minimo
    FormulaCell avgCell(cells, AVG); //creo una cella di tipo media

    std::cout << " === Valori Iniziali ===\n";
    std::cout << "Somma: " << sumCell.getValue() << "\n"; //stampa il valore della cella di tipo somma
    std::cout << "Massimo: " << maxCell.getValue() << "\n"; //stampa il valore della cella di tipo massimo
    std::cout << "Minimo: " << minCell.getValue() << "\n"; //stampa il valore della cella di tipo minimo
    std::cout << "Media: " << avgCell.getValue() << "\n"; //stampa il valore della cella di tipo media



    return 0;
}
