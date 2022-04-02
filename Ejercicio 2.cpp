#include <iostream>
using namespace std;

main()
{   
    int num_cam, i, cont_cam, prec_cam, ttl_prc_cam, num_pant, prec_pant, ttl_prc_pant, cont_pant, num_zap, prec_zap, ttl_prc_zap, cont_zap,prec_cha, ttl_prc_cha, cont_cha, num_cha, num_lib;
    int cont_libros, opt, val_lib1, ttl_val_lib1, val_lib2, ttl_val_lib2, val_lib3, ttl_val_lib3,val_lib4, ttl_val_lib4, cont_lib, ttl_libros, total;
    cont_cam = 0;
    cont_pant = 0;
    cont_zap = 0;
    cont_cha = 0;
    ttl_prc_cam = 0;
    ttl_prc_pant = 0;
    ttl_prc_zap = 0;
    ttl_prc_cha = 0;
    cont_libros = 0;
    ttl_val_lib1 = 0;
    ttl_val_lib2 = 0;
    ttl_val_lib3 = 0;
    ttl_val_lib4 = 0;
        cout<<"Ingrese la cantidad de las camisas que compro: ";
        cin>>num_cam;
    
    while (cont_cam < num_cam)
    {
        cout<<"Ingrese el precio de las camisas: ";
        cin>>prec_cam;
        ttl_prc_cam = ttl_prc_cam + prec_cam;
        cont_cam++;
    }
    
    cout<<"\nEl precio total de las camisetas es: "<<ttl_prc_cam;
    
    
    do
    {
        cout<<"Ingrese el precio de las camisas: ";
        cin>>prec_cam;
        ttl_prc_cam = ttl_prc_cam + prec_cam;
        cont_cam++;
    } 
    while (cont_cam < num_cam);
    cout<<"\nEl precio total de las camisetas es: "<<ttl_prc_cam;
    cout<<"\n\nIngrese la cantidad de pantalones que compro: ";
        cin>>num_pant;
    while (cont_pant < num_pant)
    {
         cout<<"Ingrese el precio de los pantalones: ";
        cin>>prec_pant;
        ttl_prc_pant = ttl_prc_pant + prec_pant;
        cont_pant++;
    }
    
    cout<<"\n El precio total de los pantalones es: "<<ttl_prc_pant;
    cout<<"\n\nIngrese la cantidad de pares de zapatos que compro: ";
        cin>>num_zap;
    while (cont_zap < num_zap)
    {
        cout<<"Ingrese el precio de los pares de zapatos: ";
        cin>>prec_zap;
        
        ttl_prc_zap = ttl_prc_zap + prec_zap;
        cont_zap++;
    }
        
    cout<<"\n El precio total de los zapatos es: "<<ttl_prc_zap;
    
    cout<<"\n\nIngrese la cantidad de chaquetas que compro: ";
        cin>>num_cha;
    while (cont_cha < num_cha)
    {
        cout<<"Ingrese el precio de las chaquetas: ";
        cin>>prec_cha;
        
        ttl_prc_cha = ttl_prc_cha + prec_cha;
        cont_cha++;
    }
    
    cout<<"\n El precio total de las chaquetas es: "<<ttl_prc_cha;
    
    cout<<"\n\nIntroduzca cuantos libros compró: ";
    cin>>num_lib;
    while (cont_libros < num_lib)
    {
        cout<<"\nElija que tipo de libro compró: ";
        cout<<"\n1.)Programacón.";
        cout<<"\n2.)Innovación.";
        cout<<"\n3.)Emprendimiento.";
        cout<<"\n4.)Lógica de programación.";
        cout<<"\n";
        cin>>opt;
        switch (opt)
        {
        case 1:
            cout<<"Ingrese el valor del libro de programación: ";
            cin>>val_lib1;
            ttl_val_lib1 = ttl_val_lib1 + val_lib1;
            break;
        case 2:
            cout<<"Ingrese el valor del libro de innovación: ";
            cin>>val_lib2;
            ttl_val_lib2 = ttl_val_lib2 + val_lib2;
            break;
        
        case 3:
            cout<<"Ingrese el valor del libro de emprendimiento: ";
            cin>>val_lib3;
            ttl_val_lib3 = ttl_val_lib3 + val_lib3;
            break;
        case 4: 
            cout<<"Ingrese el valor del libro de lógica de programación: ";
            cin>>val_lib4;
            ttl_val_lib4 = ttl_val_lib4 + val_lib4;
            break;
        default:
            cout<<"No selecciono una opción valida";
            break;
        }
        
        cont_libros++;
    }
    ttl_libros = ttl_val_lib1 +ttl_val_lib2 + ttl_val_lib3 + ttl_val_lib4;
    cout<<"\nEl costo total de todos los libros fue: "<<ttl_libros;
    total = ttl_prc_cam + ttl_prc_pant + ttl_prc_zap + ttl_prc_cha + ttl_libros;
    cout<<"\nEl costo total de todas las cosas es: "<<total;
    cout<<"\n";
    
}
