#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
public:
    Character(string name) : name(name), health(100){};
    string getName(void);
    int getHealth(void);
    void doDamage(int damage);

private:
    string name;
    int health;
};

#endif