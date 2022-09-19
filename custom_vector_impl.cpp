#include <bits/stdc++.h>

using namespace std;

template<typename T>
class Vector {
    T* ptr;
    unsigned int sz,Capacity;
private:
    void reallocation() {
        T* temp = new T[Capacity];
        for (int i=0; i< sz; i++) {
            temp[i] = ptr[i];
        }
        if (ptr) delete[] ptr;
        ptr = temp;
    }
public:
    Vector(int s=0, int val=0) : sz(s), Capacity(s) {
        ptr = new T[Capacity];
        for (int i=0; i< Capacity; i++) {
            ptr[i] = val;
        }
    }
    ~Vector() {
        delete[] ptr;
    }
    void resize(int sizeVal) {
        cout << "inside resize" << endl;
        sz = sizeVal;
        Capacity = sizeVal;
        reallocation();
    }
    void reserve(int capacityVal) {
        Capacity = capacityVal;
        reallocation();
    }
    void push_back(T val) {
        if (sz == Capacity) {
            Capacity = Capacity ? (Capacity *2) : 1;
            reallocation();
        }
        ptr[sz++] = val;
    }
    void pop_back() {
        ptr[sz--] = 0;
    }
    int size() {
        return sz;
    }
    int capacity() {
        return Capacity;
    }
    T* begin() {
        return ptr;
    }
    T* end() {
        return (ptr + sz);
    }
    
    class Iterator {
        T* ptr;
    public:
        Iterator(T* p=nullptr) : ptr (p) {}
        Iterator(const T& p) {
            ptr = p;
        }
        Iterator& operator==(const T& rhs) {
            if (rhs == this) return *this;
            ptr = rhs.ptr;
            return *this;
        }
        T& operator*() {
            return *ptr;
        }
        T* operator++(int val) {
            ptr = ptr +1;
            return ptr;
        }
        bool operator<(T* end) {
            return (ptr < end);
        }
        T* operator+(int pos) {
            return(ptr + pos);
        }
    };
};

class A {
    int val;
public:
    A(int v=0):val(v) {}
    int getValue() { return val;}
};

int main() {
    { //standard vector with integer values
        vector<int> vec = {1,2,3,4}, vec1;
        vector<int>::iterator it;
        for (it = vec.begin(); it != vec.end() ; it++) {
            cout << *it<< " ";
        }
        cout << endl;
    }
    { // //customer Vector with integer values
        Vector<int> vec1;
        vec1.reserve(3);
        vec1.push_back(1);
        vec1.push_back(2);
        vec1.push_back(3);
        vec1.push_back(4);
        vec1.pop_back();
        vec1.pop_back();
        cout << "Size is " << vec1.size() << " Capacity is " << vec1.capacity() << endl;
        Vector<int>::Iterator it = vec1.begin();
        for (it = vec1.begin(); it < vec1.end() ; it++) {
            cout << *it<< " ";
        }
        cout << endl;
    }
    { //customer Vector with strings   
        Vector<string> vec2;
        vec2.push_back("Varun");
        vec2.push_back("Kumar");
        vec2.push_back("Ayyapu");
        vec2.push_back("Satish");
        vec2.push_back("kumar");
        vec2.push_back("gampa");
        
        Vector<string>::Iterator it1 = vec2.begin(), it2;
        it2 = it1 + 3;
        for (it1 = vec2.begin(); it1 < vec2.end() ; it1++) {
            cout << *it1<< " ";
        }
        cout << endl;
        for(;it2 < vec2.end(); it2++) {
             cout << *it2<< " ";
        }
        cout << endl;
    }
    { //customer Vector with objects
        Vector<A> vec3;
        A obj(5), obj1(10), obj2(15), obj3(20);
        vec3.push_back(obj);
        vec3.push_back(obj1);
        vec3.push_back(obj2);
        vec3.push_back(obj3);
        
        Vector<A>::Iterator it3 = vec3.begin();
        for (it3 = vec3.begin(); it3 < vec3.end() ; it3++) {
            cout << (*it3).getValue()<< " ";
        }
    }
}
