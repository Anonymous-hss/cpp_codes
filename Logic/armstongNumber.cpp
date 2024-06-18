#include<iostream>
#include<cmath>
using namespace std;

bool isAmstrongNumber(int num) {
    int originalNum = num;
    int sum = 0;
    int index = 0;
    int temp = num;

    while(temp != 0) {
        temp = temp / 10;
        ++index;
    }

    temp = num;
    while(temp != 0){
        int digit = temp % 10;
        sum = sum + pow(digit, index);
        temp = temp/10;
    }

    return (sum == originalNum);
}


int main () {
    int number;
    cin >> number;

    if(isAmstrongNumber(number)){
        cout<< "It is an Amstrong Number";
    } else {
        cout << "It is not a Amstrong Number";
    }

    return 0;
}