#include <bits/stdc++.h>

using namespace std;

class A {
    static int stackObjCount;
    static int heapObjCount;
    static bool controlFlag;
public:
    A() {
        if (controlFlag) {
            ++heapObjCount;
            controlFlag = false;
        } else {
            ++stackObjCount;  
        }
    }
    static int getStackObjCount() {
        return stackObjCount;
    }
    
    static int getHeapObjCount() {
        return heapObjCount;
    }
 
   //by default new & delete operators are static by default even if these are overloading also
    void* operator new (size_t s)  {
        controlFlag = true;
        if (void* ptr = malloc(s))
            return ptr;
        throw bad_alloc{};
    }
    void operator delete(void *ptr) {
        free(ptr);
    }
};

int A::stackObjCount =0;
int A::heapObjCount = 0;
bool A::controlFlag = false;

int main() {
    A obj, obj1, obj3, *objA = nullptr, *objA1 = nullptr;
    try {
        objA = new A;
        objA1 = new A;
    } catch (bad_alloc& e) {
        cout << e.what() << endl;
    }
    cout << A::getStackObjCount() << endl;
    cout << A::getHeapObjCount() << endl;
    delete objA;
    delete objA1;
}
