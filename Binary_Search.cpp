#include<bits/stdc++.h>
using namespace std;

int main ()
{

    int n, tn;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    cin >> tn;
    int li = 0, ri = n-1;
    bool isMatch = false;

    while (li<=ri)
    {
        int mid = (li + ri)/2;
        if(arr[mid] == tn) {
            isMatch = true;
            break;
        }else if(arr[mid] < tn) {
            li=mid+1;
        }else if (arr[mid] > tn) {
            ri=mid-1;
        }
    }

    cout << ((isMatch) ? "Found" : "Not Found"); 

    return 0;
}