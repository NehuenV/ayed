#include <iostream>
using namespace std;
#include <stdlib.h>
#include "Sucursal.h"
#include "Metodos.h"
tZona valor ( int zona);
std::string nombreZona(tZona z);

int main (){

    Sucursal* suc[25];
    int op;
    int cant;
    while (2>1){
        system("cls");
        cout << "1- Cargar Informacion" << endl;
        cout << "2- Emitir listado" << endl;
        cout << "3- Emitir sucursal con facturacion maxima y minima" << endl;
        cin >> op;
        switch(op)
        {
            case 1:{
                int id, zona;
                std::string direccion;
                double facturacion;
                int i = 0;
                while( i< 25 ){
                    system("cls");
                    cout << "Ingrese el id de la sucursal: " << endl;
                    cin >> id;
                    if(id!=1000)
                    {
                        cout << "Ingrese la direccion: " << endl;
                        cin >> direccion;

                        cout << "Ingrese la zona: " << endl;
                        cout << "0- Norte: " << endl;
                        cout << "1- Sur: " << endl;
                        cout << "2- Este: " << endl;
                        cout << "3- Oeste: " << endl;
                        cin >> zona;

                        cout << "Ingrese la facturacion: " << endl;
                        cin >> facturacion;
                        tZona z = valor(zona);
                        agregarSucursal(suc, i, id , direccion, z,facturacion);

                    }//----if
                    else{
                        cant=i;
                        i=25;
                    }//----else
                    i++;
                }//----for
            }//case 1:
            break;//case 1:

            case 2:{
                system("cls");
                cout << "Facturacion de zona NORTE: " << facturacionZona(suc, cant, tZona::norte) << endl;
                cout << "Facturacion de zona SUR: "   << facturacionZona(suc, cant, tZona::sur) << endl;
                cout << "Facturacion de zona ESTE: "  << facturacionZona(suc, cant, tZona::este) << endl;
                cout << "Facturacion de zona OESTE: " << facturacionZona(suc, cant, tZona::oeste) << endl;
            }//case 2:
            break;

            case 3 :
                system("cls");
                int mi= facturacionMinima(suc, cant);
                int mx= facturacionMaxima(suc,cant );
                cout << "Facturacion minima: Id: " << suc[mi]->id << " direccion: " << suc[mi]->direccion << " zona: "<< nombreZona(suc[mi]->zona) << " facturacion; "<< suc[mi]->facturacion << endl;
                cout << "Facturacion maxima: Id: " << suc[mx]->id << " direccion: " << suc[mx]->direccion << " zona: "<< nombreZona(suc[mi]->zona) << " facturacion; "<< suc[mx]->facturacion << endl;
             //   cout << "Facturacion maxima: " << facturacionZona(suc, cant, tZona::norte) << endl;
        }//----switch
    }//----while

    for(int x = 0 ; x < 25; x++){
        cout << suc[x]->direccion << endl;
        delete suc[x];
    }
    return 0;
}

tZona valor(int zona){
    switch(zona)
    {
        case 0 :
            return tZona::norte;
        case 1 :
            return tZona::sur;
        case 2 :
            return tZona::este;
        case 3 :
            return tZona::oeste;

    }
}

std::string nombreZona(tZona z){

    switch(z){
        case norte:
            return std::string("Norte");
        break;
        case sur:
            return std::string("sur");
        break;
        case este:
            return std::string("este");
        break;
        case oeste:
            return std::string("oeste");
        break;
    }
}
