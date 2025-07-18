#include <bits/stdc++.h>
using namespace std;

// You are given a doubly linked list of unique string values. These strings refer to web addresses without any spaces. You will be given Q queries. In each query you will be given some commands. Type of commands are -

// visit address - You need to go to that address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
// next - You need to go to the next address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
// prev - You need to go to the previous address from where you are in that list and print that address if it is in the list. Otherwise print "Not Available".
// One more thing, if the address isn't available make sure you don't move from your current position. You are at the head initially.

// Note: You can use Singly/Doubly Linked List or STL List to solve this problem.

// Input Format
// First line will contain the values of the doubly linked list, and will terminate with the string "end".
// Second line will contain Q.
// Next Q lines will contain the commands. It is guranteed that you will get "visit address" command at first which will contain a valid address. It will not contain valid address everytime!

// Constraints
// 1 <= N <= 1000; Here N is the maximum number of nodes of the linked list.
// 1 <= Q <= 1000;
// 1 <= |Address| <= 100; Here |Address| is the length of the string address.

// Output Format
// For each query output as asked.

// class Node {

//     public:
//         int val;
//         Node* nextNode;
//         Node* prevNode;

//     Node(int val) {
//         this->val = val;
//         this->nextNode = NULL;
//         this->prevNode = NULL;
//     }

// };

// void checkPalindrom(Node* head, Node* tail) {
//     Node* i = head;
//     Node* j = tail;
//     bool isPalindrom = true;
    
//     for (i, j; i != j && j->nextNode != i; i=i->nextNode, j=j->prevNode)
//     {
//         if(i->val != j->val) {
//             isPalindrom = false;
//         }
//     }

//     if(isPalindrom) {
//         cout << "YES";
//     }else {
//         cout << "NO";
//     }
// }

int main ()
{

    // Node* head = NULL;
    // Node* tail = NULL;

    // int val;
    // while(cin >> val) {
    //     if(val==-1) {
    //         break;
    //     }

    //     Node* newNode = new Node(val);
    //     if(head==NULL) {
    //         head = newNode;
    //         tail = newNode;
    //     }else {
    //         tail->nextNode = newNode;
    //         newNode->prevNode = tail;
    //         tail = newNode;
    //     }
    // }

    // checkPalindrom(head, tail);

    list<string> sentence;

    string val;
    while (cin>>val) {
        if(val == "end") {
            break;
        }
        sentence.push_back(val);
    }

    int q;
    cin >> q;

    list<string>::iterator i;
    while (q--) {
        string key1, key2;
        cin >> key1;

        if(key1 == "visit") {
            cin >> key2;

            auto target = find(sentence.begin(), sentence.end(), key2);

            if(target == sentence.end()) {
                cout << "Not Available" << endl;
                continue;
            }

            i=target;
            cout << *i << endl;
        }

        if(key1 == "prev") {
            if(i == sentence.begin()) {
                cout << "Not Available" << endl;
                continue;
            }

            i--;
            cout << *i << endl;
        }

        if(key1 == "next") {
            auto nextI = next(i);
            if(nextI == sentence.end()) {
                cout << "Not Available" << endl;
                continue;
            }

            i++;
            cout << *i << endl;
        }
    }
    
    return 0;
}
