// There is a list of  values that were inserted into a stack and a list of  values that were inserted into a queue. You need to determine whether the stack and queue are the same or not based on the order in which the elements are removed.

// Note: You need to solve it using  Stack and Queue only.

#include<bits/stdc++.h>
using namespace std;

void outputPrint(bool isSame) {
    if(isSame) {
        cout << "YES";
    }else {
        cout << "NO";
    }
}

void detOrder(stack<int> st, queue<int> q, bool &isSame) {

    while(!st.empty()) {
        int val1 = st.top();
        int val2 = q.front();
        if (val1 != val2) {
            isSame = false;
            return;
        }
        st.pop();
        q.pop();
    }
    isSame = true;
}

int main ()
{
    bool isSame = false;
    int n, m;
    cin >> n >> m;

    stack<int> st;
    queue<int> q;

    if(n!=m || n == 0) {
        outputPrint(isSame);
        return 0;
    }

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        st.push(val);
    }

    for (int i = 0; i < m; i++)
    {
        int val;
        cin >> val;
        q.push(val);
    }

    detOrder(st, q, isSame);
    outputPrint(isSame);
    
    return 0;
}