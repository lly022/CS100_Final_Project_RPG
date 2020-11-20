#ifndef __PLAYER_FACTORY__
#define __PLAYER_FACTORY__

#include "EntityFactory.h"

class PlayerFactory : public EntityFactory
{
    public:
        PlayerFactory() : EntityFactory() {};
        virtual void createEntity(std::string name) { };

};

#endif // __PLAYER_FACTORY__