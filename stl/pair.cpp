#include <bits/stdc++.h>

using namespace std;

int main () {
    pair<int, int> p = {1,3};
    cout << p.first << " " << p.second;
    pair<int, pair<int, int>> pa = {1,{2,3}};
    cout << pa.first << " " << pa.second.second << " " << pa.second.first;
    pair <int, int> arr[] = {{1,2},{3,4},{5,6}};
    cout << arr[1].second;
}