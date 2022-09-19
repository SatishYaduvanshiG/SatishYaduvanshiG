#include <iostream>
using namespace std;

class smart_ptr
{
private:
int* ptr;

public:

explicit smart_ptr(int* p=NULL)
{
    ptr=p;
}

~smart_ptr()
{
    delete ptr;
}

// overloding de-referencing opearator
int&  operator *()
{
    return *ptr;
}

//overloding referencing operator
  int* operator -> ()
  {
      return  ptr;
  }
    
    
    
};

int main()
{

smart_ptr p(new int()); // it invokes constuctor by passing the address of the integer

*p=20;
cout<<*p;

return 0;

}
