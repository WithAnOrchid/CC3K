#ifndef _CHAMBER_H_
#define _CHAMBER_H_

#include "cell.h"
#include <vector>

class Cell;
class Chamber{
    vector<Cell*> MyCells; //1D vector to store all cell pointers
    int ID; //the number of a certain chamber
public:
    Chamber(int cham_id);//ctor
    ~Chamber();//dtor
    int getID() const; //get the ID of a chamber
    void addCell(Cell* cell); //add a cell into the Chamber
    Cell* getCell(int i) const; //get the cell at a certain position
};
#endif
