#include <iostream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
using namespace std;

int main()
{
    int i;
    int n,numero;
    cout<<"Ingresar Numero de veces...:";
    cin>>n;
    for(i=1;i<=n;i++)
    {   numero =50 + rand()% (100-50);
        cout<<"Valor de la I es...:"<<i<<"\n"<<"Valor de Numero"<<numero<<"\n";
    }

    return 0;
}
