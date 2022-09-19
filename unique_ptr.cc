#include <iostream>
#include<memory>
using namespace std;

struct test {
    public:
    test()
    {
        cout<<"constructor"<<endl;
    }
    
    ~test()
    {
        cout<<"destructor"<<endl;
    }
    
};

unique_ptr<test> fun()
{
    unique_ptr<test> up2 (new test());
    //return nullptr;
    
}
int main()
{

/*
unique_ptr<class_name> ptr (new class_name() )*/
// unique_ptr<test> up1=new test();
cout<<" Main  In"<<endl;
//unique_ptr<test> up1(new test());
fun();
//unique_ptr<test> up2=up1;//it causes the compilation error
//unique_ptr<test> up2=move(up1);//it causes the compilation error
/*
shared_ptr<test> sp1(new test());
shared_ptr<test> sp2=sp1;
*/
cout<<"Main Out"<<endl;
return 0;

}
