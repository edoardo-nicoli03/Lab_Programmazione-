#include "Cell.h"
#include "FormualaCell.h"
#include "FormualaCell.h"
#include <iostream>
#include <vector>

int main() {
  const int N = 30;
  std::vector<Cell> cells(N);

  int values [N] = {17, 23,0,42,91,68,34,12,7,55,82,37,20,45,99,3,16,72,88,54,29,63,41,75
  ,86,11,4,60,92,50};

  for (int i = 0; i < N; i++) {
        cells[i].setValue(values[i]);
    }

  std::vector<Cell*> cellsPtr; //lista di puntatori a celle

    for (int i = 0; i < N; i++) { //riempimento della lista di puntatori
            cellsPtr.push_back(&cells[i]);
        }

    FormulaCell sum(cellsPtr, SUM); //creazione di una cella di tipo somma
    FormulaCell max(cellsPtr, MAX); //creazione di una cella di tipo massimo
    FormulaCell min(cellsPtr, MIN); //creazione di una cella di tipo minimo
    FormulaCell avg(cellsPtr, AVG); //creazione di una cella di tipo media

    std::cout << "Somma: " << sum.getValue() << std::endl; //stampa del valore della cella di tipo somma
    std::cout << "Massimo: " << max.getValue() << std::endl; //stampa del valore della cella di tipo massimo
    std::cout << "Minimo: " << min.getValue() << std::endl; //stampa del valore della cella di tipo minimo
    std::cout << "Media: " << avg.getValue() << std::endl; //stampa del valore della cella di tipo media

    return 0;

}
