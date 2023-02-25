#include<bits/stdc++.h>
using namespace std;

void reverse_stack(stack<int> &A)
{
    stack<int> tmp;
    while(!A.empty())
    {
        int x=A.top();
        tmp.push(x);
        A.pop();
    }
    swap(tmp,A);
}

int main()
{
    stack<int> A;

    A.push(1);
    A.push(2);
    A.push(3);
    A.push(4);
    A.push(5);

    reverse_stack(A);

    while(!A.empty())
    {
        cout << A.top() << ' ';
        A.pop();
    }
    return 0;
}

