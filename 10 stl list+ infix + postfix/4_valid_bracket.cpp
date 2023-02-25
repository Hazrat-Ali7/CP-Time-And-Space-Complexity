#include<bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    string s;
    cin >> s;
    stack<char> A;

    for(int i=0; i<s.size(); i++)
    {
        char c = s[i];
        if(c=='(' || c=='{' || c=='[')
            A.push(c);
        else if(!A.empty() && c==')' && A.top()=='(')
            A.pop();

        else if(!A.empty() && c=='}' && A.top()=='{')
            A.pop();

        else if(!A.empty() && c==']' && A.top()=='[')
            A.pop();
        else
            A.push(c);
    }
    if(A.empty())
        cout << "YES";
    else
        cout << "NO";
    return 0;
}
