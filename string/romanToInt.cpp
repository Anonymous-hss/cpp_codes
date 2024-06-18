#include <iostream>
#include <string>

using namespace std;

class Solution {
    public:

    int romanCharToInt(char ch) {
        switch(ch){
            case 'I': return 1;
            case 'V': return 5;
            case 'X': return 10;
            case 'L': return 50;
            case 'C': return 100;
            case 'D': return 500;
            case 'M': return 1000;
            default: return 0;
        }

    }

    int romanToInt(string &s){
        // cout << s;
        int total=0;
        int n = s.size();

        for(int i = 0; i< n; ++i) {
            int current_value = romanCharToInt(s[i]);
            int next_value = (i< n-1) ? romanCharToInt(s[i+1]): 0;

            if(current_value < next_value) {
                total -= current_value;
            } else {
                total += current_value;
            }
        }
        return total;

    }

};


int main () {
    string s;
    cin >> s;
    // cout << s;
    Solution sol;

    cout<<sol.romanToInt(s);

    return 0;
}