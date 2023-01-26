#include<bits/stdc++.h>
using namespace std;

vector<int> Merge_sort(vector<int> A)
{
    if(A.size()<=1)
        return A;

    vector<int> left,right;
    for(int i=0;i<A.size()/2;i++)
        left.push_back(A[i]);

    for(int i=A.size()/2;i<A.size();i++)
        right.push_back(A[i]);

    left = Merge_sort(left);
    right = Merge_sort(right);

    A.clear();

    int i=0,j=0;
    while(i<left.size() || j<right.size())
    {
        if(i==left.size())
        {
            A.push_back(right[j]);
            j++;
        }
        else if(j==right.size())
        {
            A.push_back(left[i]);
            i++;
        }
        else if(left[i]<right[j])
        {
            A.push_back(left[i]);
            i++;
        }
        else
        {
            A.push_back(right[j]);
            j++;
        }
    }
    return A;
}

int main()
{
    int n;
    cin >> n;
    vector<int> A(n);

    for(int i=0;i<n;i++)
        cin >> A[i];

    A = Merge_sort(A);

    for(auto it:A)
        cout << it << ' ';

    return 0;
}
