#ifndef _ENEMY_H_
#define _ENEMY_H_

#include <string>
#include "character.h"

class Enemy : public Character{
	protected:
		std::string race;
		bool hostile;
		bool moved;
		Enemy(int hp,int atk,int def,double gold, std::string race,bool hostile, bool moved);
	public:
		int getAtk() const 
};