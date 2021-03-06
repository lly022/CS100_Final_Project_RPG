#ifndef __WEAPON_PROTOTYPE__
#define __WEAPON_PROTOTYPE__

#include "../../Weapon.h"

class WeaponPrototype : public Weapon
{
    public:
        WeaponPrototype() : Weapon() {}
        WeaponPrototype(std::string name) : Weapon(name) {}
        virtual WeaponPrototype* Clone() = 0;
};

#endif // __WEAPON_PROTOTYPE__
