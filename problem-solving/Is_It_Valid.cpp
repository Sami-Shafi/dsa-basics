// Given a string  containing just the characters  and , determine if the input string is valid.

// An input string is valid if the string is empty after doing some operatios. The available operations are:

//  can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
//  can delete its previous available character  along with itself. If there is no  available to delete, it will not delete itself.
// Note: You need to solve it using STL Stack or Queue only.

#include<bits/stdc++.h>
using namespace std;

bool checkPairs(char topChar, char inputChar) {
    if(topChar == '0' && inputChar == '1'){
        return true;
    }
    else if(topChar == '1' && inputChar == '0') {
        return true;
    }

    return false;
}

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
            if (!st.empty() && checkPairs(st.top(), c)) {
                st.pop(); 
            } else {
                st.push(c); 
            }
        }

        cout << (st.empty() ? "YES" : "NO") << endl;
        
    }
    

    return 0;
}