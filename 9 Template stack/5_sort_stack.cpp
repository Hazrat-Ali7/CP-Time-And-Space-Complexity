#include<bits/stdc++.h>
using namespace std;

void sort_stack(stack<int> &A)
{
    stack<int> tmp;
    while(!A.empty())
    {
        int x = A.top();
        A.pop();
        while(!tmp.empty() && tmp.top()<x)
        {
            int y= tmp.top();
            tmp.pop();
            A.push(y);
        }
        tmp.push(x);
    }
    swap(tmp,A);
}

int main()
{
    stack<int> A;

    A.push(3);
    A.push(1);
    A.push(5);
    A.push(4);
    A.push(2);

    sort_stack(A);

    while(!A.empty())
    {
        cout << A.top() << ' ';
        A.pop();
    }
    return 0;
}

