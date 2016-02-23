#include <iostream>

using namespace std;
char nombre[30];
int turno,horas,hn,he;
int pagonormal, pagoextra, pagototalnormal, pagototalextra, pagototal;

void Ingresarnombre(int turno,int hn,int he, char nombre[])
{
    cout<<"Nombre del empleado...:";
    cin.getline(nombre,30);
    cout<<"Las horas normales son...:";
    cin>>hn;
    cout<<"Las horas extras son...:";
    cin>>he;
    do
    {
        cout<<" El turno es...:";
        cin>>turno;

    }while ((turno<1) or( turno>4));
}
int Pxnormal(int turno)
{
    if (turno==1)
    {
        return 200;
    }
    else if (turno==2)
    {
        return 300;
    }
    else if (turno==3)
    {
        return 200;
    }
    else (turno==4);
    {
        return 300;
    }
}
int pxextras(int turno)
{
    if (turno==1)
    {
        return 250;
    }
    else if (turno==2)
    {
        return 350;
    }
    else if (turno==3)
    {
        return 250;
    }
    else (turno==4);
    {
        return 350;
    }
}
void Calcular(int turno, int &pagoextra, int &pagonormal, int &pagototal,int hn, int he, int &pagototalextra,int &pagototalnormal)
{
    pagoextra=pxextras(turno);
    pagonormal=Pxnormal(turno);
    pagototalextra= he*pagoextra;
    pagototalnormal= hn*pagonormal;
    pagototal= pagototalnormal+pagototalextra;
}
int main()
{
    Ingresarnombre(turno,hn,he,nombre);
    Calcular(turno,pagoextra,pagonormal,pagototal,hn,he,pagototalextra,pagototalnormal);
    cout<<"Pago total por horas normales...:"<<pagototalnormal<<"\n";
    cout<<"Pago total por horas extras...:"<<pagototalextra<<"\n";
    cout<<"Pago total es...:"<<pagototal<<"\n";
    return 0;
}
