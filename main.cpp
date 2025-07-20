#include <bits/stdc++.h>
using namespace std;

// You have a doubly linked list which is empty initially. Then you will be given Q queries. In each query you will be given two values X and V.

// If X is 0 that means you will insert the value V to the head of the linked list.
// If X is 1 then you will insert the value V to the tail of the linked list.
// If X is 2 then you will delete the value Vth index of the linked list. Assume that index starts from 0. If the index is invalid, then you shouldn't perform the deletion.
// After each query you need to print the linked list from both left to right and right to left.

// Note: You must use STL List, otherwise you will not get marks.

// Input Format
// First line will contain Q.
// Next Q lines will contain X and V.

// Constraints
// 1 <= Q <= 1000;
// 0 <= X <= 2;
// 0 <= V <= 10^9

// Output Format
// For each query print the linked list from left to right and right to left.
// Print "L -> " before printing the linked list from left to right.
// Print "R -> " before printing the linked list from right to left.

void printList(list<long long> myList) {
    auto it = myList.begin();
    for (it = myList.begin(); it != myList.end(); ++it) {
        cout << *it << " ";
    }
}

void zigzagPrint(list<long long> myList) {
    
    cout << "L -> ";
    printList(myList);
    cout << endl;

    cout << "R -> ";
    list<long long> rList(myList);
    rList.reverse();
    printList(rList);
    cout << endl;

}

int main ()
{

    list<long long> list;

    int q;
    cin >> q;

    int cmnd;
    long long int val;
    while (q--) {
        cin >> cmnd >> val;

        if(cmnd == 0) {
            list.push_front(val);

        } else if(cmnd == 1) {
            list.push_back(val);

        } else if (cmnd == 2) {
            if (val >= list.size()) {
                zigzagPrint(list);
                continue;
            }

            list.erase(next(list.begin(), val));
        }

        zigzagPrint(list);
    }

    return 0;
}
