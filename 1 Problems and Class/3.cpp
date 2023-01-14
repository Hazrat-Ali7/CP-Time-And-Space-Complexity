#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    for(int i=0;i<s.length();i+=2)
        s[i]=='z'?s[i]='a':s[i]+=1;

    cout<<s;
    return 0;
}
