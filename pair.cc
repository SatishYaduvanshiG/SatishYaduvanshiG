#include<stdio.h>
#include<iostream>
using namespace std;
/* pair and tuples are not acutally a part of container library */

int main()
{
pair<int, int> p1, p3;
pair<int,string> p2;

p1 =make_pair(1,2);
p2=make_pair(1,"studytonight");
p3=make_pair(3,4);

cout<<"p1.first:"<<p1.first<<endl;
cout<<"p1.first:"<<p1.second<<endl;
cout<<"p1.first:"<<p2.first<<endl;
cout<<"p1.first:"<<p2.second<<endl;
cout<<"p1.first:"<<p3.first<<endl;
cout<<"p1.first:"<<p3.second<<endl;


if(p1==p3)
cout<<"p1 and p3 are equal"<<endl;
else
cout<<"p1 and p3 are not equal"<<endl;
return 0;
}
