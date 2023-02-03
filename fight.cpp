#include "fight.h"
#include <cstdlib>
#include <stdlib.h>

string Fight::getFightTitle(void)
{
    return fighter1.getName() + " vs. " + fighter2.getName();
}

void Fight::doRound(void)
{
    int hitStrength1 = (rand() % 20) + 1;
    int hitStrength2 = (rand() % 20) + 1;
    int damage = abs(hitStrength1 - hitStrength2);

    if (hitStrength1 < hitStrength2)
    {
        fighter1.doDamage(damage);
    }
    else
    {
        fighter2.doDamage(damage);
    }
}

bool Fight::isOver(void)
{
    bool isOver;

    if ((fighter1.getHealth() <= 0) || (fighter2.getHealth() <= 0))
    {
        isOver = true;
    }
    else
    {
        isOver = false;
    }

    return isOver;
}