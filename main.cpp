#include<bits/stdc++.h>
using namespace std;

// You will be given a list A of size N. Then you will be given Q queries, for each query there will be some commands. Commands are given below -

// 0 X -> Insert X into the list. Then print the current minimum value from the list.
// 1 -> Print the current minimum value from the list.
// 2 -> Delete the current minimum value from the list and print the minimum value from the list after deletion.
// Note: If the list is empty and you can't print anything then you should print "Empty".

// Input Format
// First line will contain N.
// Second line will contain the list A of size N.
// Third line will contain Q.
// Next Q lines will contain the commands.

int main ()
{
    int size;
    cin >> size;
    priority_queue<int, vector<int>, greater<int>> pq;

    for (int i = 0; i < size; i++)
    {
        int val;
        cin >> val;
        pq.push(val);
    }

    int T;
    cin >> T;

    while (T--)
    {
        int cmd;
        cin >> cmd;

        if(cmd != 0 && cmd != 1 && cmd != 2) continue;

        if(cmd == 0){
            int x;
            cin >> x;
            pq.push(x);
        }

        if(cmd == 2){
            if(!pq.empty()) 
                pq.pop();
            else {
                cout << "Empty" << endl;
                continue;
            }
        }

        if(!pq.empty())
            cout << pq.top() << endl;
        else
            cout << "Empty" << endl;
    }
        
    return 0;
}