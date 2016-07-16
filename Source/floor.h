#ifndef _FLOOR_H_
#define _FLOOR_H_

#include "cell.h"
#include "object.h"
#include "character.h"
#include "controller.h"
#include "player.h"

const int MaxEnemyType = 6;
const int MaxEnemy = 20;
const int MaxGold = 10;
const int MaxPotion = 10;
const int MaxChamber = 5;
const int MaxDragon = 6;
const int MaxRow = 30;
const int MaxColumn = 79;

class Contoller;

class Floor{
    Cell* theFloor[MaxRow][MaxColumn];
    Character *pc; //the player
    Character *enemy[MaxEnemy]; //enemies
    Chamber *chambers[MaxChamber]; //chambers
    Object *potions[MaxPotion]; //potions
    Object *treasure[MaxGold]; //golds/treasure
    Character *dragon[MaxDragon]; //dragons
    int row;
    int column;
    int curFloor;
//    int enemyIndex;
//    int chamberIndex;
//    int potionsIndex;
//    int treasureIndex;
//    int dragonIndex;
    Controller *controller;
public:
    Floor();//ctor
    ~Floor();//dtor
    void enemyInit(std::string type);
    void pcInit(std::string race);
    void treasureInit();
    void potionInit();
    void stairInit();
    void MapInit(std::string fileName); //init stait, potion, treasure, pc and enemies
    void play();
    void movePlayer(std::string direction);
    void moveEnemies();
    void getPotion(std::string direction);
    void getGold(std::string direction);
    void playerAttack(std::string direction);
    void enemyAttack();
    void dragonAttack();
    Character* getCharacter()const;
    void dead();
    void win();
    void quit();
    int getCurFloor()const; //get the current level
    void meetStair(); //transfer to other level or win the game
    void notify(int row, int column, char symbol);
};

#endif
