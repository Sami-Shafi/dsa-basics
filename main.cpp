#include<bits/stdc++.h>
using namespace std;

// You will be given a list A of size N. You need to sort those values in ascending order and also you need to remove any duplicate values from the list and print the final outcome.

// Input Format
// First line will contain T, the number of test cases.
// The first line of every test case will contain N.
// The second line of every test case will contain the list A of size N.

int main ()
{
    int T;
    cin >> T;

    while (T--)
    {
        int n;
        cin >> n;

        set<int> s;
        for (int i = 0; i < n; i++)
        {
            int val;
            cin >> val;
            s.insert(val);
        }

        for (auto x : s)
            cout << x << " ";

        cout << endl;        
        
    }
    
        
    return 0;
}