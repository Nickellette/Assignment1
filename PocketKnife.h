/*
 * File: PocketKnife.h
 *
 */ 

#include <string>
#include "Weapon.h"

#ifndef POCKETKNIFE_H
#define POCKETKNIFE_H

/*
 * defines Pocket knife 
 * hitpoints 10
 * ignores 70% of armor
 */

class PocketKnife : public Weapon{

	public: 
		PocketKnife(): Weapon("Pocket Knife", 10){}
		virtual ~PocketKnife(){};
		virtual double hit(double armor); 

};

#endif
