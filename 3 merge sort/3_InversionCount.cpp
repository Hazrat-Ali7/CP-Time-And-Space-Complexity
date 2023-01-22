#include<bits/stdc++.h>
using namespace std;

int inversion_count=0;

vector<int> Merge_sort(vector<int> A)
{
    if(A.size()<=1)
        return A;

    vector<int> first,last;

    for(int i=0;i<A.size()/2;i++)
        first.push_back(A[i]);
    for(int i=A.size()/2;i<A.size();i++)
        last.push_back(A[i]);

    first = Merge_sort(first);
    last = Merge_sort(last);

    vector<int> sorted;
    int i=0,j=0;
    while(i<first.size() && j<last.size())
    {
        if(first[i]>last[j])
        {
            inversion_count += (first.size()-i);
            sorted.push_back(last[j]);
            j++;
        }
        else
        {
            sorted.push_back(first[i]);
            i++;
        }
    }
    while(i<first.size())
    {
        sorted.push_back(first[i]);
        i++;
    }
    while(j<last.size())
    {
        sorted.push_back(last[j]);
        j++;
    }

    return sorted;
}

int main()
{
    int n;
    cin>>n;
    vector<int> A(n);
    for(int i=0;i<n;i++)
        cin>>A[i];

    A = Merge_sort(A);

    cout << inversion_count;

    return 0;
}
