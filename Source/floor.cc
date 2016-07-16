#include <fstream>

using namespace std;

Floor::Floor(){

}

void Floor::MapInit(string fileName){
    ifstream file{fileName};
    string MapRow;
    for (int i=0; i<MaxRow; ++i){
        getline(file, MapRow);
        for (int j=0; j<MaxColumn; ++j){
            char cellChar = MapRow[j];
            theFloor[i][j].setType(cellChar);
            theFloor[i][j].setCoords(i, j);
            theFloor[i][j].setFloor(this);
            theFloor[i][j].setBlocked();
            if (!theFloor[i][j].isBlocked){
                theFloor[i][j].addNeighbour(&theFloor[i-1][j-1], 0); //L T
                theFloor[i][j].addNeighbour(&theFloor[i-1][j], 1); //T
                theFloor[i][j].addNeighbour(&theFloor[i-1][j+1], 2); //R T
                theFloor[i][j].addNeighbour(&theFloor[i][j-1], 3);//L
                theFloor[i][j].addNeighbour(&theFloor[i][j+1], 4);//R
                theFloor[i][j].addNeighbour(&theFloor[i+1][j-1], 5);//L B
                theFloor[i][j].addNeighbour(&theFloor[i+1][j], 6);//B
                theFloor[i][j].addNeighbour(&theFloor[i+1][j+1], 7);//R B
            }
        }
    }
    
}
