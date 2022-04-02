#include <iostream>
using namespace std;
main()
{
    int num1, num2, num3, r1, r2, r3, resl_fin, otro;
    do
    {
        cout<<"Ingrese el primer numero: ";
        cin>> num1;
        cout<<"Ingrese el primer numero: ";
        cin>> num2;
        cout<<"Ingrese el primer numero: ";
        cin>> num3;
        r1 = num1 * 2;
        r2 = num2 * 3;
        r3 = num3 / 2;
        resl_fin = r1 + r2 - r3;
        cout<<"El resultado es: "<<resl_fin;
        cout<<"\nOprima 1 si quiere volver a calcular otros numeros ";
        cin>> otro; 
    } while (otro == 1);
    
}
