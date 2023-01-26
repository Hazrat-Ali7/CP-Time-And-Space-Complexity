#include<bits/stdc++.h>
using namespace std;

vector<int> A(100,-1);

int Fibonacci(int n)
{
    if(A[n]!=-1)
        return A[n];
    if(n==0)
    {
        A[n]=0;
        return 0;
    }
    if(n==1)
    {
        A[n]=1;
        return 1;
    }
    int x = Fibonacci(n-1)+Fibonacci(n-2);
    A[n]=x;
    return x;
}
int main()
{
    int n;
    cin >> n;

    Fibonacci(n);

    cout << A[n];

    return 0;
}

