#include <bits/stdc++.h>

using namespace std;

// Problem Statement
// You will be given an positive odd integer N, you need to print the pattern for it. See sample input and output for understanding the pattern.

// Input Format
// Input will contain only N.

// Constraints
// 1 <= N <= 20 and N is odd.

// Output Format
// Output the pattern.

int main()
{
    int size;
    cin >> size;

    int stepper = size/2, start = 0, end = size;
    
    while (stepper--)
    {
        for (int i = 0; i < end; i++)
        {
            if (i == start) {
                cout << "\\";
            }else if (i+1 == end) {
                cout << "/";
            }else {
                cout << " ";
            }
        }
        start++, end--;

        cout << endl;
    }
    start--, end++;

    stepper = size/2;
    for (int i = 0; i < stepper; i++)
    {
        cout << " ";
    }
    cout << "X" << endl;
    
    while (stepper--)
    {
        for (int i = 0; i < end; i++)
        {
            if (i == start) {
                cout << "/";
            }else if (i+1 == end) {
                cout << "\\";
            }else {
                cout << " ";
            }
        }
        start--, end++;
        cout << endl;
    }
    

    return 0;
}
