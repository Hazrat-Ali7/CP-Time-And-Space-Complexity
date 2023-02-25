#include<bits/stdc++.h>
using namespace std;

const int capacity=10;

template<class T>
class Stack
{
public:
    T A[capacity];
    int sz;
    Stack()
    {
        sz=0;
    }

    void push(T val)
    {
        if(sz==capacity)
        {
            cout << "Stack full!\n";
            return;
        }
        A[sz]=val;
        sz++;
    }

    void pop()
    {
        if(sz==0)
            return;
        sz--;
    }

    T top()
    {
        if(sz==0){
            T a;
            cout << "No element found!\n";
            return a;
        }
        return A[sz-1];
    }
    int get_size()
    {
        return sz;
    }
    bool Empty()
    {
        return sz==0;
    }
};

int main()
{
    Stack<char> A;

    A.push('a');
    A.push('b');
    A.push('c');
    A.push('d');
    A.push('e');

    while(!A.Empty())
    {
        cout << A.top() << ' ';
        A.pop();
    }
    return 0;
}
