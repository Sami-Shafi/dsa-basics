#include <bits/stdc++.h>
using namespace std;

class manualStack {
    public:
        list<int> list;

        void push(int val) {
            list.push_back(val);
        }

        void pop() {
            list.pop_back();
        }

        int top() {
            return list.back();
        }

        int size() {
            return list.size();
        }

        bool empty() {
            return list.empty();
        }
};

int main ()
{
    // no need to create 'new' / dynamic stack because we do not create stacks in any inner functions
    // unlike linkedLists
    manualStack st;

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
