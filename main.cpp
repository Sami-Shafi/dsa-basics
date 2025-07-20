#include <bits/stdc++.h>
using namespace std;

class manualStack {
    public:
        vector<int> arr;

        void push(int val) {
            arr.push_back(val);
        }

        void pop() {
            arr.pop_back();
        }

        int top() {
            return arr.back();
        }

        int size() {
            return arr.size();
        }

        bool empty() {
            return arr.empty();
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
