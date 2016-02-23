#include <iostream>

using namespace std;
/*Validar que el numero este entre 50-100 */
int main()
{int numero,i;
  for(i=1;i<=5;i++)
  {

   do
   {
    cout<<"Ingresar Numero 50-100...:";
    cin>>numero;

   }while(!((numero>=50) and (numero<=100)));
   cout<<i<<"Numero Correcto...:"<<numero<<"\n";
  }
    return 0;
}
