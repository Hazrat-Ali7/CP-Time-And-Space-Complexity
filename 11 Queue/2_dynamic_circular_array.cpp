#include <bits/stdc++.h>
using namespace std;

template<class T>
class Queue
{
public:
    T *A;
    int capacity;
    int Start;
    int End;
    int sz;
    Queue()
    {
        capacity = 1;
        A = new T[capacity];
        Start=0;
        End=-1;
        sz=0;
    }

    void enqueue(T val)
    {
        if(sz==capacity)
        {
            increase_cap();
        }
        End++;
        A[End%capacity]=val;
        sz++;
    }

    void increase_cap()
    {
        T* tmp = new T[2*capacity];
        for(int i=Start, idx=0; i<=End; i++,idx++)
            tmp[idx]=A[i%capacity];
        swap(tmp,A);
        Start = 0;
        End = capacity-1;
        capacity*=2;

        delete [] tmp;
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
    q.enqueue("a");
    q.enqueue("b");
    q.enqueue("c");
    q.enqueue("d");
    q.enqueue("e");
    q.enqueue("e");
    q.enqueue("f");
    q.enqueue("g");
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.enqueue("h");
    q.enqueue("i");
    q.enqueue("j");
    q.enqueue("k");
    q.enqueue("l");
    q.enqueue("m");
    q.enqueue("n");

    q.enqueue("o");
    q.enqueue("p");
    q.enqueue("q");
    q.enqueue("r");
    q.enqueue("s");
    q.enqueue("t");
    q.enqueue("u");
    q.enqueue("v");

    while(q.Size())
    {
        cout << q.Front() << "   Size = " << q.Size()<<endl;
        q.dequeue();
    }
    return 0;
}


