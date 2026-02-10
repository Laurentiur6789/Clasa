#include <iostream>

using namespace std;
int n;
void Hanoi(int n, int a, int b, int c)
{
    if (n==1)
        cout<<a<<"-"<<b;
    else
    {
        Hanoi(n-1,a,c,b);
        cout<<a<<"-"<<b;
        Hanoi(n-1,c,b,a);
    }
}
int main()
{
   cin>>n;
   Hanoi(n,1,2,3);
    return 0;
}
