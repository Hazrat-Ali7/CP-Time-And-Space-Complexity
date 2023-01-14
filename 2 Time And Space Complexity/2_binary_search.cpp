#include<bits/stdc++.h>
using namespace std;

bool bin_search(vector<int> A, int x)
{
    int low=0,high=A.size()-1,mid;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(A[mid]==x)
            return true;
        else if(x<A[mid])
            high=mid-1;
        else
            low=mid+1;
    }
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>> A[i];

    sort(A.begin(),A.end());

    int q;
    cin>>q;

    while(q--)
    {
        int key;
        cin>>key;
        if(bin_search(A,key))
            cout<< "YES\n";
        else
            cout<< "NO\n";
    }
    return 0;
}
