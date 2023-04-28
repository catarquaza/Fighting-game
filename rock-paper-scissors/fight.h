#include <ctime>
#include "character.h"

class Fight
{
public:
    Fight(Character &fighter1, Character &fighter2) : fighter1(fighter1), fighter2(fighter2)
    {
        srand(time(0));
    };

    string getFightTitle(void);
    void doRound(void);
    bool isOver(void);
    void printWinner(void);

private:
    Character &fighter1;
    Character &fighter2;
};