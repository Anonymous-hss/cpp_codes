#include <bits/stdc++.h>

using namespace std;

void print(int n) {
    for (int i = 0; i< 4; i++) {
        for (int j = 0; j < 4; j++) {
            cout << "*";
        }
        cout << endl;
    } 
}

int main() {
    int n;
    cin >> n;
    print(n);
}