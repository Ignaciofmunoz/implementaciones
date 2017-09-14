#include <iostream>
#include <array>
using namespace std;


struct pila
{
array<int ,5>a;
   int i=0;
};
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

void cargar_pila()
{

    cout<<"ingrese 5 numeros "<<endl;
    for (int i=0;i<5;i++)
    {
        int num;
        cin >>num;
        push(p,num);
    }
}
int npops;
void descargar_pila()
{

cout<<endl<<"ingrese cuantos elementos desea quitar (maximo=5)"<<endl;
cin>>npops;

for (int i=1;i<=npops;i++)
    {
        int a;
        a=pop(p);

    }

}
void mostrar_pila(pila&p)
{
    for (int i=0;i<5;i++)
        {
        cout<<"------------------"<<endl;
        cout<<"elemento:"<<i<<endl;
        cout<<p.a.at(i)<<endl;
}
}
int main()
{

cargar_pila();
mostrar_pila(p);
descargar_pila();
mostrar_pila(p);
return 0;
}

