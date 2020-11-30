#ifndef PARENT_H
#define PARENT_H

#include "new.h"

class Parent {
    private:
        int m_x;
        int m_y;

    public:
        Parent();
        Parent(int x, int y);
        void set_x(int x);
        void set_y(int y);
        ~Parent();

        NEW_OP
        DELETE_OP
};

#endif
