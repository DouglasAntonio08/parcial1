#include <iostream>

using namespace std;
int n1, n2, suma;
void Ingreso (int &n1, int &n2)
{
    cout<<"Ingresar Valor de n1...:";
    cin>>n1;
    cout<<"Ingresar Valor de n2...:";
    cin>>n2;
}

void SumaNumeros(int n1, int n2, int &suma)
{
    suma = n1+n2;
}
void presentar()
{
    cout<<"Suma de los numeros es...:"<<suma<<"\n";
}
int main()
{
    Ingreso(n1,n2);
    SumaNumeros(n1,n2,suma);
    presentar();
    return 0;
}
