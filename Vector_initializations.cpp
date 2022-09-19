#include <iostream>
#include <vector>
#include <list>

int main() {
  /*init type 1: Initializing a vector with default value of elements*/
  // Initialize vector with 5 integers
  // Default value of all 5 ints will be 0.
  std::vector<int> vecOfInts(5);
  for(int x : vecOfInts)
      std::cout<<x<<std::endl;
      
  /*init type 2: Initialize a vector by filling similar copy of an element*/
  std::vector<std::string> vecOfStr(5, "Hi");
  for(std::string str : vecOfStr)
    std::cout<<str<<std::endl;
    
  /*init type 3: Initialize a vector with an array*/
  // Create an array of string objects
  std::string arr[] = {"first", "sec", "third", "fourth"};
  // Initialize vector with a string array
  std::vector<std::string> vecOfStr(arr, arr + sizeof(arr)/sizeof(std::string)); //here, sizeof(std::string) is depends on machine size. std::String is class
  for(std::string str : vecOfStr)
    std::cout<<str<<std::endl;
    
  /*init type 4: Initialize a vector with std::list */
  // Create an std::list of 5 string objects
  std::list<std::string> listOfStr;
  listOfStr.push_back("first");
  listOfStr.push_back("sec");
  listOfStr.push_back("third");
  listOfStr.push_back("fouth");
  // Initialize a vector with std::list
  std::vector<std::string> vecOfStr(listOfStr.begin(), listOfStr.end());
  for(std::string str : vecOfStr)
        std::cout<<str<<std::endl;
        
   /*init type 5: Initializing a vector with an other vector*/
   std::vector<std::string> vecOfStr;
   vecOfStr.push_back("first");
   vecOfStr.push_back("sec");
   vecOfStr.push_back("third");
   // Initialize a vector with other string object
   std::vector<std::string> vecOfStr3(vecOfStr);
   
   return 0;
}
