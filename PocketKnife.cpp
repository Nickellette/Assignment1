/*
 * File: PocketKnife.cpp
 *
 */

#include "PocketKnife.h"

double PocketKnife::hit(double armor){
	double damage = hitPoints - (armor * 0.3);
	if(damage < 0)
		return 0;
	return damage; 

}
