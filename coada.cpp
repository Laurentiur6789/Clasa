#include <iostream>
#define cmax 101
using namespace std;
int c[cmax+1],p,u;
//functie pt inserarea unui element in coada
void adaugare(int c[], int &u, int x, int p)
{
    if (u<cmax)
    {
        u++;
        c[u]=x;
    }
    else
        cout<<"coada plina";
}
//Functia pentru crearea unei cozi cu n elemente nr intregi
void creare (int c[], int &p, int &u)
{
    int n,i,x;
    cin>>n;
    p=1; u=0;
    for (i=1; i<=n; ++i)
    {
        cin>>x;
        adaugare(c,u,x,p);
    }
}
//Functie afisare unei cozi
void afisare(int c[], int p, int u)
{
    int i;
    for (i=p; i<=u; i++)
    {
        cout<<c[i]<<" ";

    }
}
//Functie pt extragerea unui element din coada
void extragere(int c[], int &p, int &u, int &x)
{
    if (p<=u)
    {
        x=c[p];
        p++;
    }
    else
     cout<<"coada vida!";

}

int main()
{
    int x;
    creare(c,p,u);
    afisare(c,p,u);
    cout<<endl;
    cout<<"Dati elementul de inserat:";
    cout<<endl;
    cin>>x;
    adaugare(c,u,x,p);
    afisare(c,p,u);
    cout<<endl;
    extragere(c,p,u,x);
    cout<<endl;
    cout<<"S-a extras elementul:"<<x;
    cout<<endl;
    afisare(c,p,u);
    return 0;
}
/* 4
5
7 2 25 75
5 7 2 25
Dati elementul de inserat:
5 7 2 25 75

S-a extras elementul:5
7 2 25 75
*/
