#include <cstdio>

#include "new.h"
#include "parent.h"
#include "child_a.h"
#include "child_b.h"

#define PS 5

NEW_ARRAY_OP
DELETE_ARRAY_OP

int main() {
    Parent** ps = new Parent*[PS];

    for(int i = 0; i < PS; i++) {
        ps[i] = new Parent();
        ps[i]->set_x(i);
        ps[i]->set_y(i*2);
    }
  
    for(int i = 0; i < PS; i++) {
        printf("ps[%d]->sum(): %d, ps[%d]->diff(): %d\n", i, ((ChildA*) ps[i])->sum(), i, ((ChildB*) ps[i])->diff());
    }

    for(int i = 0; i < PS; i++) {
        delete ps[i];
    }

    delete[] ps;

    return 0;
}
