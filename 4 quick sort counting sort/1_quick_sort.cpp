#include<bits/stdc++.h>
using namespace std;

vector<int> quick_sort(vector<int> A)
{
    if(A.size()<=1)
        return A;
    int pivot = rand()% A.size();
    vector<int> left,right;
    for(int i=0;i<A.size();i++)
    {
        if(pivot==i)
            continue;
        if(A[i]<=A[pivot])
            left.push_back(A[i]);
        else
            right.push_back(A[i]);
    }

    left = quick_sort(left);
    right = quick_sort(right);

    vector<int> sorted;
    for(int i=0;i<left.size();i++)
        sorted.push_back(left[i]);

    sorted.push_back(A[pivot]);

    for(int i=0;i<right.size();i++)
        sorted.push_back(right[i]);

    return sorted;
}

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];

    A = quick_sort(A);

    for(int val:A)
        cout << val << " ";

    return 0;
}
