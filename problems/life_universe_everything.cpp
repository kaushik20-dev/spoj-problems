// Problem name: TEST - Life, the Universe, and Everthing
// Tags: #basic #tutorial #ad-hoc-1
// Problem url: https://www.spoj.com/problems/TEST/
// user: @mewtwo97
// contact: kaushi.raghupathruni@gmail.com

/*
Problem Description:
Your Program is to use the brute-force approach in order to find the Answer to Life, 
the Universe, and Everything. More precisely...rewrite small numbers from input to output.
Stop processing input after reading in the number 42. 
All numbers at input are integers of one or two digits. 

Example run:
Input:
1
2
88
42
99

Output:
1
2
88

*/

#include <iostream>
using namespace std;

int main() {
    int input;
    while (1) {
        cin  >> input;
        if (input != 42) {
            cout << input << endl;
        }
        else {
            cin >> input;
            break;
        }
    }
    return 0;
}
