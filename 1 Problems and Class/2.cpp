#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,mul=1;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];

    for(int i=1;i<n;i+=2)
        mul*=A[i];

    cout<<mul;
    return 0;
}
