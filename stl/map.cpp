#include<bits/stdc++.h>
using namespace std;

int main () {
    map<int, int> mpp;
    map<int, pair<int, int>> mao;
    map<pair<int, int>, int> mess;

    mpp[1] =2;
    mpp.emplace({3,1});
    mpp[(2,3)] = 10;
    cout << mpp[1];
}