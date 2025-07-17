#include <bits/stdc++.h>
using namespace std;

// You will be given a linked list of integer values as input. You need to remove duplicate values from the linked list and finally print the linked list in ascending order.

// Note: You need to solve this using STL List, otherwise you will not get marks.

// Input Format
// First line will contain the values of the linked list, and will terminate with -1.

// Constraints
// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 0 <= V <= 1000; Here V is the value of each node.

// Output Format
// Output the final linked list where there will be no duplicate values.

int main ()
{
    list<int> list;

    int val;
    while (cin >> val)
    {
        if (val != -1) {
            list.push_back(val);
        }
    }

    list.sort();
    list.unique();

    for (int node : list) {
        cout << node << " ";
    }
    cout << endl;
    
    return 0;
}
