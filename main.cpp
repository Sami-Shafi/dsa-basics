#include <bits/stdc++.h>
using namespace std;

int main ()
{
    queue<int> q;
    int n, val;
    cin >> n;

    while (n--)
    {
        cin >> val;
        q.push(val);
    }
    
    while (!q.empty())
    {
        cout << q.front() << endl;
        q.pop();
    }
    
    
    return 0;
}
