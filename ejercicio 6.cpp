#include <iostream>
using namespace std;
main()
{
    float vlr, vlr_cor, vlr_cint, vlr_zap, vlr_cam, vlr_trj, cnt1, cnt2, cnt3, cnt4, cnt5, ot;
    int opt;
    
    do
    {
    cout<<"\n\n1.) El traje ";
    cout<<"\n2.) La corbata ";
    cout<<"\n3.) El cinturon ";
    cout<<"\n4.) Los zapatos ";
    cout<<"\n5.) La camisa ";
    cout<<"\n\nIngrese el producto que compro: ";
    cin>> opt;
    switch (opt)
    {
    case 1:
        cout<<"\nIngrese el valor del traje: ";
        cin>> vlr;
        vlr_cor = vlr / 6;
        vlr_cint = vlr / 5; 
        vlr_zap = vlr / 2;
        vlr_cam = vlr_zap - (vlr_zap /3);
        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;
        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;
        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;
        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;
        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;
        vlr = vlr * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr_cam = vlr_cam * cnt5;
        cout<<"\nEl valor del traje es: "<<vlr;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";
        
        break;
    case 2:
        cout<<"Ingrese el valor de la corbata: ";
        cin>> vlr;
        vlr_trj = vlr *6;
        vlr_cint = vlr_trj / 5; 
        vlr_zap = vlr_trj / 2;
        vlr_cam = vlr_zap - (vlr_zap /3);
        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;
        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;
        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;
        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;
        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;
        vlr_trj = vlr_trj * cnt1;
        vlr = vlr * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr_cam = vlr_cam * cnt5;
        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";
        break;
    
    case 3:
        cout<<"Ingrese el valor del cinturon: ";
        cin>> vlr;
        vlr_trj = vlr * 5;
        vlr_cor = vlr_trj / 6;
        vlr_zap = vlr_trj / 2;
        vlr_cam = vlr_zap - (vlr_zap /3);
        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;
        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;
        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;
        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;
        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;
        vlr_trj = vlr_trj * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr = vlr * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr_cam = vlr_cam * cnt5;
        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";
  
        break;
        
    case 4:
        cout<<"Ingrese el valor del producto: ";
        cin>> vlr;
  
        vlr_trj = vlr * 2;
        vlr_cor = vlr_trj / 6;
        vlr_cint = vlr_trj / 5; 
        vlr_cam = vlr - (vlr /3);
        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;
        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;
        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;
        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;
        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;
        vlr_trj = vlr_trj * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr = vlr * cnt4;
        vlr_cam = vlr_cam * cnt5;
        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr;
        cout<<"\nEl valor de la camisa es: "<<vlr_cam;
        cout<<"\n";
        break;
    case 5:
        cout<<"Ingrese el valor del producto: ";
        cin>> vlr;
        vlr_zap = vlr + (vlr / 2);
        vlr_trj = vlr_zap * 2;
        vlr_cint = vlr_trj / 5; 
        vlr_cor = vlr_trj / 6;
        cout<<"Cuantos trajes quiere: ";
        cin>> cnt1;
        cout<<"Cuantas corbatas quiere: ";
        cin>> cnt2;
        cout<<"Cuantos cinturones quiere: ";
        cin>> cnt3;
        cout<<"Cuantos zapatos quiere: ";
        cin>> cnt4;
        cout<<"Cuantas camisas  quiere: ";
        cin>> cnt5;
        vlr_trj = vlr_trj * cnt1;
        vlr_cor = vlr_cor * cnt2;
        vlr_cint = vlr_cint * cnt3;
        vlr_zap = vlr_zap * cnt4;
        vlr = vlr * cnt5;
        cout<<"\nEl valor del traje es: "<<vlr_trj;
        cout<<"\nEl valor de la corbata es: "<<vlr_cor;
        cout<<"\nEl valor del cinturon es: "<<vlr_cint;
        cout<<"\nEl valor de los zapatos es: "<<vlr_zap;
        cout<<"\nEl valor de la camisa es: "<<vlr;
        cout<<"\n";
        break;
    
    default:
        cout<<"Ingreso mal la opción";
        break;
    }
    cout<<"Ingrese 1 si quiere repetir: ";
    cin>> ot;
    } while (ot == 1);
}
