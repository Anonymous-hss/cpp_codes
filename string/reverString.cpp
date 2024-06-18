#include <bits/stdc++.h>

using namespace std;

string reverseString(const string &str){
    string reversedStr = str;
    reverse(reversedStr.begin(), reversedStr.end());
    return reversedStr;
}

int main() {
    string input;
    cout << "Enter a String:" << endl;
    getline(cin, input);
    reverseString(input);

}