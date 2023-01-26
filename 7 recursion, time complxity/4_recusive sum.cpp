#include<bits/stdc++.h>
using namespace std;

int sum_ara(vector<int> A)
{
    if(A.size()==0)
        return 0;
    int x= A.back();
    A.pop_back();
    return x + sum_ara(A);
}
int main()
{
    int n;
    cin >> n;

    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>> A[i];

    cout << sum_ara(A);
    return 0;
}

