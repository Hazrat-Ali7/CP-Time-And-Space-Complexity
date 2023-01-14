#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>> A[i];

    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
            if(A[j]<A[j+1])
                swap(A[j],A[j+1]);
    }

    for(int val: A)
        cout << val << " ";
    return 0;
}
