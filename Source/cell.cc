#include "cell.h"

using namespace std;

Cell::Cell(){
    type=' ';
    row=0;
    column=0;
    blocked=0;
    Module=0;
    Chamber=0;
    Floor=0;
    for(int i=0;i<8;++i) neighbours[i]=0;
}

char Cell::getType()const{
    return type;
}

int Cell::getRow() const{
    return row;
}

int Cell::getCol() const{
    return col;
}

bool Cell::isBlocked() const{
    return blocked;
}

Chamber Cell::getChamber() const{
    return chamber;
}

Floor Cell::getFloor() const{
    return floors;
}

Module Cell::getModule() const{
    return module;
}

Cell* Cell::getNeighbours(int index)const{
    return neighbours[index];
}

void Cell::setType(char type){
    this->type = type;
}

void Cell::setCoords(int r, int c){
    this->row = r;
    this->column = c;
}

void Cell::setChamber(Chameber* chamber){

}

void Cell::setFloor(Floor *floors){
    this->floors = floors;
}

void Cell::setModule(Module *module){
    this->module=module;
}

void Cell::setBlocked(){
    if (type == "." || type =="+" || type == "#"){
        blocked == false;
    }
    else {
        blocked == true;
    }
}

bool Cell::isBlocked(){
    return blocked;
}

void Cell::addNeighbours(Cell *neighbour, int index){
    neighbour[index] = neighbour;
}

void Cell::notify(int row, int column, char type){
    
}

void Cell::notifyCharacter(int row, int column, char symbol){
    
}

Cell * Cell::nextCell(std::string direction){
    if(direction=="nw"){
        return neighbours[0];
    }else if(direction=="no"){
        return neighbours[1];
    }else if(direction=="ne"){
        return neighbours[2];
    }else if(direction=="we"){
        return neighbours[3];
    }else if(direction=="ea"){
        return neighbours[4];
    }else if(direction=="sw"){
        return neighbours[5];
    }else if(direction=="so"){
        return neighbours[6];
    }else if(direction=="no"){
        return neighbours[7]
    }else return 0;
}
