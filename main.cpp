#include<bits/stdc++.h>
using namespace std;

// Given 2 numbers N and Q, an array A of N number and Q number of pairs L, R. For each query Q print a single line that contains the summation of all numbers from index L to index R.

// Input
// First line contains two numbers N, Q (1≤N,Q≤105) where N is number of elements in A and Q is number of query pairs.

// Second line contains N numbers(1≤Ai≤109).

// Next Q lines contains L,R (1≤L≤R≤N).

// Output
// For each query Q print a single line that contains the summation of all numbers from index L to index R.

// Input
// 6 3
// 6 4 2 7 2 7
// 1 3
// 3 6
// 1 6

// Output
// 12
// 18
// 28

int main ()
{
    int length, cases;
    cin >> length >> cases;
    int nums[length], sum = 0;

    for (int i = 0; i < length; i++)
    {
        cin >> nums[i];
    }

    while (cases)
    {
        int fn, ln, sum = 0;
        cin >> fn >> ln;

        for (int i = fn; i <= ln; i++)
        {
            sum += nums[i-1];
        }
        
        cout << sum << endl;

        cases--;
    }
        
    
    return 0;
}