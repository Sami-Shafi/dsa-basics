// You will be given  queries. In each query you will get a command. The command is of two types -

// You will be given  and  of a person who stood in a line of a ticket counter.
// You will be given only  which means the person in front of the line got the ticket and will be removed from the line. You need to print the name of that person who got that ticket. If there are no one in the line, print .
// Note: There can be multiple person in the line with same name. You need to solve it using STL Stack or Queue only.

#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int q;
    cin >> q;
    queue<string> users;

    while (q--)
    {
        int opType;
        string name;
        cin >> opType;

        if(opType == 0) {
            cin >> name;
            users.push(name);
        }else if(!users.empty()) {
            string lastOut = users.front();
            users.pop();
            cout << lastOut << endl;
        }else {
            cout << "Invalid" << endl;
        }
    }
    
    
    return 0;
}