#include <iostream>

using namespace std;
//presentar los numeros del 1 al 10 usando while
int main()
{int c=0; int numero; int suma=0; int mayor=0; int promedio=0;
while(c<5)
{ c++;
    cout<<"numero #"<< c <<"...:";
    cin>> numero;
    suma=suma+numero; //suma+=numero;
    if (numero>mayor)
    {
       mayor= numero;
    }

    promedio= suma/5;

}
  cout<<"El promedio de los numero es "<<promedio<<"\n";
  cout<<"El mayor de los numero es "<<mayor<<"\n";
  cout<<"Suma de los numero es "<<suma<<"\n";
  cout<<"Final del ciclo\n";
    return 0;
}
