#include <iostream>
#include <string>
using namespace std;

int main () {
    int myNumbers[5] = {10, 20, 30, 40, 50};
    int size = sizeof(myNumbers) / sizeof(int);
    cout << size;
}