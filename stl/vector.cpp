#include <bits/stdc++.h>
using namespace std;

int main () {
    vector <int> v;
    v.push_back(1);
    v.emplace_back(2);
    vector <pair<int, int>> vec;
    vec.push_back({1,2});
    vec.emplace_back(1.2);
    vector <int> v1(5,20);
    vector<int>::iterator it = v.begin();
    cout << *(it);
    for(auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }
    for(auto it:v) {
        cout << *(it)
    }
}