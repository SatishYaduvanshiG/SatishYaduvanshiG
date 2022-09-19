#include<stdio.h>
#include<iostream>
#include<string>
#include<vector> /* creats the dynamic array */
#include<array> /*creates the static array */
#include<list>
using namespace std;

bool compare_function(string& s1, string& s2)
{
    
    
    return (s1.length() > s2.length());
}


int main()
{
 list<int> l={9,9,6,2,7,9};
 l.sort();
 list<string> l2={"abc","ba","aaaa"};
 l2.sort(compare_function);
 list<int> l3={9,5,6,6,0,0};
 l3.sort();
 list<int> l4={0,2,4,6,8};
 list<int> l5={1,3,5,7,9};
 
 
 
list<int> :: iterator it;
cout<<"sort the integers int list1:"<<endl;
for(it=l.begin(); it!=l.end(); it++)
     cout<<*it<<"\t";
     cout<<endl;
     
     cout<<"sort the integers in list3:"<<endl;
for(it=l3.begin(); it!=l3.end(); it++)
     cout<<*it<<"\t";
     cout<<endl;
 cout<<"sort the strings:\n"<<endl;
 l.merge(l3);
 cout<<"after merge opeation list l1 is :"<<endl;
 for(it=l.begin(); it!=l.end(); it++)
     cout<<*it<<"\t";
     cout<<endl;
 
/* for(it=l2.begin(); it!=l2.end(); it++)
     cout<<*it<<"\t";
     cout<<endl;*/
 
// l4.splice(l5)
 
    
     list<int> :: iterator it1=l4.begin();
     ++it1;
     l4.splice( it1,l5);
     cout<<"After splice operation-1:"<<endl;
for(it1=l4.begin(); it1!=l4.end(); it1++)
     cout<<*it1<<"\t";
     cout<<endl;
     cout<<"l5.begin()"<<*(l5.begin())<<endl;
     
     it1=l4.begin();
     ++it1;
     l5.splice(l5.begin(),l4,it1);
     
        cout<<"After splice operation-2:"<<endl;
for(it1=l4.begin(); it1!=l4.end(); it1++)
     cout<<*it1<<"\t";
     cout<<endl;
     cout<<"l5.begin()"<<*(l5.begin())<<endl;
     
     
return 0;
}
