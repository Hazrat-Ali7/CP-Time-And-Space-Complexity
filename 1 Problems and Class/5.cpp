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

    vector<int> C;
    copy(A.begin(),A.end(),back_inserter(C));
    copy(B.begin(),B.end(),back_inserter(C));

    sort(C.begin(),C.end());

    for(int i=1;i<C.size();i++)
    {
        if(C[i]==C[i-1])
        {
            C.erase(C.begin()+i);
            i--;
        }
    }

    for(int i=0;i<C.size();i++)
        cout<<C[i]<< " ";

    return 0;
}
