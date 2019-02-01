/*
 * File: PocketKnife.cpp
 *
 */

#include "PocketKnife.h"

double PocketKnife::hit(double armor){
	double damage = hitPoints - armor
	if(damage < 0)
		return 0;
	return damage; 

}
