#include <bits/stdc++.h>
using namespace std;

const int capacity=3;

template<class T>
class Queue
{
public:
    T A[capacity];
    int Start;
    int End;
    int sz;
    Queue()
    {
        Start=0;
        End=-1;
        sz=0;
    }

    void enqueue(T val)
    {
        if(sz==capacity)
        {
            cout << "Queue is full!\n";
            return;
        }
        End++;
        A[End%capacity]=val;
        sz++;
    }

    void dequeue()
    {
        if(sz==0)
        {
            cout << "Queue is Empty!\n";
            return;
        }
        Start++;
        sz--;
    }

    T Front()
    {
        return A[Start%capacity];
    }

    int Size()
    {
        return sz;
    }
};

int main()
{
    Queue<string> q;
    q.enqueue("asd");
    q.enqueue("zxc");
    q.enqueue("qwe");
    q.dequeue();
    q.dequeue();
    q.enqueue("poi");
    q.enqueue("jkk");

    while(q.Size())
    {
        cout << q.Front() << "   Size = " << q.Size()<<endl;
        q.dequeue();
    }
    return 0;
}

