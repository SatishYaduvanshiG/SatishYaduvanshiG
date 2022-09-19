#include <bits/stdc++.h>

using namespace std;

template<class T>
class uniqueptr {
    T* ptr;
public:
    uniqueptr():ptr(nullptr) {}
    explicit uniqueptr(T* ptr) : ptr(ptr) {}

    T& operator*() {
        return *ptr;
    }

    T* operator->() {
        return ptr;
    }

    bool operator!() {
        // return ptr ? true : false;
        return !ptr;
    }

    uniqueptr(uniqueptr&& rhs) {
        if(ptr) delete ptr;
        ptr = rhs.ptr;
        rhs.ptr = nullptr;
    }

    uniqueptr& operator=(uniqueptr&& rhs) {
        if(ptr) delete ptr;
        ptr = rhs.ptr;
        rhs.ptr = nullptr;
        return *this;
    }

    ~uniqueptr() {
        if(ptr) {
            delete ptr;
            ptr = nullptr;
        }
    }
    uniqueptr(const uniqueptr&) = delete;
    uniqueptr& operator= (const uniqueptr&) = delete;
};

class A {
    int val;
public:
    A(int i) : val(i) {
        cout << "A constructor" << endl;
    }
    int get() {
        return val;
    }
    ~A() {
        cout << "A destructor" << endl;
    }
};

int main() {
    uniqueptr<A> ptr1 (new A(10));
    uniqueptr<A> ptr2 (new A(20));
    cout << (*ptr1).get() << endl;
    // unique_ptr<A> ptr3 (ptr1);
    // ptr2 =ptr1;
    uniqueptr<A> ptr3 (move(ptr2));
    cout << ptr3->get() << endl;
    if (!ptr2) {
        cout << "ptr2 is no more" << endl;
    }
    ptr2 = move(ptr3);
    cout << ptr2->get() << endl;
    if (!ptr3) {
        cout << "ptr3 is no more" << endl;
    }

}
