#include <iostream>
using namespace std;
main()
{
    double nt1, nt2, nt3, nt4, nt5, nt6, prom, ot, cont_ap, cont_rep;
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
            cont_ap++;
        }
        else
        {
            cout<<"\nEl estudiante ha sido reprobado";
            cont_rep++;
        }
        cout<<"\n\nOprima 1 si quiere calcular el promedio de otro estudiante ";
        cin>>ot;
    } while (ot == 1);
    cout<<"El numero de estudiantes aprobados es: "<<cont_ap;
    cout<<"\nEl numero de estudiantes reprobados es: "<<cont_rep;
    cout<<"\n";
}
