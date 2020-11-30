#include "test.h"

Test::Test() {
    printf("called Test::Test() p=%p\n", this);
    m_x = 0;
    m_y = 0;
}

Test::Test(int x, int y) {
    printf("called Test::Test(int x, int y) p=%p\n", this);
    m_x = x;
    m_y = y;
}

void Test::set_x(int x) {
    m_x = x;
}

void Test::set_y(int y) {
    m_y = y;
}

int Test::add_xy() {
    return m_x + m_y;
}

Test::~Test() {
    printf("called Test::~Test p=%p\n", this);
}
