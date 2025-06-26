#include<bits/stdc++.h>
using namespace std;

// You will be given an integer array A of size N. You need to print the prefix sum array of the array A in reverse order.

// Input Format
// First line will contain N.
// Next line of contain the array A.

// Constraints
// 1 <= N <= 10^5
// 1 <= A[i] <= 10^9; Where 0 <= i < N

// Output Format
// Output the prefix sum array in reverse order.

// 5
// 2 4 1 5 3
// 2 6 7 12 15

int main ()
{
    long long int n;
    cin >> n;
    long long int arr[n];
    long long int psum[n];

    cin >> arr[0];
    psum[0] = arr[0];

    for (int i = 1; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 1; i < n; i++)
    {
        psum[i] = psum[i-1] + arr[i];
    }
    sort(psum, psum+n, greater<long long int>());

    for (long long int num : psum)
    {
        cout << num << " ";
    }
    
    return 0;
}