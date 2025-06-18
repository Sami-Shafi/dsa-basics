#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n, m; // O(1)
    cin >> n >> m; // O(1)

    for (int i = 0; i < n; i++) { // O(n)
        for (int j = 0; j < m; j++) // O(m)
        {
            cout << "Hello" << endl;
        }
        
    }

    return 0; // O(1)

    // Quadratic Complexity: Usually happens in nested loops.. two Orders will get multiplied with each other.
    // Ans: O(n*m)
}