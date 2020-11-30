#include <cstdio>
#include <cstdlib>

// exceptions are not handled for demonstration purposes
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

class Test {
    private:
        int m_x;
        int m_y;

    public:
        Test() {
            printf("called Test::Test() p=%p\n", this);
            m_x = 0;
            m_y = 0;
        }

        Test(int x, int y) {
            printf("called Test::Test(int x, int y) p=%p\n", this);
            m_x = x;
            m_y = y;
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
            printf("called Test::~Test p=%p\n", this);
        }
};

int main() {

    Test* t = new Test(42, 77);

    /*
    Test* t = new Test();

    t->set_x(42);
    t->set_y(77);
    */

    printf("x+y=%d\n", t->add_xy());

    delete t;

    return 0;
}
