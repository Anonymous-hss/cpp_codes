#include <bits/stdc++.h>

using namespace std;

int main () {
    string str = "Hello, World";
    int count = 0;
    for(int i = 0; i< str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U') {
            count++;
        }
    }
    cout << count;
}