#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

int main()
{ double ne,na,nf;
bool resp=true;

while(resp){
printf("Ingresar la Nota Examen ...>");
scanf("&lf",&ne);

printf("Ingresar la Nota Acumulada ...>");
scanf("%lf",&na);

nf=(ne*0.7) + (na*0.3);

if(nf>=60)
{
    printf("Estado de la Nota :Apr\n");
}
else
{
    printf("Estado de la Nota :Rep\n");
    printf("Necesita Tutoria\n");
}
printf("Nota Final %lf \n",nf);
system("PAUSE");

}


}
