/*
 * File: CrazyRandomSword.h
 *
 */

#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H 

/*
 * defines behavior of a crazy random sword 
 * RANDOM hitpoint 
 * RANDOM ignore of armor
 */

class CrazyRandomSword: public Weapon{

	public:
	CrazyRandomSword() : Weapon( "Crazy Random Sword", ((rand()%100+1-7)+7))
	{
	
	}
	virtual ~CrazyRandomSword() {};
	virtual double hit(double armor);

};

#endif
