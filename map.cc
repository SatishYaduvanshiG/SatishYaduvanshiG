#include<stdio.h>
#include<iostream>
#include<string>
#include<vector> /* creats the dynamic array */
#include<array> /*creates the static array */
#include<list>
#include<map>
#include<unordered_map>
#include<algorithm>
#include<iterator>
using namespace std;




int main()
{
 
 map<int,int> mp;
 
 mp[4]=400;
 mp[3]=300;
 
 mp.insert(make_pair(10,100));
 mp.insert(make_pair(10,1000));
 
 mp[7]=700;
 mp[7]=7000;
 //mp.insert(10,100);
 map<int,int> :: iterator it;
 cout<<"normal  map"<<endl;
 for(it=mp.begin(); it!=mp.end(); it++)
      cout<<it->first<<"-"<<it->second<<endl;
     cout<<"multi map"<<endl;
      multimap<int,int> mmp;
      mmp.insert(make_pair(1,10));
      mmp.insert(make_pair(7,70));
      mmp.insert(make_pair(3,30));
      mmp.insert(make_pair(5,50));
      mmp.insert(make_pair(2,20));
      mmp.insert(make_pair(1,100));
      mmp.insert(make_pair(7,700));
      mmp.insert(make_pair(3,300));
      mmp.insert(make_pair(5,500));
      mmp.insert(make_pair(2,200));
      //
     // mmp[7]=800;
      multimap<int,int> :: iterator it1;
      for(it1=mmp.begin(); it1!=mmp.end(); it1++)
      cout<<it1->first<<"-"<<it1->second<<endl;
      
      cout<<"unordered_map"<<endl;
      unordered_map<int,int> ump;
      ump[1]=10;
      ump[4]=20;
      ump.insert(make_pair(3,30));
      ump.insert(make_pair(3,5000));
      ump[1]=20;
      unordered_map<int,int> :: iterator  it2;
      for(it2=ump.begin(); it2!=ump.end();it2++)
             cout<<it2->first<<"-"<<it2->second<<endl;
      
       cout<<"unordered_mutlimap"<<endl;
      unordered_multimap<int,int> ummp;
      ummp.insert(make_pair(1,10));
      ummp.insert(make_pair(4,20));
      //ummp[1]=10;
     // ummp[4]=20;
      ummp.insert(make_pair(3,30));
      ummp.insert(make_pair(3,5000));
     // ummp[1]=20;
     ummp.insert(make_pair(1,20));
    // ummp.insert(make_pair(3,5000));
      unordered_multimap<int,int> :: iterator  it3;
      for(it3=ummp.begin(); it3!=ummp.end();it3++)
             cout<<it3->first<<"-"<<it3->second<<endl;
      
      
      
 
 
// for()
 
return 0;
}
