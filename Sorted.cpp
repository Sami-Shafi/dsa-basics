#include <bits/stdc++.h>

using namespace std;

// Problem Statement
// You will given an array A of size N. You need to tell if the array is already sorted or not. If the array is sorted in ascending order print "YES", otherwise print "NO".

// Input Format
// First line will contain T, the number of test cases.
// The first line of each test case will contain N.
// The second line of each test case will contain the array A.

// Constraints
// 1 <= T <= 1000
// 1 <= N <= 1000
// 0 <= A[i] <= 1000; Where 0 <= i < N

// Output Format
// Output "YES" or "NO" without the quotation marks according to the problem statement.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        bool sorted = true;
        for (int i = 0, j = 1; i < n-1; i++, j++)
        {
            if(arr[i] > arr[j]) {
                sorted = false;
                break;
            }
        }
        
        cout << ((sorted)? "YES" : "NO") << endl;
    }
    
    return 0;
}
