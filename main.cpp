#include <bits/stdc++.h>
using namespace std;

int main ()
{
    stack<int> st;

    // take input
    int n, val;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> val;
        st.push(val);
    }
    
    // output stack
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }
    
    return 0;
}
