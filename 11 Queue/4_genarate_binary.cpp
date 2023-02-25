#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    queue<string> A;
    A.push("1");
    for(int i=1; i<=n; ++i)
    {
        cout << i << " -> " << A.front() << "\n";
        A.push(A.front()+"0");
        A.push(A.front()+"1");
        A.pop();
    }
    return 0;
}
