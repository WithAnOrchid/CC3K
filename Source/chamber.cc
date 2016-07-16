#include "chamber.h"
using namespace std;

Chamber::Chamber(int id):ChamberID(id), MyCells(0);

void Chamber::addCell(Cell* cell){
    this->MyCells.push_back(cell);
}

int Chamber::getID () const{
    return this->ID;
}

Cell* Chamber::getCell(int i)const{
    if (i>=this->MyCells.size() || i<0){
        cout << "Chamber::getCell outof Range\n";
    }
    return MyCells.at(i);
}

~Chamber(){}
