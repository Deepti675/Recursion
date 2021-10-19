#include<bits/stdc++.h>
using namespace std;
void solve(int open,int close,string op,vector<string>&v)
{
    if(open==0&&close==0)
    {
        v.push_back(op);
        return;
    }
    if(open!=0)
    {
        string op1=op;
        op1.push_back('(');
        solve(open-1,close,op1,v);
    }
    if(close>open)
    {
        string op2=op;
        op2.push_back(')');
        solve(open,close-1,op2,v);
    }
    return;
}


int main()
{    int n;
     cin>>n;
     vector<string>v;
    int open=n;
    int close=n;
    string op=" ";
    solve(open,close,op,v);
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    return 0;
}
