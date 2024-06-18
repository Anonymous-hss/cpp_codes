#include <iostream>
#include <stack>
using namespace std;

void decimalToBinary(int deciNum) {
    stack<int> binaryStack;

    if(deciNum == 0) {
        return;
    }

    while (deciNum > 0)
    {
        binaryStack.push( deciNum%2);
        deciNum = deciNum/2;
    }

    while (!binaryStack.empty())
    {
        cout<<binaryStack.top();
        binaryStack.pop();
    }
    
    
}


int main () {
    int decimalNumber;

    cin >> decimalNumber;
    decimalToBinary(decimalNumber);   
    return 0;
}