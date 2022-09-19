/* set container internally used Binary Search Tree DataStructure to store the data(keys) */
#include<stdio.h>

#include<iostream>
#include<set>
using namespace std;
#include<set>
#include<unordered_set>
#include<string>
/* 
FUNCTION TEMPLATES IN C++
method-1: template<typename T> fun_declaration
method-2: templated<class T>  fun_declaration

*/

template<typename T>
void print_mydata( T output)
{
    
    cout<<output<<endl;
    
    return ;
    
}

//template<class T>
template<class T>
void swap1( T& x, T& y)
{
    T z;
    z=x;
    x=y;
    y=z;
    
}

int main()
{
 
 int i=53; // T is int 
 double d=53.53; // T is double
 bool b=true; // T is boolean 
 string s("hello world"); // T is string
 print_mydata(i);
 print_mydata(d);
 print_mydata(b);
 print_mydata(s);
 
 int a=10;
 int b1=20;
 cout<<"before swap1:"<<endl;
 cout<<"a:"<<a<<"\t"<<"b1:"<<b1<<endl;
 swap1(a,b1);
 cout<<"after swap1:"<<endl;
 cout<<"a:"<<a<<"\t"<<"b1:"<<b1<<endl;
 
          
          
          
    return 0;
}