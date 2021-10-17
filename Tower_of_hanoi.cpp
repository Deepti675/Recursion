#include<bits/stdc++.h>
using namespace std;
int count1=0;
void solve(int s,int d,int m,int n)
{
    if(n==1)
       count1++;
    else
    {
        solve(s,m,d,n-1);
        count1++;
        solve(m,d,s,n-1);
    }
    
}

int main()
{
    int n;
    cin>>n;
    int s=1,m=2,d=3;
    solve(s,d,m,n);
    cout<<count1;
    return 0;
}
