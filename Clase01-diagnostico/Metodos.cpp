#include "Metodos.h"

void agregarSucursal(Sucursal* s[],int pos,int id, std::string direccion, tZona zona, double facturacion)
{
    if(id>99 && id < 1000)
    {
        Sucursal  *suc = new Sucursal;
        crear(*(suc),id,direccion,zona, facturacion);
        s[pos]=suc;
    }
}

double facturacionZona(Sucursal* s[],int cant, tZona zona)
{
    double result=0;
    for(int i = 0 ; i<cant; i++)
    {
        if(s[i]->zona== zona){
            result += s[i]->facturacion;
        }
    }
    return result;
}

int facturacionMaxima(Sucursal* s[],int cant)
{

    int r = 0;
    double maximo = s[0]->facturacion;
    for(int i = 0 ; i<cant; i++)
    {
       if(s[i]->facturacion > maximo){
        maximo=s[i]->facturacion;
        r = i;
       }
    }

    return r;
}

int facturacionMinima(Sucursal* s[],int cant)
{
    int r = 0;

    double minimo = s[0]->facturacion;
    for(int i = 0 ; i<cant; i++)
    {
       if(s[i]->facturacion < minimo){
        minimo=s[i]->facturacion;
        r = i;
       }
    }

    return r;
}
