#ifndef __WEAPON_H__
#define __WEAPON_H__

#include "Item.h"

class Weapon : public Item
{
	public:
        Weapon() : Item() {}
        Weapon(std::string name) : Item(name) {}
};

#endif //__WEAPON_H__
