//All Questions ans in one file..

#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node* prv;
    Node* nxt;
};

class Doubly_Linked_List
{
private:
    int sz;
    Node* head;
public:
    Doubly_Linked_List()
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
        tmp->prv = NULL;
        if(head==NULL)
        {
            head = tmp;
            return;
        }
        head->prv=tmp;
        head = tmp;
    }

    void Pop_back()
    {
        sz--;

        Node* del=head;

        while(del->nxt != NULL)
        {
            del=del->nxt;
        }
        if(del==head)
        {
            head = NULL;
            return;
        }
        del->prv->nxt=NULL;

        delete del;
    }

    void Pop_front()
    {
        sz--;

        Node* del = head;
        head=head->nxt;
        head->prv=NULL;

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

    void Reverse()
    {
        if(sz<=1)
            return;

        Node* tmp = head;
        while(tmp!=NULL)
        {
            if(tmp->nxt==NULL)
                head = tmp;

            swap(tmp->nxt,tmp->prv);
            tmp = tmp->prv;
        }
    }

    void Push_back(int val)
    {
        if(sz==0)
        {
            Push_front(val);
            return;
        }
        sz++;

        Node* tmp = new Node;
        Node* last = head;
        while(last->nxt!=NULL)
        {
            last = last->nxt;
        }
        last->nxt = tmp;
        tmp->data = val;
        tmp->prv = last;
        tmp->nxt = NULL;
    }

    void Insert_at_index(int idx, int val)
    {
        if(idx<0 || idx>=sz)
        {
            cout << idx << " index is not valid..\n";
            return;
        }
        if(idx==0)
        {
            Push_front(val);
            return;
        }
        if(idx==sz)
        {
            Push_back(val);
            return;
        }
        sz++;

        Node* tmp = new Node;
        Node* p = head;
        int current_index = 0;
        while(current_index != idx-1)
        {
            p = p->nxt;
            current_index++;
        }
        tmp->data = val;
        tmp->prv = p;
        tmp->nxt = p->nxt;
        p->nxt=tmp;
        tmp->nxt->prv=tmp;
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

    void Delete_value(int val)
    {

        int idx=0;
        Node* tmp=head;
        while(tmp != NULL)
        {
            if(tmp->data == val)
                break;
            idx++;
            tmp=tmp->nxt;
        }
        if(tmp==NULL)
        {
            cout << val << " Not Found!\n";
            return;
        }
        Delete_index(idx);
    }

    void Delete_index(int x)
    {
        if(x<0 || x>=sz)
        {
            cout << x << " index is not valid..\n";
            return;
        }
        if(x==0)
        {
            Pop_front();
            return;
        }
        if(x==sz-1)
        {
            Pop_back();
            return;
        }
        sz--;

        Node* tmp = head;
        int current_index=0;
        while(current_index!= x)
        {
            current_index++;
            tmp=tmp->nxt;
        }
        tmp->prv->nxt = tmp->nxt;
        tmp->nxt->prv = tmp->prv;

        delete tmp;
    }

    bool Palindrom_list()
    {
        Node* Strt = head;
        Node* End = head;

        while(End->nxt != NULL)
            End=End->nxt;
        int cnt = sz/2;
        while(cnt--)
        {
            if(End->data != Strt->data)
                return false;
            Strt=Strt->nxt;
            End=End->prv;
        }
        return true;
    }

    int get_size()
    {
        return sz;
    }
};


int main()
{
    cout << "Question 1 ans:\n\n";
    Doubly_Linked_List que1;
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
    Doubly_Linked_List que2;
    que2.Push_front(5);
    que2.Push_front(4);
    que2.Push_front(3);
    que2.Push_front(2);
    que2.Push_front(1);
    cout << "Before Pop_back: \t";
    que2.Print_list();

    que2.Pop_back();
    cout << "After Pop_back: \t";
    que2.Print_list();

    cout << "\n\n";

    cout << "Question 4 ans:\n\n";

    Doubly_Linked_List que3;
    que3.Push_front(5);
    que3.Push_front(4);
    que3.Push_front(3);
    que3.Push_front(2);
    que3.Push_front(1);
    cout << "Current list: \t";
    que3.Print_list();
    cout << "2nd index value: \t" << que3.find_index_value(2) << '\n';

    cout << "\n\n";

    cout << "Question 4 ans:\n\n";

    Doubly_Linked_List que4;
    que4.Push_front(1);
    que4.Push_front(2);
    que4.Push_front(3);
    que4.Push_front(4);
    que4.Push_front(5);

    cout << "Current list: \t";
    que4.Print_list();
    cout << "3 is found: \t";
    que4.search_value(3)==true?cout<< "True\n":cout << "False\n";

    cout << "\n\n";


    cout << "Question 5 ans:\n\n";

    Doubly_Linked_List que5;
    que5.Push_front(1);
    que5.Push_front(2);
    que5.Push_front(3);
    que5.Push_front(4);
    que5.Push_front(5);

    cout << "Before reverse: \t";
    que5.Print_list();
    cout << "After reverse:  \t";
    que5.Reverse();
    que5.Print_list();

    cout << "\n\n";

    cout << "Question 6 ans:\n\n";

    Doubly_Linked_List que6;
    que6.Push_front(1);
    que6.Push_front(2);
    que6.Push_front(3);
    que6.Push_front(4);
    que6.Push_front(5);

    cout << "Current list:   \t";
    que6.Print_list();
    cout << "Insert 0 idx 1: \t";
    que6.Insert_at_index(1,0);
    que6.Print_list();

    cout << "\n\n";

    cout << "Question 7 ans:\n\n";

    Doubly_Linked_List que7;
    que7.Push_front(5);
    que7.Push_front(4);
    que7.Push_front(6);
    que7.Push_front(2);
    que7.Push_front(1);

    cout << "Current list:   \t";
    que7.Print_list();
    cout << "After Delete 6: \t";
    que7.Delete_value(6);
    que7.Print_list();

    cout << "\n\n";

    cout << "Question 8 ans:\n\n";

    Doubly_Linked_List que8;
    que8.Push_front(1);
    que8.Push_front(2);
    que8.Push_front(3);
    que8.Push_front(2);
    que8.Push_front(1);

    cout << "Current list:   \t";
    que8.Print_list();
    cout << "Palindrom List: \t";
    que8.Palindrom_list()==true?cout<< "True\n":cout << "False\n";

    Doubly_Linked_List que8b;
    que8b.Push_front(1);
    que8b.Push_front(3);
    que8b.Push_front(3);
    que8b.Push_front(2);
    que8b.Push_front(1);

    cout << "Current list:   \t";
    que8b.Print_list();
    cout << "Palindrom List: \t";
    que8b.Palindrom_list()==true?cout<< "True\n":cout << "False\n";
    cout << "\n\n";

    return 0;
}
