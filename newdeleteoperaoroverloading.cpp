#include<string>
#include<iostream>
#include<stdlib.h>
using namespace std;

class student
{
    private:
    string name;
    int age;
    public:
    
    student()
    {
        cout<<"default construcotr"<<endl;
        
    }
    student(const char*  name , int  age)
    {
        
        cout<<"parameterized  construcotr"<<endl;
        this->name=name;
        this->age=age;
        
    }
    
    void* operator new(size_t size)
    {
        
        cout<<"new operator() is called"<<endl;
        void* p = malloc(size);
        
          //void* p = :: new student();
       // void* p =new student();
        
        
    }
    
    void operator delete(void* p)
    {
     
     cout<<"delete operator() is called"<<endl;   
        free(p);
        
    }
    
    void display()
    {
        
        cout<<"name:"<<name<<endl;
        cout<<"age:"<<age<<endl;
        
    }
    ~student()
    {
        
        
     cout<<"destructor is called"<<endl;   
        
        
    }    
};

int main()
{
    student* sptr = new student("satish yaduvanshi",28);
    
    sptr->display();
    
    delete sptr;

    return 0;
}
