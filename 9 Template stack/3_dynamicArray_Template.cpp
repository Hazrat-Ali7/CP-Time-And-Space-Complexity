#include<bits/stdc++.h>
using namespace std;

template<class T>
class Stack
{
public:
    T* A;
    int capacity;
    int sz;
    Stack()
    {
        capacity = 2;
        A = new T[capacity];
        sz=0;
    }

    void double_capacity()
    {
        capacity*=2;
        T* tmp = new T[capacity];
        copy(A,A+sz,tmp);
        delete []A;
        A = tmp;
    }
    void push(T val)
    {
        if(sz==capacity)
        {
            double_capacity();
        }
        A[sz]=val;
        sz++;
    }

    void pop()
    {
        if(sz==0)
            return;
        sz--;
        if(sz<capacity/2)
        {
            decrease_size();
        }
    }

    T top()
    {
        if(sz==0)
            return -1;
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

    void decrease_size()
    {
        capacity/=2;
        T* tmp = new T[capacity];
        for(int i=0; i<capacity; i++)
            tmp[i]=A[i];

        swap(tmp,A);
        delete []tmp;
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
    A.push('f');
    A.push('g');
    A.push('h');
    A.push('i');
    A.push('j');
    A.push('k');

    while(!A.Empty())
    {
        cout << A.top() << ' ';
        A.pop();
    }
    return 0;
}
