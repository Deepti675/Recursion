//deleting mid element from stack using recursion
#include<bits/stdc++.h>
using namespace std;
void solve(stack<int>&s,int k)
{
    if(k==1)
    {
        s.pop();
        return;
    }
    int temp=s.top();
    s.pop();
    solve(s,k-1);
    s.push(temp);
    return;
}
stack<int> mid_del(stack<int>&s)
{
    if(s.size()==0)
     return s;
   int k= (s.size()/2)+1;
    solve(s,k);
    return s;
}
int main()
{
    stack<int>s;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        s.push(a);
        
    }
    mid_del(s);
       while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
    return 0;
}
