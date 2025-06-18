#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n; // O(1)
    cin >> n; // O(1)

    for (int i = 1; i <= n; i*=2) // O(log2>n) -> O(log(n))
    {
        cout << i << " ";
    }

    cout << endl; // O(1)

    for (int i = n; i >= 1; i/=3) // O(log3>n) -> O(log(n))
    {
        cout << i << " ";
    }

    return 0; // O(1)

    // Logarithmic Complexity: when the increment/decrement has multiplication or division
}