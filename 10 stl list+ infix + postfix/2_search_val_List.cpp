#include<bits/stdc++.h>
using namespace std;


bool Search(list <int> &A, int val)
{
    for(auto it: A)
    {
        if(it==val)
            return true;
    }
    return false;
}

int main()
{
    list<int> A;
    A.push_back(3);
    A.push_back(2);
    A.push_back(6);
    A.push_back(4);
    A.push_back(5);

    cout << Search(A,4);


    return 0;
}

