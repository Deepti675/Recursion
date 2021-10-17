//we can solve it using extra stack of size n but using recursion extra stack size will O(1)....means constent.  


#include<bits/stdc++.h>
using namespace std;
void insert(stack<int>&s,int element)
{
  if(s.size()==0)
  {
      s.push(element);
      return;
  }
  int temp=s.top();
  s.pop();
  insert(s,element);
  s.push(temp);
  return;
}
void reverse(stack<int>&s)
{
    if(s.size()==1)
    return;
    int temp=s.top();
    s.pop();
    reverse(s);
    insert(s,temp);
    return;
}
int main()
{
    stack<int>s;
    for(int i=0;i<6;i++)
    {
        int a;
        cin>>a;
        s.push(a);
        
    }
    reverse(s);
    while(!s.empty())
   {
       cout<<s.top()<<" ";
       s.pop();
   }
    return 0;
}
