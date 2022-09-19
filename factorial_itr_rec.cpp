#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    if (n == 1) return 1;
    if (n == 0) return 0;
    return n * factorial(n-1);
}

int main() {
    int n =5, res =1;
    
    {
        cout << factorial(n) << endl;
    }
    
    {
        while(n>0) {
           res = res * (n--);
        }
        cout << res << endl;
    }
    
}
