//All Questions ans in one file..

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* nxt;
};

class linked_list
{
private:
    int sz;
    Node* head;

    bool comp(Node* a, Node* b)
    {
        return a->data < b->data;
    }
public:
    linked_list()
    {
        sz=0;
        head=NULL;
    }

    void Push_front(int val)
    {
        sz++;

        Node* tmp = new Node;
        tmp->data = val;
        tmp->nxt = head;
        head = tmp;
    }

    void Print_list()
    {
        Node* tmp = head;
        while(tmp!=NULL)
        {
            cout << tmp->data << " ";
            tmp = tmp->nxt;
        }
        cout << '\n';
    }

    void Pop_front()
    {
        if(sz==0)
            return;
        sz--;

        Node* tmp = head;
        head = head->nxt;
        delete tmp;
    }

    void Pop_back()
    {
        if(sz<1)
            Pop_front();
        sz--;

        Node* tmp=head;
        Node* del;
        while(tmp->nxt->nxt !=NULL)
        {
            tmp=tmp->nxt;
        }
        del=tmp->nxt;
        tmp->nxt = NULL;

        delete del;
    }

    int find_index_value(int idx)
    {
        if(idx<0 || idx>=sz)
        {
            cout << " -Invalid Index- ";
            return 0;
        }
        Node* tmp = head;
        int i=0;
        while(i!=idx)
        {
            tmp=tmp->nxt;
            i++;
        }
        return tmp->data;
    }

    void Push_back(int val)
    {
        if(sz==0)
        {
            Push_front(val);
            return;
        }
        Node* tmp = head;
        while(tmp-> nxt !=NULL)
        {
            tmp = tmp-> nxt;
        }
        sz++;

        Node* add = new Node;
        add->data = val;
        add->nxt = NULL;
        tmp->nxt = add;
    }

    bool search_value(int x)
    {
        Node* tmp = head;
        while(tmp!=NULL)
        {
            if(tmp->data == x)
                return true;
            tmp = tmp->nxt;
        }
        return false;
    }

    void Sort()
    {
        bool f=true;
        for(int i=0;i<sz-1;i++)
        {
            f=true;
            Node* i_tmp = head;
            Node* j_tmp = head->nxt;
            for(int j=1;j<sz-i;j++)
            {
                if(i_tmp->data > j_tmp->data)
                {
                    swap(i_tmp->data,j_tmp->data);
                    f=false;
                }
                i_tmp = j_tmp;
                j_tmp = j_tmp->nxt;
            }
            if(f)
                break;
            i_tmp = i_tmp->nxt;
        }
    }
};

int main()
{
    cout << "Question 1 ans:\n\n";
    linked_list que1;
    que1.Push_front(5);
    que1.Push_front(4);
    que1.Push_front(3);
    que1.Push_front(2);
    que1.Push_front(1);

    cout << "Before pushing front: \t";
    que1.Print_list();
    que1.Push_front(0);

    cout << "After Pushing front: \t";
    que1.Print_list();

    cout << "\n\n";

    cout << "Question 2 ans:\n\n";
    linked_list que2;
    que2.Push_front(5);
    que2.Push_front(4);
    que2.Push_front(3);
    que2.Push_front(2);
    que2.Push_front(1);
    cout << "Before Pop_front: \t";
    que2.Print_list();

    que2.Pop_front();
    cout << "After Pop_front: \t";
    que2.Print_list();
    cout << "\n\n";

    cout << "Question 3 ans:\n\n";
    linked_list que3;
    que3.Push_front(5);
    que3.Push_front(4);
    que3.Push_front(3);
    que3.Push_front(2);
    que3.Push_front(1);
    cout << "Before Pop_back: \t";
    que3.Print_list();

    que3.Pop_back();
    cout << "After Pop_back: \t";
    que3.Print_list();

    cout << "\n\n";

    cout << "Question 4 ans:\n\n";

    linked_list que4;
    que4.Push_front(5);
    que4.Push_front(4);
    que4.Push_front(3);
    que4.Push_front(2);
    que4.Push_front(1);
    cout << "Current list: \t";
    que4.Print_list();
    cout << "2nd index value: \t" << que4.find_index_value(2) << '\n';

    cout << "\n\n";

    cout << "Question 5 ans:\n\n";

    linked_list que5;
    que5.Push_front(5);
    que5.Push_front(4);
    que5.Push_front(3);
    que5.Push_front(2);
    que5.Push_front(1);

    cout << "Before pushing back: \t";
    que5.Print_list();
    que5.Push_back(0);

    cout << "After Pushing back: \t";
    que5.Print_list();

    cout << "\n\n";

    cout << "Question 6 ans:\n\n";

    linked_list que6;
    que6.Push_back(1);
    que6.Push_back(2);
    que6.Push_back(3);
    que6.Push_back(4);
    que6.Push_back(5);

    cout << "Current list: \t";
    que6.Print_list();
    cout << "3 is found: \t";
    que6.search_value(3)==true?cout<< "True\n":cout << "False\n";

    cout << "\n\n";

    cout << "Question 7 ans:\n\n";

    linked_list que7;
    que7.Push_back(4);
    que7.Push_back(2);
    que7.Push_back(5);
    que7.Push_back(1);
    que7.Push_back(3);

    cout << "Current list: \t";
    que7.Print_list();
    cout << "After sorting: \t";

    que7.Sort();
    que7.Print_list();

    cout << "\n\n";

    return 0;
}
