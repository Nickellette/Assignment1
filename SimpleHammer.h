/* 
 * File:   SimpleHammer.h
 * 
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/*
 * defines simple hammer 
 * hitpoint 25
 * ignores all armor if less than 30
 */

class SimpleHammer : public Weapon {

	public:
		SimpleHammer() : Weapon("Simple hammer", 25.0){}
		virtual ~SimpleHammer(){};
		virtual double hit(double armor);



}; 
#endif
