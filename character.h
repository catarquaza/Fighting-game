#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
public:
    Character(string name) : name(name), health(3){};
    string getName(void);
    int getHealth(void);
    void takeDamage(void);

private:
    string name;
    int health;
};

#endif