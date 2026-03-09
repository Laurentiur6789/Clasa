#include <iostream>

using namespace std;
struct lista
{
    int inf;
    lista *urm;
};
lista *p;
void creare (lista *&p)
{
    lista *u, *nou;
    int n,i;
    cin>>n;
    p=new lista;
    cin>>p->inf;
    p->urm=NULL;
    u=p;
    for (i=2; i<=n; ++i)
    {
        nou= new lista;
        cin>>nou->inf;
        nou->urm=NULL;
        u->urm=nou;
        u=nou;
    }
}
void afisare (lista *p)
{
    while (p!=NULL)
    {
        cout<<p->inf<<" ";
        p=p->urm;
    }
}
void inserareprim(lista *&p)
{
    lista *u,*nou;
    nou=new lista;
    cin>>nou->inf;
    nou->urm=p;
    p=nou;
}
void inseraredupak(lista *&p)
{
    lista *nou, *q;
    int i,k;
    cin>>k;
    q=p;
    for (i=1; i<=k-1; ++i)
        q=q->urm;
    nou = new lista;
    cin>>nou->inf;
    nou->urm=q->urm;
    q->urm=nou;
}
void inseraresfarsit(lista *&p)
{
    lista *nou, *u;
    u=p;
    while (u->urm!=NULL)
        u=u->urm;
    nou= new lista;
    cin>>nou->inf;
    nou->urm=NULL;
    u->urm=nou;
    u=nou;
}
int main()
{
    creare(p);
    afisare(p);
    inserareprim(p);
    afisare(p);
    inseraredupak(p);
    afisare(p);
    inseraresfarsit(p);
    return 0;
}
