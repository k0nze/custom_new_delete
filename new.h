#include <cstdlib>
#include <cstdio>

// exceptions are not handled for demonstration purposes
#define NEW_OP void* operator new(size_t size) {\
    void* p = malloc(size);\
    printf("called new with size=%lu, p=%p\n", size, p);\
    return p;\
}

// exceptions are not handled for demonstration purposes
#define DELETE_OP void operator delete(void* p) {\
    printf("called delete p=%p\n", p);\
    free(p);\
}

// exceptions are not handled for demonstration purposes
#define NEW_ARRAY_OP void* operator new(size_t size) {\
    void* p = malloc(size);\
    printf("called new[] with size=%lu, p=%p\n", size, p);\
    return p;\
}

// exceptions are not handled for demonstration purposes
#define DELETE_ARRAY_OP void operator delete(void* p) {\
    printf("called delete[] p=%p\n", p);\
    free(p);\
}
