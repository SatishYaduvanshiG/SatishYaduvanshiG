#include<stdio.h>
#include<iostream>
#include<vector> /* creats the dynamic array */
#include<array> /*creates the static array */
using namespace std;



int main()
{
 
 int i;
 vector<int> v1;
 
 vector<int> :: iterator it;
  cout<<"insert elements through push_back()"<<endl;
 for(i=0 ;i<5; i++)
  v1.push_back(i*10);
  
 vector<int> v2 ={0,1,2,3,4};
 
 v1.insert(v1.begin(),v2.begin(),v2.end());
 
 cout<<"print the elements through iterator after copying v2 values to v1"<<endl;
  for(it=v1.begin(); it!=v1.end(); it++)
      cout<<*it<<"\t";
      /*cout"\n"*/ cout<<endl;
 
 //vector<int> :: iterator it;
 
 /*v1.insert(v1.begin(), -10);
 v1.insert(++(v1.begin()),-10);
 v1.insert(v1.begin(),4,-10);
 
 v1.erase(v1.begin());
 
// v1.erase(v1.begin(),v1.end()-8);
 
 v1.erase(v1.begin(),v1.end()-10);*/
 
 

  cout<<"print the elements through iterator"<<endl;
  for(it=v1.begin(); it!=v1.end(); it++)
      cout<<*it<<"\t";
      /*cout"\n"*/ cout<<endl;
      
       for(it=v2.begin(); it!=v2.end(); it++)
      cout<<*it<<"\t";
  cout<<endl;
 cout<<"v1.empty()"<<v1.empty()<<endl;
 cout<<"v1.size()"<<v1.size()<<endl;
 cout<<"v1.capacity()"<<v1.capacity()<<endl;
 cout<<"v1.front()"<<v1.front()<<endl;
 cout<<"v1.backt()"<<v1.back()<<endl;
 
  cout<<"v2.front()"<<v2.front()<<endl;
 cout<<"v2.back()"<<v2.back()<<endl;
 v1.pop_back();
 cout<<"print vector:v1"<<endl;
 for(i=0; i< v1.size();i++)
     cout<<v1.at(i) <<"\t";
     cout<<endl;
    
return 0;
}
