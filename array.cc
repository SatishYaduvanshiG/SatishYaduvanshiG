#include<stdio.h>
#include<iostream>
#include<vector> /* creats the dynamic array */
#include<array> /*creates the static array */
using namespace std;



int main()
{
 //int i;
 array<int, 5> a; 
 a.fill(0);
 array<int, 5> b;
 array<int,10> c;
 c={9,9,6,2,7};
 b.fill(0);
 int i;
for(i=0;i<5; i++)
 cout<<a.at(i)<<endl;
 
 cout<<"Initializing the array with  {} brackets: \n"<<endl;
 a = {9,5,6,6,0};
 b={1,2,3,4,5};
 a.swap(b);
 cout<<" array-b elements of array:"<<endl;
 for(i=0;i<5;i++)
  cout<<b.at(i)<<endl;
  cout<<" array-a elements of array:"<<endl;
  for(i=0;i<5; i++)
 cout<<a.at(i)<<endl;
 cout<<"*****"<<endl;
  
 for(i=0;i<5; i++)
 cout<<a.at(i)<<endl;
 
 //int b[5] ;
 cout<<"a.front()"<<a.front()<<endl;
 cout<<"a.back()"<<a.back()<<endl;
 cout<<"a[1]:"<<a[1]<<endl;
 
 cout<<"size:"<<a.size()<<endl;
 cout<<"max_size:"<<a.max_size()<<endl;
 cout<<"max_size:"<<b.max_size()<<endl;
 cout<<"max_size:"<<c.max_size()<<endl;




return 0;
}
