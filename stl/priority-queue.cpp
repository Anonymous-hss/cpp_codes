#include <bits/stdc++.h>
using namespace std;

int main () {
    priority_queue<int> pq;
    pq.push(5);
    pq.push(2);
    pq.push(8);
    pq.push(10);
    cout << pq.top() << endl;

    priority_queue<int, vector<int>,greater<int>> pqr;
    pqr.push(5);
    pqr.push(2);
    pqr.push(8);
    pqr.push(10);
    cout << pqr.top();
}