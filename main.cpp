#include<bits/stdc++.h>
using namespace std;

// You will be given a list A of type pairs. Each pair will contain one string S and one unique integer I. The string will contain only English lowercase alphabets and no spaces.

// You need to sort the pairs according to the string values in ascending order. If there are multiple pairs with the same string, you need to sort them according to the integer value in descending order.

// Input Format
// First line will contain N, the size of the list A.
// Next N lines will contain pairs of string S and integer I.

bool custom(pair<string, int> l, pair<string, int> r) {
    if(l.first == r.first)
        return l.second > r.second;
    return l.first < r.first;
}

int main ()
{
    int n;
    cin >> n;
    vector<pair<string, int>> v; 
    
    for (int i = 0; i < n; i++)
    {
        string name;
        int count;
        cin >> name >> count;

        v.push_back({name, count});
    }

    sort(v.begin(), v.end(), custom);
    
    for (auto p : v)
    {
        cout << p.first << " " << p.second << endl;
    }
    
    cout << endl;
        
    return 0;
}