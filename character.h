#ifndef CHARACTER_H
#define CHARACTER_H

#include <string>

using namespace std;

class Character
{
public:
    Character(string name) : name(name){};
    string getName(void);

private:
    string name;
};

#endif