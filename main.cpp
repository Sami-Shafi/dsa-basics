#include<bits/stdc++.h>
using namespace std;

void insert_heap(vector<int> &v, int val) {
    // cout << "Inserted " << val << endl;
    v.push_back(val);
    int curIdx = v.size()-1;
    
    while (curIdx > 0)
    {
        int parIdx = (curIdx-1)/2;
        // for a min heap just change this to v[parIdx] > v[curIdx]
        if(v[parIdx] < v[curIdx]) {
            swap(v[parIdx],v[curIdx]);
        }else
            break;
        curIdx = parIdx;
    }
}

void print_heap(vector<int> v) {
    cout << "Heap: ";
    for (int x : v)
    {
        cout << x << " ";
    }
    cout << endl;
}

void delete_heap(vector<int> &v) {
    cout << "Deleted " << v[0] << endl;
    v[0] = v.back();
    v.pop_back();
    int curIdx = 0;

    while (true)
    {
        int leftIdx = (2*curIdx)+1;
        int rightIdx = (2*curIdx)+2;
        // use INT_MAX for min heap
        int leftVal = INT_MIN, rightVal = INT_MIN;

        if(leftIdx < v.size())
            leftVal = v[leftIdx];
        if(rightIdx < v.size())
            rightVal = v[rightIdx];
        
        // use opposite comparing signs here for min heap
        if(v[curIdx] < leftVal || v[curIdx] < rightVal) {
            if(leftVal >= rightVal) {
                swap(v[leftIdx], v[curIdx]);
                curIdx = leftIdx;
            }

            if(leftVal < rightVal) {
                swap(v[rightIdx], v[curIdx]);
                curIdx = rightIdx;
            }
        }
        else 
            break;
    }
    
}

int main ()
{
    int n;
    cin >> n;
    vector<int> v;

    for(int i = 0; i < n; i++) {
        int val;
        cin >> val;
        insert_heap(v, val);
    }

    print_heap(v);
    delete_heap(v);
    print_heap(v);

    return 0;
}