#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for(int i = 0; i < n; i++) {
        cin >> v[i];
    }

    int val;
    cin >> val;
    v.push_back(val);
    int curIdx = v.size()-1;
    
    while (curIdx > 0)
    {
        int parIdx = (curIdx-1)/2;
        // for a min heap just change this to v[parIdx] > v[curIdx]
        if(v[parIdx] < v[curIdx]) {
            swap(v[parIdx],v[curIdx]);
            curIdx = parIdx;
        }else {
            break;
        }
    }

    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;

    return 0;
}