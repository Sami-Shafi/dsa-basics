// You will be given a binary string  (A binary string is a string which contains only 0 and 1) in which every  will eliminate its previously adjacent  and itself. After an elimination, if another elimination is possible, it will continue until no further eliminations can be made.

// For example, if the sequence is , then the  and  elements, as well as the  and  elements, will be eliminated, resulting in the string 10110. After that, the 2nd and 3rd elements will be eliminated, resulting in the string 110. After that, no further eliminations can occur.

// You need to determine whether the string will be empty after all eliminations.

// Note: You need to solve it using STL Stack or Queue only.
#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;
    while (q--)
    {
        string s;
        cin >> s;
        stack<char> st;
        for (char c : s) {
            bool pushable = true;
            if(!st.empty()) {
                char top = st.top();
                if(top == '0' && c == '1'){
                    st.pop();
                    pushable = false;
                }
            }

            if(pushable) {
                st.push(c);
            }
        }

        cout << (st.empty() ? "YES" : "NO") << endl;
        
    }
    

    return 0;
}