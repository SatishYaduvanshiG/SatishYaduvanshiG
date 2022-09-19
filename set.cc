/* set container internally used Binary Search Tree DataStructure to store the data(keys) */
#include<stdio.h>

#include<iostream>
#include<set>
using namespace std;
#include<set>
#include<unordered_set>
int main()
{
    set<int> s;
    for (int i=0; i< 10; i++)
    s.insert(10-i);
    set<int> :: iterator it2;
          it2=s.find(4);
          s.erase(it2);
    
    cout<<"Print Set Values:"<<endl;
    for(set<int> :: iterator it=s.begin(); it!=s.end(); it++)
          cout<<*it<<endl;
          
         
          multiset<int> s1;
    for (int i=0; i< 10; i++)
    s1.insert(10-i);
    cout<<"Print MultiSet Values:"<<endl;
     s1.insert(1);
    for(multiset<int> :: iterator it1=s1.begin(); it1!=s1.end(); it1++)
          cout<<*it1<<endl;
        
          
          
          
          unordered_set<int> us;
    for (int i=0; i< 10; i++)
    us.insert(10-i);
    
    
    cout<<"Print UnOrdered_Set Values:"<<endl;
    for(unordered_set<int> :: iterator it=us.begin(); it!=us.end(); it++)
          cout<<*it<<endl;
          
     unordered_multiset<int> ums;
    for (int i=0; i< 10; i++)
    ums.insert(10-i);
    cout<<"Print UnOrdered MultiSet Values:"<<endl;
     ums.insert(1);
     unordered_multiset<int> :: iterator it3;
     it3=ums.find(5);
     ums.erase(it3);
    for(unordered_multiset<int> :: iterator it1=ums.begin(); it1!=ums.end(); it1++)
          cout<<*it1<<endl;
          
          
          
    return 0;
}