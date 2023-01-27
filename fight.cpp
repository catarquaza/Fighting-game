#include "fight.h"

string Fight::getFightTitle(void)
{
    return fighter1.getName() + " is taller than " + fighter2.getName();
}