#include <cstdio>
#include <cstdlib>

class Test {
    private:
        int m_x;
        int m_y;

    public:
        Test() {
            m_x = 0;
            m_y = 0;
        }

        void set_x(int x) {
            m_x = x;
        }

        void set_y(int y) {
            m_y = y;
        }

        int add_xy() {
            return m_x + m_y;
        }

        ~Test() {
        }
};

int main() {
    Test* t = new Test;

    t->set_x(42);
    t->set_y(77);

    printf("x+y=%d\n", t->add_xy());

    delete t;

    return 0;
}
