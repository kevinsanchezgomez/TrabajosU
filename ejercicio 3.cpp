#include <iostream>
using namespace std;
main()
{
    int num, c, i, sum, b, a; 
    cout<<"Ingrese el primer numero ";
    cin>> num;
    c = num;
    i = 0;
    sum = 0;
    do
    {
        if (c % 2 ==0)
        {
            c = c + 2;
            
        }
        else
        {
            c = c + 1;
        }
    cout<<"\n El siguiente numero par es: "<<c;
    sum = sum + c;
    cout<<"\n El acumulado de la suma es: "<<sum;
     i++;
    } while (i<3);
    b = sum *num;
    cout<<"\nLa suma acumulada multiplicada por el numero inicial da como resultado "<<b;
    
}

