#include <bits/stdc++.h>

using namespace std;

void reverse(int start, int last, char p[]) {
    if (start > last) return;
    
    swap(p[start], p[last]);
    reverse(start+1, last-1, p);
}

int main() {
    char ptr[] = "Hello world";
    char temp[] = "Hello world";
    {
      reverse(0,strlen(temp)-1, temp);
      cout << temp << endl;
    }
    
    { //without any variable
       int length = 0, i=0;
       while (ptr[i++] != '\0') {
           ++length;
       }
       for (int j=0, k=length-1 ; j < k; j++,k-- ) {
           ptr[j] = ptr[j] + ptr[k];
           ptr[k] = ptr[j] - ptr[k];
           ptr[j] = ptr[j] - ptr[k];
       }
       cout << ptr << endl;
    }
}
