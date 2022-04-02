#include <iostream>
using namespace std;
main()
{
    
    double nt1, nt2, nt3, nt4, nt5, nt6, prom;
    int ot;
    do
    {
    cout<<"Nota de la primera asignatura: ";
    cin>> nt1;
    cout<<"Nota de la segunda asignatura: ";
    cin>> nt2;
    cout<<"Nota de la tercera asignatura: ";
    cin>> nt3;
    cout<<"Nota de la cuarta asignatura: ";
    cin>> nt4;
    cout<<"Nota de la quinta asignatura: ";
    cin>> nt5;
    cout<<"Nota de la sexta asignatura: ";
    cin>> nt6;
    prom = (nt1 + nt2 + nt3 + nt4 + nt5 + nt6)/6;
        if (prom > 3.5)
        {
            cout<<"\nEl estudiante ha sido aprobado";
        }
        else
        {
            cout<<"\nEl estudiante ha sido reprobado";
        }
        cout<<"\n\nOprima 1 si quiere calcular el promedio de otro estudiante ";
        cin>>ot;
    } while (ot == 1);
}
