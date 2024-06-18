#include <iostream>
#include <string>

using namespace std;

int main() {
    int Gennum = 2;
    string Gender;
    switch(Gennum) {
        case 1: Gennum = 1;
            cout << "Welcome you are a super man!";
            break;
        case 2: Gennum = 2;
            cout << "Welcome you are a Super Women!";
            break;
    }
}