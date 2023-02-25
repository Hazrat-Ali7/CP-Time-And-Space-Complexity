#include<bits/stdc++.h>
using namespace std;

template<class T>
class Node
{
public:
    T data;
    Node* nxt;
    Node* prv;
};

template<class T>
class Deque
{
private:
    Node<T>* head;
    Node<T>* tail;
    int sz;
    bool rev;

    void Insert_at_head(T val)
    {
        if(sz==0)
            Push_front(val);

        Node<T>* tmp = new Node<T>;
        tmp->data = val;
        tmp->prv = NULL;
        tmp->nxt = head;

        head->prv = tmp;
        head = tmp;
        sz++;
    }

    void Insert_at_tail(T val)
    {
        Node<T>* tmp = new Node<T>;
        tmp->data = val;
        tmp->nxt = NULL;
        if(sz==0)
        {
            tmp-> prv = NULL;

            head = tail = tmp;
            sz++;
            return;
        }
        tmp->prv = tail;
        tail->nxt = tmp;
        tail = tmp;
        sz++;
    }

    void Pop_head()
    {
        if(sz==1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node<T>* del = head;
        head = head->nxt;
        head->prv = NULL;

        delete del;
        sz--;
    }

    void Pop_tail()
    {
        if(sz==1)
        {
            delete head;
            head = NULL;
            tail = NULL;
            sz--;
            return;
        }
        Node<T>* del = tail;
        tail = tail->prv;
        tail->nxt = NULL;
        delete del;
        sz--;
    }

public:
    Deque()
    {
        head = NULL;
        tail = NULL;
        sz=0;
        rev = false;
    }

    void Push_back(T val)
    {
        if(rev)
            Insert_at_head(val);
        else
            Insert_at_tail(val);
    }

    void Push_front(T val)
    {
        if(rev)
            Insert_at_tail(val);
        else
            Insert_at_head(val);
    }

    void Pop_front()
    {
        if(sz<1)
            return;

        if(rev)
            Pop_tail();
        else
            Pop_head();
    }

    void Pop_back()
    {
        if(sz<1)
            return;
        if(rev)
            Pop_head();
        else
            Pop_tail();
    }

    T Front()
    {
        if(sz<1)
        {
            cout << "No elemnent in Deque.\n";
            T x;
            return x;
        }
        if(rev)
            return tail->data;
        else
            return head->data;
    }

    T Back()
    {
        if(sz<1)
        {
            cout << "No elemnent in Deque.\n";
            T x;
            return x;
        }
        if(rev)
            return head->data;
        else
            return tail->data;
    }

    int Size()
    {
        return sz;
    }

    bool Empty()
    {
        return sz==0;
    }

    void Reverse()
    {
        rev = !rev;
    }

    T Max()
    {
        T Maxx = head->data;
        Node<T>* tmp = head;
        while(tmp!=NULL)
        {
            if(Maxx < tmp->data)
                Maxx=tmp->data;
            tmp = tmp->nxt;
        }
        return Maxx;
    }

    T Min()
    {
        T Minn = head->data;
        Node<T>* tmp = head;
        while(tmp!=NULL)
        {
            if(Minn > tmp->data)
                Minn=tmp->data;
            tmp = tmp->nxt;
        }
        return Minn;
    }
};

int main()
{
    Deque<char> dq;

    dq.Push_back('d');
    dq.Push_back('e');
    dq.Push_back('f');
    dq.Push_front('c');
    dq.Push_front('b');
    dq.Push_front('a');
    cout << dq.Size() << '\n';

    dq.Reverse();

    cout << dq.Max() << "    " << dq.Min() << "\n";

    while(!dq.Empty())
    {
        cout << "Front = "<< dq.Front() << "    Back = " << dq.Back() << '\n';
        dq.Pop_back();
        dq.Pop_front();
    }
    return 0;
}


