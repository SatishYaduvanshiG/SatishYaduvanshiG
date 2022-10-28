//problem
/*write a function solution that , given integer N, returns the smallest non negative integer whose individual digits sum to N. Given N = 16, the function should return 79, there are many numbers whose digits sum to 16 (for example : 79, 97,808,551,22822,etc.) . the smallest such number is 79. 2. given N = 19, THE FUNCTION SHOULD RETURN 199 (the sum of digits is 1+9+9 = 19). 3. Given N= 7, the function should return 7. asume that: N is an interger within the range [0..50].*/
#include <bits/stdc++.h>
using namespace std;
int digits_sum(string num)
{
    int digit_sum=0;
    int n=num.length();
    for(auto i =0; i < n ; i++)
    {
        digit_sum = digit_sum + num[i] -'0' ;
    }
    return digit_sum;
}

int smallest_num_with_digit_sum(int N)
{  
    int temp =N;
    while(1)
    {
       if (N  == digits_sum(std::to_string(temp)))
        {
            return temp;
        }
        temp =temp+1;
    }
}

int main()
{
    cout<<smallest_num_with_digit_sum(16)<<endl;
    cout<<smallest_num_with_digit_sum(19)<<endl;
    cout<<smallest_num_with_digit_sum(7)<<endl;
    return 0;
}