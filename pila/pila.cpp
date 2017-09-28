#include <iostream>
#include <array>
using namespace std;

const int N=3;
struct pila
{
array<int ,5>a;
   int i=0;
}p;
pila p;
void push (pila&p,int x)
{
    p.a.at(p.i)=x;
    p.i++;
}
int pop (pila&p)
{
    p.i--;

    return p.a.at(p.i);
}

void cargar_pila(pila&p)
{

    cout<<"ingrese "<<N<<" numeros "<<endl;
    for (int i=0;i<N;i++)
    {
        int num;
        cin >>num;
        push(p,num);
    }
}
int npops;
void descargar_pila(pila&p)
{


    cout<<"ingrese cuantos elementos desea quitar ,maximo="<<N<<endl;

    cin>>npops;
    if (npops>N)
    {
        npops=N;
    }
     cout<<"elementos retirados:"<<endl;
    for (int i=0; i<npops; i++)
    {
        int a;
        a=pop(p);
       cout<<a<<endl;
    }
}
void mostrar_pila(pila&p)
{
   cout<<"elementos en pila :"<<endl;
    for (int i=0;i<(p.i);i++)
        {
   
        cout<<p.a.at(i)<<endl;
}
}
int main()
{

cargar_pila(p);
mostrar_pila(p);
descargar_pila(p);
mostrar_pila(p);
return 0;
}

