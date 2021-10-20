
#include <bits/stdc++.h>

using namespace std;
void solve(vector<int>v,int k,int ind,int &ans)
{
    if(v.size()==1)
    {
        ans=v[0];
        cout<<ans+1;
        return;
    }
    ind=(ind+k)%v.size();
    v.erase(v.begin()+ind);
    solve(v,k,ind,ans);
    return;
}
int main()
{
    int n,k,ind;
    cin>>n>>k;
    vector<int>v ;
    for(int i=0;i<n;i++)
    {
       v.push_back(i);
    }   
    k=k-1;
    ind=0;
    int ans=-1;
    solve(v,k,ind,ans);

    return 0;
}
