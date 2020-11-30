#include "child_b.h"

ChildB::ChildB(int x, int y) {
    m_x = x;
    m_y = y;
}

int ChildB::diff() {
    return m_x - m_y;
}
