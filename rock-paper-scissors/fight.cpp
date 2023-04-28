#include "fight.h"
#include <cstdlib>
#include <stdlib.h>
#include <iostream>
#include <conio.h>
#include <cstdlib>

string Fight::getFightTitle(void)
{
    return fighter1.getName() + " vs. " + fighter2.getName();
}

void Fight::doRound(void)
{
    cout << "choose your move, " << fighter1.getName() << ", strong fast or block (s, f, b):";
    int move1 = getch();
    cout << "\n";

    cout << "choose your move, " << fighter2.getName() << ", strong fast or block (s, f, b):";
    int move2 = getch();
    cout << "\n";

    if (move1 == 's' && move2 == 'b')
    {
        fighter2.takeDamage();
    }
    else if (move1 == 'b' && move2 == 's')
    {
        fighter1.takeDamage();
    }
    else if (move1 == 's' && move2 == 'f')
    {
        fighter1.takeDamage();
    }
    else if (move1 == 'f' && move2 == 's')
    {
        fighter2.takeDamage();
    }
    else if (move1 == 'f' && move2 == 'b')
    {
        fighter1.takeDamage();
    }
    else if (move1 == 'b' && move2 == 'f')
    {
        fighter2.takeDamage();
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

void Fight::printWinner(void)
{
    if (isOver())
    {
        if (fighter1.getHealth() == 0)
        {
            cout << fighter2.getName() << " has won the game";
        }
        else
        {
            cout << fighter1.getName() << " has won the game";
        }

        system("C:/Users/Ira/Downloads/download.jfif");
    }
}