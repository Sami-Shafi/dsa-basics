#include<bits/stdc++.h>
using namespace std;

// Problem Statement
// You will be given an array A of size N. Print "YES" if there is any duplicate value in the array, "NO" otherwise.

// Input Format
// First line will contain N.
// Second line will contain the array A.

// Constraints
// 1 <= N <= 100000
// 0 <= A[i] <= 10^9; Where 0 <= i < N

// Output Format
// Output "YES" or "NO" without the quotation marks according to the problem statement.

int main ()
{
    int n;
    cin >> n;
    int arr[n];

    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    sort(arr, arr+n);

    bool isDup = false;
    for (int i = 0, j = 1; i < n-1; i++, j++)
    {
        if(arr[i]==arr[j]) {
            isDup = true;
            break;
        }
    }
    
    cout << ((isDup)? "YES" : "NO");

    return 0;
}