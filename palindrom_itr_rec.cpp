#include <bits/stdc++.h>

using namespace std;

bool isPalindromFun(int start, int end, char *p) {
    if((p==NULL) || (start > end)) return false;
    if (start == end) return true;
    if(p[start] == p[end]) {
        return isPalindromFun(start+1, end-1, p);
    }
    return false;
}

int main() {
    // char ptr[] = "Hello world";
    char pal[] = "abca";
    
    {
        if (isPalindromFun(0, strlen(pal)-1, pal)) {
            cout << "Palindrom" << endl;
        } else {
            cout << "Not Palindrom" << endl;
        }
    }
    
    {
        bool isPalindrom = true;
        for (int i=0, j= strlen(pal)-1; i<j ; i++, j--) {
            if (pal[i] != pal[j]) {
                isPalindrom = false;
                break;
            }
            
        }
        if (isPalindrom) {
            cout << "given string is palindrom" << endl;
        } else {
            cout << "given string is not palindrom" << endl;
        }
    }
    
}
