#ifndef _CELL_H_
#define _CELL_H_

const int Max_Neighbours = 8;

class Module;
class Chamber;
class Floor;

class Cell{
    char type; //" ", "/", ".", "|", "-", "#", "+"
    int row, column;
    bool blocked;
    Module *module; //pointer fields
    Chamber *chamber; //pointer fields
    Floor *floors; //pointer fields
    Cell *neighbours[Max_Neighbours];
    
public:
    Cell(); //ctor
    char getType()const; //return type of cell
    int getRow() const; //return row number
    int getCol() const; //return column number
    bool isBlocked() const; //return if the cell is blocked and not allow anything to move into
    Chamber getChamber() const; //return the chamber it belongs to
    Floor getFloor() const; //return the floor it belongs to
    Module getModule() const; //return the Module game the cell in
    Cell* getNeighbours(int index)const; //return the neighbour of the specific index
    void setType(char type); //set type of cell
    void setCoords(int r, int c); //set coordinate for a cell
    void setBlocked(); //set blocked or not
    void setChamber(Chamber *Chamber); //set the chamber it belongs to (TRICKY)
    void setFloor(Floor *Floor); //set the floor the cell belongs to
    void setModule(Module *Module); //set the Module the cell belongs to
    void addNeighbours(Cell *neighbours, int index); //add neighbour cells to *neighboours
    void notify(int row, int column, char type); //notify destination a cell has been occupied by a type (a character is away)
    void notifyCharacter(int row, int column, char symbol); //notify destination a cell has been occupied by a charater
    Cell *nextCell(std::string direction); //get a direction and move towards it
    ~Cell(); //dtor
};

#endif