#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n;
    vector<int> A(n);

    for(int i=0;i<n;i++)
        cin>>A[i];

    cin>>m;
    vector<int> B(m);

    for(int i=0;i<m;i++)
        cin>>B[i];

    sort(A.begin(),A.end());
    sort(B.begin(),B.end());

    vector<int> c;
    for(int i=0,j=0;i<n && j<m;)
    {
        if(A[i]==B[j])
        {
            c.push_back(A[i]);
            i++;    j++;
        }
        else if(A[i]<B[j])
            i++;
        else
            j++;
    }

    for(int i=0;i<c.size();i++)
        cout<<c[i]<<" ";

    return 0;
}
