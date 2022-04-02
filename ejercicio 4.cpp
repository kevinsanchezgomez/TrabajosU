#include <iostream>
using namespace std;
main()
{
    int n, num_pot, i, b, acum, f;
    i = 1; 
    
    cout<<"Ingrese un numero entero: ";
    cin>> n;
    acum = n;
    i = 1;
        cout<<"Cual es el numero potencia: ";
    f = 1;
    if (n % 2 == 0)
    {
        cin>> num_pot;
        while (i < num_pot)
        {
            acum = n * acum;
            i++;
        }
        cout<<""<< acum;
        cout<<"\n";
    }
    else
    {
       for ( i = n; 1 < i; i--)
       {
           f = f * i;
       }
       
       cout<<"El factorial de "<<n<<" es: "<<f;
       cout<<"\n";
    }
}


