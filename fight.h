#include "character.h"

class Fight
{
public:
    Fight(Character &fighter1, Character &fighter2) : fighter1(fighter1), fighter2(fighter2){};
    string getFightTitle(void);

private:
    Character &fighter1;
    Character &fighter2;
};