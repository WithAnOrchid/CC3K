#ifndef _CHARACTER_H_
#define _CHARACTER_H_

class Character{
	protected:
		int hp;
		int atk;
		int def;
		double gold;
		character(int hp,int atk,int def,double gold);
		
	public:
		int getAtk() const;
		int getDef() const;
		int getHP() const;
		double getGold() const;
		
	virtual ~Character()

};

#endif