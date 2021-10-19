//printing distinct subset of a set using recursion and map
#include <bits/stdc++.h>
using namespace std;

vector<string> final_out;

void solve(string ip,string op)
{
    if(ip.length()==0)
    {
        
        
        final_out.push_back(op);
        return;
    }
    string op1=op;
    string op2=op;
    op2.push_back(ip[0]);
    ip.erase(ip.begin()+0);
    solve(ip,op1);
    solve(ip,op2);
}
int main()
{
    string ip;
    cin>>ip;
    string op=" ";
    solve(ip,op);
        
    unordered_map<string, int> umap; 
    
    for(auto x:final_out)
        umap[x]++;
    
    for (auto itr = umap.begin(); itr != umap.end(); itr++) 
    {
       cout<<itr->first<<" ";
    }
        
    return 0;
}
