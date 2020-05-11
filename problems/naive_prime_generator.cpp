// Problem name: PRIME1 - Prime Generator
// Tags: #number-theory
// Problem url: https://www.spoj.com/problems/PRIME1/
// user: @mewtwo97
// contact: kaushi.raghupathruni@gmail.com

/*
Problem Description:
Peter wants to generate some prime numbers for his cryptosystem.
Help him! Your task is to generate all prime numbers between two given
numbers!

Input:
The input begins with the number t of test cases in a single line (t <= 10).
In each of the next lines there are two numbers m and n
(1 <= m <= n <= 1000000000, n-m<=100000) separated by a space.

Output:
For every test case print all prime numbers p such that m <= p <= n, one
number per line, test cases separated by an empty line.

Example run:
Input:
2
1 10
3 5

Output:
2
3
5
7

3
5
*/

#include <iostream>
using namespace std;

bool is_prime(int num) {
    if (num <= 1) 
        return false;

    for (int i = 2; i < num; i++) {
        if (num % i == 0) 
            return false;
    }
    return true;
}

int main() {
    int i = 0, test_cases;
    cin >> test_cases;

    if (test_cases == 0)
        return 0;

    while (i < test_cases) {
        int lb, ub;
        cin >> lb >> ub;
        for (int k = lb; k <= ub; k++) {
            if (is_prime(k))
                cout << k << endl;
        }
        i++;
        cout << endl;
    }    
    return 0;
}