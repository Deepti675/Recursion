#include <iostream>

using namespace std;

void Print(int a)
{
    if(a<=0)
        return;
    else
        Print(a-1);
        cout<<a<<" ";
}
int main()
{
    int n;
    cin>>n;
    Print(n);
    return 0;
}
