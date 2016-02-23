#include <iostream>

using namespace std;

int main()
{  int c=0;
   double num, cr1=0, ar1=0, cr2=0, ar2=0, cr3=0, ar3=0;
   double mayor=0, menor=99999;
   double pr1,pr2,pr3;
   while(c<5)
   {
       cout<<"Ingresar un numero...:";
       cin>>num;
       if((num>=1)and(num<=50))
       {
           cr1++;
           ar1+=num;
       }
       else if((num>=51)and(num<=100))
       {
           cr2++;
           ar2+=num;
       }
       else if(num>100)
       {
           cr3++;
           ar3+=num;
       }
       c++;
       if(num>mayor)
       {
           mayor=num;
       }
       if(num<menor)
       {
           menor=num;
       }
   }
   if(cr1>0)
    pr1= ar1/cr1;
   if(cr2>0)
    pr2= ar2/cr2;
   if(cr3>0)
    pr3= ar3/cr3;
   cout<<"Promedio Rango 1...:"<<pr1<<"\n";
   cout<<"Promedio Rango 2...:"<<pr2<<"\n";
   cout<<"Promedio rango 3...:"<<pr3<<"\n";

   cout<<"Mayor...:"<<mayor<<"\n";
   cout<<"Menor...:"<<menor<<"\n";


    return 0;
}
