
//similler to the array sorting using recursion in place of array we will take stack and print sorted stack in decending order
#include <bits/stdc++.h>

using namespace std;
void insert(stack<int>&s,int temp)
{
    if(s.size()==0||s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    int val=s.top();
    s.pop();
    insert(s,temp);
    s.push(val);
}
void Sort(stack<int>&s)
{
    if(s.size()==1)
      return;
    
    
        int temp=s.top();
        s.pop();
        Sort(s);
        insert(s,temp);
    
    
}


int main()
{
    stack<int>s ;
    for(int i=0;i<5;i++)
    {
        int a;
        cin>>a;
        s.push(a);
    }
    Sort(s);
   while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
    return 0;
}
