#include <iostream>
using namespace std;
main()
{
    int ang1, vlr_ang_3, otro;
    do{
    cout<<"Ingrese el angulo en grados: ";
    cin>> ang1;
    vlr_ang_3 = ang1 - 90;
    if (vlr_ang_3 < 0)
    {
        vlr_ang_3 = vlr_ang_3 * -1;
    }
    else
    {
    }
    cout<<"El valor del 3 angulo es: "<<vlr_ang_3;
    
    cout<<"\nOprima 1 si quiere volver a calcular otro angulo ";
        cin>> otro; 
    
    } while (otro == 1);
}




