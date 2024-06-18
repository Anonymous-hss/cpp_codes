#include <iostream>
#include <vector>
using namespace std;

vector<int> generateFibonacci (int count) {
    vector<int> fibonacci(count);
    fibonacci[0] = 1;
    fibonacci[1] = 1;
    for(int i = 2; i < count ; ++i) {
        fibonacci[i] = fibonacci[i-1] + fibonacci[i-2];
    }
    return fibonacci;
}

void fibonacciTriangle( int levels) {
    int totalNumbers = levels * (levels + 1) /2;
    vector<int> fibonacciNumber = generateFibonacci(totalNumbers);
    int index = 0;
    for(int i= 1;i<= levels;++i) {
        for(int j =0; j<i;++j) {
            cout << fibonacciNumber[index++] << " ";
        }
        cout << endl;
    }
}


int main () {
    int levels;

    cin >> levels;
    if(levels == 1) {
        cout << "Levels should be atleast more than 1." << endl;
        return 1;
    }

    fibonacciTriangle(levels);
    return 0;
}