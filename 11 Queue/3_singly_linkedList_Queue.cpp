#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node
{
public:
    T data;
    Node* nxt;
};

template<class T>
class Queue
{
private:
    Node<T>* head;
    Node<T>* tail;
    int sz;
public:
    Queue()
    {
        head = NULL;
        tail = NULL;
        sz=0;
    }

    void enqueue(T val)
    {
        sz++;

        Node<T>* tmp = new Node<T>;
        tmp->data = val;
        if(head == NULL)
        {
            tmp->nxt = NULL;
            head = tail = tmp;
            return;
        }
        head->nxt = tmp;
        head = tmp;
    }

    void dequeue()
    {
        if(sz==0)
            return;
        sz--;
        Node<T>* del = tail;
        tail = tail->nxt;

        delete del;
    }

    T Front()
    {
        return tail->data;
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
    Queue<string> q;
    q.enqueue("asd");
    q.enqueue("zxc");
    q.enqueue("qwe");
    q.dequeue();
    q.dequeue();
    q.enqueue("poi");
    q.enqueue("jkk");

    cout << q.get_size() << endl;

    while(!q.Empty())
    {
        cout << q.Front() << " ";
        q.dequeue();
    }

    cout << endl << q.get_size() << endl;
    return 0;
}
