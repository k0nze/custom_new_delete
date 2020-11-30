#ifndef CHILD_B_H
#define CHILD_B_H

#include "parent.h"

class ChildB: public Parent {
    public:
        ChildB(int x, int y);
        int diff();
};

#endif 
