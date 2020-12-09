#ifndef WILDTURKEY_H
#define WILDTURKEY_H

#include <iostream>
#include "turkey.h"

using namespace std;

class wildturkey : public Turkey {
public:
    wildturkey();
    void gobble();
    void fly();

};

#endif // WILDTURKEY_H
