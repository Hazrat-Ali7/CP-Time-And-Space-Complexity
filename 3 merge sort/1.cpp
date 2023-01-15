#include<bits/stdc++.h>
using namespace std;

int main()
{
    int m,n;
    cin>>m;
    vector<int> M(m);
    for(int i=0;i<m;i++)
        cin>>M[i];
    cin>>n;
    vector<int> N(n);
    for(int i=0;i<n;i++)
        cin>>N[i];

    vector<int> sorted;

    for(int i=0,j=0;i<m || j<n;)
    {
        if(i==m)
        {
            sorted.push_back(N[j]);
            j++;
        }
        else if (j==n)
        {
            sorted.push_back(M[i]);
            i++;
        }
        else if(M[i]>N[j])
        {
            sorted.push_back(M[i]);
            i++;
        }
        else
        {
            sorted.push_back(N[j]);
            j++;
        }
    }

    for(int val:sorted)
        cout << val << " ";
    return 0;
}
