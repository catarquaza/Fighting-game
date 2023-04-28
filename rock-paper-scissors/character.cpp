#include "character.h"

string Character::getName(void)
{
    return name;
}

int Character::getHealth(void)
{
    return health;
}

void Character::takeDamage(void)
{
    health--;
}
