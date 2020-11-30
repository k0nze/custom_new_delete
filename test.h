#ifndef TEST_H
#define TEST_H

#include <cstdio>
#include <cstdlib>
#include "new.h"

class Test {
    private:
        int m_x;
        int m_y;

    public:
        Test();
        Test(int x, int y);
        void set_x(int x);
        void set_y(int y);
        int add_xy();
        ~Test();

        NEW_OP
        DELETE_OP
        /*
        void* operator new(size_t size) {
            void* p = malloc(size);
            printf("called new with size=%lu, p=%p\n", size, p);
            return p;
        }

        // exceptions are not handled for demonstration purposes
        void operator delete(void* p) {
            printf("called delete p=%p\n", p);
            free(p);
        }
        */
};

#endif
