#include<bits/stdc++.h>
using namespace std;

int main ()
{
    set<int> s;

    int n;
    cin >> n;
    while (n--)
    {
        int val;
        cin >> val;
        s.insert(val);
    }

    for (auto it = s.begin(); it!=s.end(); it++)
    {
        cout << *it << endl;
    }
    
    int target = 10;
    if(s.count(target))
        cout << target << " is present" << endl;
    else
        cout << target << " is not present" << endl;
        
    return 0;
}