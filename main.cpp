#include <cstdio>

#include "test.h"

int main() {

    Test* t = new Test(42, 77);

    printf("x+y=%d\n", t->add_xy());

    delete t;

    return 0;
}
