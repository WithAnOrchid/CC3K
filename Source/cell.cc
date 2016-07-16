#include "cell.h"

using namespace std;

void Cell::setType(char type){
    this->type = type;
}

void Cell::setCoords(int r, int c){
    this->row = r;
    this->column = c;
}

void Cell::setChamber(Chameber* Chamber){

}

void Cell::setFloor(Floor *Floor){
    this->floor = floor;
}

void Cell::setBlocked(){
    if (this->type == "." || this->type =="+" || this->type == "#"){
        this->blocked == false;
    }
    else {
        this->blocked == true;
    }
}

bool Cell::isBlocked(){
    return blocked;
}

void addNeighbours(Cell *neighbour, int index){
    this->neighbour[index] = neighbour;
}
