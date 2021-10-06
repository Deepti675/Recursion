//Print n to 1 using recursion

#include <iostream>

using namespace std;
void Print_rev(int a)
{
    if(a==1)
        cout<<a<<" ";
    else
    {
        cout<<a<<" ";
        Print_rev(a-1);
    }

}
int main()
{
    int n;
    cin>>n;
    Print_rev(n);
    return 0;
}
