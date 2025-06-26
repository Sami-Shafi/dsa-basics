#include<bits/stdc++.h>
using namespace std;

int main ()
{
    int length, cases;
    cin >> length >> cases;
    vector<long long int> nums(length);
    vector<long long int> pfsum(length);

    for (int i = 0; i < length; i++)
    {
        cin >> nums[i];
    }

    pfsum[0] = nums[0];
    for (int i = 1; i <= length; i++)
    {
        pfsum[i] = pfsum[i-1] + nums[i];
    }
    

    while (cases)
    {
        int fn, ln, sum = 0;
        cin >> fn >> ln;        
        
        cout << pfsum[ln-1] - (fn == 1 ? 0 : pfsum[fn-2]) << endl;

        cases--;
    }
    
    return 0;
}