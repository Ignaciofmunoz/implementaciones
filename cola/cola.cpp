#include <iostream>
#include <array>
using namespace std;
//creando la  cola
const int N=3;
int n_enq=0;
struct cola
{
    array<int,N>a;//0a2
    int i=0;
    int f=0;
};

void enq(cola&c,int x)
{
    if (n_enq==0)
    {
        c.a.at(c.f)=x;

    }
    else
    {
        c.f= (c.f+1)%N;
        c.a.at(c.f)=x;
    }
    n_enq++;
}

int deq(cola&c)
{
    int aux;
    aux=c.a.at(c.i);
    c.i=(c.i+1)%(N+1);
    return aux;
}

void muestracola(cola&c)
{
cout<<"la cola contiene los sig. elementos:"<<endl;
    int i=c.i;
    for (i; i<=c.f; i++)
    {

        cout <<c.a.at(i)<<endl;

    }

}
//funciones de pruebas
void prueba_enq(cola&c)
{
    int num;
    cout<<"la cola contiene "<<N<<" elementos"<<endl;
    for (int i=0; i<N; i++)
    {

        cout<<"ingrese un numero a poner en cola"<<endl;
        cin>> num;
        enq(c,num);
    }

}
void prueba_deq(cola&c)
{

    cout<<"ingrese cantidad de elementos a desencolar, maximo:"<<n_enq<<endl;
    int d;
    cin>>d;
    if (d >n_enq)
    {
        d =n_enq;
        cout<<"se sobrepaso el maximo de elementos posibles"<<endl;
        cout<<"se extraeran "<<d<<" elementos"<<endl;
    }
    cout<<"elemento extraido:"<<endl;
    for (int i=0; i<d; i++)
    {

        cout<<deq(c)<< endl;

    }


}


int main()
{
    cola c;
    prueba_enq(c);
    muestracola(c);
    prueba_deq(c);
    muestracola(c);
}
