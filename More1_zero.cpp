//print n bits binary number having more one's than zero's for any prefix....

#include <bits/stdc++.h>
using namespace std;
void solve(int one,int zero,int n,string op)
{
    if(n==0)
    {
        cout<<op<<" ";
        return;
    }
    string op1=op;
    op1.push_back('1');
    solve(one+1,zero,n-1,op1);
    if(one>zero)
    {
        string op2=op;
        op2.push_back('0');
        solve(one,zero+1,n-1,op2);
        
    }
}

int main()
{
    int n;
    cin>>n;
    string op=" ";
    int one=0;
    int zero=0;
    solve(one,zero,n,op);
}
