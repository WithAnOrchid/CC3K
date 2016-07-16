#ifndef _CONTROLLER_H_
#define _CONTROLLER_H_

#include "floor.h" //the module
#include "character.h"
#include "view.h"

class Controller{
    View *display;
    Floor *theFloor;
    Character *player;
public:
    Controller();
    ~Controller();
    void printWelMsg(); //msg shown at the beginning of the game
    bool play(); //if you wanna play
    void initGame(Floor *f);
    void newGame(); //start a new game
    void movePlayer(std::string direction, Floor *f);
    void moveEnemies(Floor *f);
    void getPotion(std::string direction, Floor *f);
    void getGold(std::string direction, Floor *f);
    void playerAttack(std::string direction, Floor *f);
    void enemyAttack(Floor *f);
    void dragonAttack(Floor *f);
    bool playAgain(); //if you want to play again
    void ViewInit(Character *ch); //initialize display
    void notify(int row, int column, char symbol);
    void notifyDisplay();
};
#endif
