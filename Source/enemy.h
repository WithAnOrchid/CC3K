#ifndef _ENEMY_H_
#define _ENEMY_H_

#include <string>
#include "character.h"

class Enemy : public Character{
	protected:
		std::string race;
		bool hostile;
		bool moved;
	public:
		Enemy();
		~Enemy();
		int pAttack(Player* p);
		void changeHP(int i);
		void setHostile();
		void setMoved();
		void resetMoved();
		bool isMoved() const;
		double getSpawnProb() const;
};
