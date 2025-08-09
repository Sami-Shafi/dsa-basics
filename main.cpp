#include<bits/stdc++.h>
using namespace std;

// You will be given a sentence S that contains words with lowercase and uppercase English alphabets separated by spaces. You need to determine which word occurs the most times and also provide the count of that word.

// Note: If there are multiple words that occur the most, print the first word that reaches the maximum count before others.

// Input Format
// First line will contain T, the number of test cases.
// Each test case will contain the sentence S.

int main ()
{
    int T;
    cin >> T;
    cin.ignore();

    while (T--)
    {
        string sentence;
        getline(cin, sentence);

        stringstream ss(sentence);
        map<string, int> mp;
        string word;
        int maxCt = 0;
        string maxWord;
        while (ss >> word)
        {
            mp[word]++;
            if(mp[word] > maxCt) {
                maxCt++;
                maxWord = word;
            }
        }

        cout << maxWord << " " << maxCt << endl;
    }
        
    return 0;
}