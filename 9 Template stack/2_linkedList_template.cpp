#include<bits/stdc++.h>

using namespace std;

template<class T>
class node
{
public:
    T data;
    node * nxt;
};

template<class T>
class Stack
{
public:
    node<T> * head;
    int sz;
    Stack()
    {
        head = NULL;
        sz=0;
    }

    //Creates a new node with data = value and nxt= NULL
    node<T>* CreateNewNode(T value)
    {
        node<T> *newnode = new node<T>;
        newnode->data = value;
        newnode->nxt = NULL;
        return newnode;
    }

    // Insert new value at Head
    void push(T value)
    {
        sz++;
        node<T> *a = CreateNewNode(value);
        if(head == NULL)
        {
            head = a;
            return;
        }
        //If head is not NULL
        a->nxt = head;
        head = a;
    }

    //Returns number of elements in the linked list
    int getSize()
    {
        //O(1)
        return sz;
    }

    //Delete the first element of a linked list
    void pop()
    {
        if(head == NULL)
        {
            return;
        }
        sz--;
        node<T> *a = head;
        head = a->nxt;
        delete a;
    }

    T top()
    {
        return head->data;
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
