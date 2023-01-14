#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>> A[i];

    for(int i=1;i<n;i++)
    {
        int value= A[i],j=i-1;
        while(value>A[j] && j>=0)
        {
            A[j+1]=A[j];
            j--;
        }
        A[j+1]=value;
    }

    for(int val: A)
        cout << val << " ";
    return 0;
}
