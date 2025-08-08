#include<bits/stdc++.h>
using namespace std;

int main ()
{
    // max priority queue
    priority_queue<int> p1;
    // min priority queue
    priority_queue<int, vector<int>, greater<int>> p2;

    p1.push(10);
    p1.push(20);
    p1.push(30);

    while (!p1.empty())
    {
        cout << p1.top() << endl;
        p1.pop();
    }
    

    return 0;
}