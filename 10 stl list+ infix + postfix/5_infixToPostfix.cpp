#include <bits/stdc++.h>
using namespace std;

int prec(char ch)
{
    if(ch=='(')
        return 0;
    if(ch=='+' || ch=='-')
        return 1;
    return 2;
}

int main()
{
    string s;
    cin>>s;
    stack<char>st;
    string postfix = "";

    for(int i=0; i<s.size(); i++)
    {
        char now = s[i];
        if(now >='a' && now <= 'z')
        {
            postfix += now;
        }
        else if(now == '(')
            st.push(now);
        else if(now==')')
        {
            while(st.top()!='(')
            {
                postfix += st.top();
                st.pop();
            }
            st.pop();
        }
        else
        {
            while(st.size() && prec(st.top()) >= prec(now)  )
            {
                postfix += st.top();
                st.pop();
            }
            st.push(now);
        }
    }

    while(st.size())
    {
        postfix += st.top();
        st.pop();
    }

    cout<<postfix<<"\n";

    return 0;
}
