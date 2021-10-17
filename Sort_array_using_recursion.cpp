#include <bits/stdc++.h>

using namespace std;
void insert(vector<int>&v,int temp)
{
    if(v.size()==0||v[v.size()-1]<=temp)
    {
        v.push_back(temp);
        return;
    }
    int val=v[v.size()-1];
    v.pop_back();
    insert(v,temp);
    v.push_back(val);
}
void Sort(vector<int>&v)
{
    if(v.size()==1)
      return;
    
    
        int temp=v[v.size()-1];
        v.pop_back();
        Sort(v);
        insert(v,temp);
    
    
}


int main()
{
    vector<int>v ;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    Sort(v);
   for(int i=0;i<5;i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
