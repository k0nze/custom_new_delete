#include <cstdio>

#include "parent.h"

int main() {

    Parent* parent = new Parent(23, 77);
    delete parent; 

    return 0;
}
