#include <iostream>

using namespace std;

int na, ne, nf;
char nombre[30];

void LecturaDatos(int &na, int &ne, char nombre[])
{
    cout<<"Nombre del Alumno...:";
    cin.getline(nombre,30);
    cout<<"Nota Acumulada....:";
    cin>>na;
    cout<<"Nota Examen...:";
    cin>>ne;
}
void Observa(int nf)
{
    if(nf>=60)
    {
        cout<<"Aprobado";
    }
    else
    {
        cout<<"Reprobado";
    }
    cout<<"\n";
}
int notafinal(int na, int ne)
{
    int xnf;
    xnf=na+ne;
    return xnf;
}
int main()
{
  LecturaDatos(na,ne,nombre);
  nf=notafinal(na,ne);
  cout<<"Nota Final....:"<<nf<<"\n";
  Observa(nf);

}
