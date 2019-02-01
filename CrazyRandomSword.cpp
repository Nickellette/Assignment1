/*
 *  File: CrazyRandomSword.cpp
 *
 */

#inlcude "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
	double damage = hitPoints - (armor * /* randomly generated number*/)
	if(damage < 0)
		return 0;
	return damage;

}

