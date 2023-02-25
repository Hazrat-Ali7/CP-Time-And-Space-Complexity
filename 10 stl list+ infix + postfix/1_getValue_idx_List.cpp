#include<bits/stdc++.h>
using namespace std;


int getValue(list <int> &A, int idx)
{
    auto it = A.begin();
    advance(it,idx);
    return *it;
}

int main()
{
    list<int> A;
    A.push_back(3);
    A.push_back(2);
    A.push_back(6);
    A.push_back(4);
    A.push_back(5);

    cout << getValue(A,2);


    return 0;
}
