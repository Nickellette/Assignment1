/*
 * File: SimpleHammer.cpp
 *
 */

#include "SimpleHammer.h"

double SimpleHammer:: hit(double armor)
{
	if(armor > 30)
	{
		double damage = armor - hitPoints;
		if (damage<0)
			return 0;
		return damage; 
	}
	return 0; 
}
