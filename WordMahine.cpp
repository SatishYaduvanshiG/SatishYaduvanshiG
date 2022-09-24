#include<bits/stdc++.h>
using namespace std;
int solve(vector<string>& s)
{
    stack<int> st;
    for(auto i =0; i < s.size(); i++)
    {
        if(s[i] == "+")
        {
            if(st.size() >= 2)
            {
                int tmp = st.top();
                st.pop();
                tmp = tmp + st.top();
                st.push(tmp);
            }
            else
            {
                return -1;
            }
            
        }
        else if(s[i] == "-")
        {
            if(st.size() >= 2)
            {
                int tmp = st.top();
                st.pop();
                tmp = tmp - st.top();
                st.push(tmp);
            }
            else
            {
                return -1;
            }
        }
        else if(s[i] == "POP")
        {
            if(st.size() >= 1)
            {
                st.pop();
            }
            else
            {
                return -1;
            }
            
        }
        else if(s[i] == "DUP")
        {
            if(st.size() >= 1)
            {
                st.push(st.top());
            }
            else
            {
                return -1;
            }
        }
        else
        {
            st.push(stoi(s[i]));
        }
    }
    return st.top();
}
int main()
{
   string str = "1 5 DUP 3 -";
   vector<string> tokens;
   string token;
   stringstream ss(str);
   while(getline(ss,token, ' '))
   {
       tokens.push_back(token);
   }
   
   for(auto element : tokens)
   {
       cout<<element<<endl;
   }
    cout<<"result"<<solve(tokens);
    return 0;
}
