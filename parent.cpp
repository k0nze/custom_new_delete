#include "parent.h"

Parent::Parent() {
}

Parent::Parent(int x, int y) {
    m_x = x;
    m_y = y;
}


void Parent::set_x(int x) {
    m_x = x;
}

void Parent::set_y(int y) {
    m_y = y;
}

Parent::~Parent() {
}
