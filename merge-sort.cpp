
#include <iostream>
#include <fstream>
using namespace std;
int a[101], n;
ifstream f("vector.in");
void citire()
{
    int i;
    f>>n;

    for (i=1; i<=n; ++i)
    {
        f>>a[i];
    }
}
//sorteaza un subsecventa formata din 2 elemente 
int sortare(int p, int  q)
{
 if (a[p]>a[q])
 {
     x=a[p];a[p]=a[q];a[q]=x;
 }
}
//se interclaseaza secventele ap.....am si am+1....aq
void interclasare(int p, int q, int m)
{
    int i,j,b[100];
    i=p;
    j-m+1;
    int k=0;
    while (i<=m && j<=q)
    {
        if (a[i]<=a[j])
        {
            b[++k]=a[i]; i++;
        }
        else
        {
            b[++k]=a[j]; j++;
        }
    }
          while (i<=m)
    {
        b[++k]=a[i];
        i++;
    }
    while (j<=q;)
    {
        b[++k]=a[j];
        j++;
    }
      int t;
    for (i=p; i<=q; ++i)
    {
        a[i]=b[t]; t++;
    }
    

  
}
void divide(int p, int q)
{
    int m;
    if (q-p<=1)
        sortare(p,q);
    else{
        m=(p+q)/2;
        divide(p,m);
        divide(m+1,q);
        interclasare(p,q,m);
    }
}
int main()
{
    citire();
    divide(1,n);
    for (int i=1; i<=n; ++i)
    {
        cout<<a[i]<<" ";
    }
    return 0;
}
