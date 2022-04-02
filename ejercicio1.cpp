#include <iostream>
using namespace std;

int main()
{
   int sb,p,h,opc,s,d,sbt; 
    
    cout <<"ingrese salario";
    cin>>sb;
    
    cout<<"ingrese porcentaje";
    cin>>p;
    
      sb=sb-(sb*(p/100));
   do {
       
    cout<<"ingrese horas";
    cin>>h;
    
    cout<<"si trabaja mas de 10 hrs, digite 1; si trabaja mas de 20, digite 2; si trabaja mas de 32, digite 3";
    
    cout<<"ingrese opc";
    cin>>opc;
    
    switch(opc){
        case 1:
            s=sb+(sb*(10/100));
            break;
        case 2:
            s=sb+(sb*(15/100));
            break;
        case 3:
            s=sb+(sb*(20/100));
            break;
        default:
            s=sb;
            break;
    }
    cout<<"el salario es "<<s<<endl;
    cout<<"digite 1 para calcular el salario de otro trabajador";
    cin>>d;
      
    }
    
    
  
    while(d==1);
    return 0;
}

