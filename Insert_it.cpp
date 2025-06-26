#include <bits/stdc++.h>

using namespace std;

// Problem Statement
// You will given an integer array A of size N and another array B of size M. Also you will be given an index X. You need to insert the whole array B to the index X of array A.

// Input Format
// First line will contain N.
// Second line will contain array A.
// Third line will contain M.
// Fourth line will contain array B.
// The last line will contain X.

// Constraints
// 1 <= N, M <= 10^3
// 1 <= A[i], B[j] <= 10^3; Where 0 <= i < N and 0 <= j < M
// 0 <= X <= N

// Output Format
// Output the final array A.

int main()
{
    int size1, size2, index;

    cin >> size1;
    vector<int> array1(size1);
    for (int i = 0; i < size1; i++)
    {
        cin >> array1[i];
    }
    
    cin >> size2;
    vector<int> array2(size2);
    for (int i = 0; i < size2; i++)
    {
        cin >> array2[i];
    }

    cin >> index;

    array1.insert(array1.begin() + index, array2.begin(), array2.end());
    for (int num : array1)
    {
        cout << num << " ";
    }
    

    return 0;
}