#ifndef __IRONARMOR_PROTOTYPE__
#define __IRONARMOR_PROTOTYPE__

#include "ArmorPrototype.h"

class IronArmorPrototype : public ArmorPrototype 
{
    public:
        IronArmorPrototype() : ArmorPrototype() { 
            this->setName("Iron Armor"); 
            this->setCost(450);
            baseStats->ATK = 0;
            baseStats->DEF = 2;
            baseStats->HP = 0;
            baseStats->maxHP = 0;
            combatStats->ATK = 0;
            combatStats->DEF = 2;
            combatStats->HP = 0;
            combatStats->maxHP = 0;
        }
        IronArmorPrototype(std::string name) : ArmorPrototype(name) {}
        virtual ArmorPrototype* Clone() { return new IronArmorPrototype(); }
};

#endif // __IRONARMOR_PROTOTYPE__
