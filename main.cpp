#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n; // O(1)
    cin >> n; // O(1)

    // Problem: Find all divisors of 36
    // Ans: 1, 2, 3, 4, 6, 9, 12, 18, 36
    // Hint: here we don't need to loop till 36.. we can still solve the problem by looping till sqrt(36) -> 6

    for (int i = 1; i <= sqrt(n); i++) // O(sqrt(n))
    {
        if (n%i!=0) continue;
        cout << i << " " << (n/i) << " ";
    }

    return 0; // O(1)

    // Sqrt: sometimes we can achieve lower time consumption by looping through square roots of numbers;
    // Ans: O(sqrt(n))
}