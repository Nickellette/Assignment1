/*
 *  File: CrazyRandomSword.cpp
 *
 */

#inlcude "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor){
	double random = 1 - (rand()%(75+1-2)+2)/100.0; 
	double damage = hitPoints - (armor * random)
	if(damage < 0)
		return 0;
	return damage;

}

