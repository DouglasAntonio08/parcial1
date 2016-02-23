#include <iostream>

using namespace std;
int na,ne,nf;
/*Ingresar la nota acumulada y examen, luego obtener la nota final y ajustarla
a 60 si se encuentra entre 57-59 a 60, presentar la nota y el estado si es
aprobado o reprobado. */
int main()
{
    cout<<"Ingresar nota acumulada....:";
    cin>> na;
    cout<<"Ingresar nota examen...:";
    cin>> ne;
    nf = na+ne;
    if((nf>=57)&&(nf<=59))
    {
        nf=60;
    }
    cout<<"La Nota Final es...:"<<nf<<"\n";
    if(nf>=60)
    {
        cout<<"Aprobado \n";
    }
    else
    {
        cout<<"Reprobado \n";
    }
    return 0;
}
