#include<stdioh>
#include<iostream>
using namespace std;
/* pair and tuples are not acutally a part of container library */

int main()
{
tuple<int intint> t1;
t1=make_tuple(1,2,3);

cout<<"t1.first:"<<t1.first<<endl;
cout<<"t1.second:"<<t1.second<<endl;
cout<<"t1.thrird:"<<t1.third<<endl;
return 0;
}
