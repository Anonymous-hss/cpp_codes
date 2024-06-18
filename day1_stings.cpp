#include <string>
#include <iostream>

using namespace std;

int main() {
    string firstName = "Rahul";
    string lastName = " Vido";
    // string fullName = firstName + lastName;
    string fullName = firstName.append(lastName);
    
    cout << fullName;
    cout << endl << fullName.length();
    cout << endl << fullName[0];

    // quoting inside the string
    string txt = "Here I am practicing \\coding for \"TCS NQT\" from Nagpur";
    cout << endl << txt << endl;

    // taking full name as input string 
    string fullName1;
    cout << "Type your full name: " << endl;
    getline(cin, fullName1);
    cout << "Your full name is: "<< fullName1 << endl;
}