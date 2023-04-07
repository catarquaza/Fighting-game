#include <stdio.h>
#include <iostream>
#include "character.h"
#include "fight.h"

int main(void)
{
    Character ira("Ira");
    Character geoff("Geoff");
    Fight fight(ira, geoff);

    cout << fight.getFightTitle() << "\n";
    cout << ira.getHealth() << " vs. " << geoff.getHealth() << "\n";

    while (fight.isOver() == false)
    {
        fight.doRound();
        cout << ira.getHealth() << " vs. " << geoff.getHealth() << "\n";
    }
    
    fight.getWinner();
    
    return 0;
}
