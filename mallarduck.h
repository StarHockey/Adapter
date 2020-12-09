#ifndef MALLARDUCK_H
#define MALLARDUCK_H

#include <iostream>
#include "duck.h"

using namespace std;

class MallarDuck : public Duck {
public:
    MallarDuck();
    virtual void quack();
    virtual void fly();
};

#endif // MALLARDUCK_H
