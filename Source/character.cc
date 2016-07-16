#include <iostream>
#include <cstdlib>
#include <string>
#include "character.h"
using namespace std;

Character::Character(int hp,int atk, int def,double gold): hp(hp),atk(atk),def(def),gold(0){}

int Character::getAtk() const{return atk;}

int Character::getDef() const{return def;}

int Character::getHP() const{return hp;}

double Character::getGold()const {return gold;}

character::~Character(){}