#include <iostream>

using namespace std;
int numero;
/* Ingresar un numero y determinar su rango 1-50,
51-100 y mayor a 100*/
int main()
{
    cout << "Ingresar un Numero";
    cin>> numero;
    if((numero>=1)&&(numero<=50))
    {
        cout<<"Numero esta entre 1-50";
    }
    else if ((numero>=50)&&(numero<=100))
    {
        cout<<"Numero esta entre 51-100";
    }
    else if (numero>100)
    {
        cout<<"Numero mayor a 100";
    }
    else
    {
        cout<<"Numero es negativo";
    }
    cout<<"\n\n";
    return 0;
}
