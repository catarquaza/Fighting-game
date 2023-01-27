#include <stdio.h>
#include <iostream>
#include "character.h"
#include "fight.h"

int main(void)
{
    Character ira("Ira");
    Character geoff("Geoff");
    Fight fight(ira, geoff);

    cout << fight.getFightTitle();
    return 0;
}
