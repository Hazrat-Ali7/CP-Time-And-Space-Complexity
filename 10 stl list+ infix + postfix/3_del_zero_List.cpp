#include<bits/stdc++.h>
using namespace std;

int main()
{
    list<int> A;
    A.push_back(0);
    A.push_back(2);
    A.push_back(0);
    A.push_back(0);
    A.push_back(5);

    A.remove(0);

    for(auto it:A)
        cout << it << ' ';

    return 0;
}
