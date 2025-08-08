#include<bits/stdc++.h>
using namespace std;

int main ()
{
    map<string, int> mp;
    mp["Sami"] = 3;
    mp["Rafy"] = 0;
    mp["Shadman"] = 100;

    for (auto it = mp.begin(); it!=mp.end(); it++)
    {
        cout << it->first << " has anger count of: " << it->second << endl;
    }

    if(mp.count("Patrick"))
        cout << "Patrick is always Angry!" << endl;
    else
        cout << "Patrick Kobiraj is innocent!" << endl;

    return 0;
}