#include <iostream>


using namespace std;
int turno;
double ventas, pcomis, comis;
char nombre[45];

void IngresarNombre(double &ventas, char nombre[], int turno)
{
    cout<<"Nombre del Empleado...:";
    cin.getline(nombre,30);
    cout<<"La venta es...:";
    cin>>ventas;
    do
    {
        cout<<"Ingresar turno...:";
        cin>>turno;
    }while ((turno<1)or(turno>3));
}
double PorComis(int turno)
{
    if(turno==1)
    {
        return 0.05;
    }
    else if (turno==2)
    {
        return 0.06;
    }
    else
    {
        return 0.04;
    }
}
void Calcular(int turno, double ventas, double &pcomis, double &comis)
{
    pcomis= PorComis(turno);
    comis= ventas*pcomis;
}
int main()
{
    IngresarNombre(ventas,nombre,turno);
    Calcular(turno,ventas,pcomis,comis);
    cout<<"Por. de Comision...:"<<pcomis<<"\n";
    cout<<"Comision Ganada...:"<<comis<<"\n";


    return 0;
}
