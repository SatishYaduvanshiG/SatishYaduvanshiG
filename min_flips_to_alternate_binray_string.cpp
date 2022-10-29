/*Minimum Number of Coins that must be Reversed to Achieve Alternating Sequence of Heads and Tails*/
Problem
There are N coins, each showing either heads or tails. We would like all the coins to form a sequence of alternating heads and tails. What is the minimum number of coins that must be reversed to achieve this?

Given an array A consisting of N integers representing the coins, returns the minimum number of coins that must be reversed. Consecutive elements of array A represent consecutive coins and contain either a 0 (heads) or a 1 (tails).

Examples
Example 01
Input: [1,0,1,0,1,1]
Output: 1
Explanation: After reversing the sixth coin, we achieve an alternating sequence of coins [1,0,1,0,1,0].
Example 02
Input: [1,1,0,1,1]
Output: 2
Explanation: After reversing the first and fifth coins, we achieve an alternating sequence of coins [0,1,0,1,0].
Example 03
Input: [0,1,0]
Output: 0
Explanation: The sequence of coins is already alternating.
Example 04
Input: [0,1,1,0]
Output: 2
Explanation: After reversing the first and second coins, we achieve an alternating sequence of coins [1,0,1,0].
Constraints
N is an integer within the range [1..100];
each element of array A is an integer that can have one of the following values: 0, 1
==========================================================================================================================================================================
Solution

class Solution {
public:
    int minOperations(string s) {
       /*if(s.empty())
        {
            return 0;
        }*/
        vector<char> alt_bin_str (s.begin(),s.end());
        for(auto ch : alt_bin_str)
        {
            cout<<ch<<endl;
        }
        int n =alt_bin_str.size();
        //int n =alt_bin_str.length();
        //int n =alt_bin_str.size();
        //scenario-1
        // even_index:0 flip
        //odd_index: 1 flip
        //scenario-2
        // even_index:1 flip
        //odd_index: 0 flip
        //take  min of them
        int count1=0,count2=0;
        if(n > 0)
        {
            for(auto index =0; index < n; index++)
            {
                 if(index %2 == 0)
                  {
                      if (alt_bin_str[index] == '0')
                          count1++;
                      else if(alt_bin_str[index] == '1')
                         count2++;   
                   }
                  else
                  {
                        if (alt_bin_str[index] == '1')
                              count1++;
                        else if(alt_bin_str[index] == '0')
                              count2++;  
                   }
            } 
        }
        return min(count1,count2); 
    }
};