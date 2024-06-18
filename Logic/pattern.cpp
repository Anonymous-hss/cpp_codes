#include <bits/stdc++.h>
using namespace std;

void printPattern(int n) {
    int maxWidth = n * 2 - 1;

    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= (maxWidth - (i * 2 - 1)) / 2; ++j) {
            cout <<"  ";
        }

        for(int j = 1; j<= i; ++j) {
            cout << i;
            if(j < i) {
                cout <<"    ";
            } 
        }
        cout << endl;
    }
    

    for(int i= n - 1; i >= 1; --i) {
        for(int j = 1; j <= (maxWidth - (i * 2 -1 )) /2; ++j) {
            cout <<"  ";
        }

        for(int j = 1; j <= i; j++) {
            cout << i;
            if( j < i) {
                 cout <<"    ";
            }
        }
        cout << endl;
    }
    
}


int main () {
    int n;
    cin >> n;

    printPattern(n);
    return 0;
}