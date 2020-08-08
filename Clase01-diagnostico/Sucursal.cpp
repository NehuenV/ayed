#include <iostream>
#include <sstream>
using namespace std;

#include "Sucursal.h"


/*----------------------------------------------------------------------------*/
void crear(Sucursal &sucursal) {
    sucursal.id = 0;
    sucursal.direccion = "";

}

/*----------------------------------------------------------------------------*/
void crear(Sucursal &sucursal, int id, std::string direccion, tZona zona, double facturacion) {
    sucursal.id = id;
    sucursal.direccion = direccion;
    sucursal.zona=zona;
    sucursal.facturacion = facturacion;
}

void destruir(Sucursal &sucursal) {
    sucursal.id = 0;
    sucursal.direccion ="";

}

int getId(Sucursal &sucursal)
{
    return sucursal.id;
}

void setId(Sucursal &sucursal, int id)
{
    sucursal.id=id;
}

string getDireccion(Sucursal &sucursal)
{
    return sucursal.direccion;
}

void setDireccion(Sucursal &sucursal, string direccion)
{
    sucursal.direccion=direccion;
}

tZona getZona(Sucursal &sucursal)
{
    return sucursal.zona;
}

void setZona(Sucursal &sucursal, tZona zona)
{
    sucursal.zona = zona;
}

double getFacturacion(Sucursal &sucursal)
{
    return sucursal.facturacion;
}

void setFacturacion(Sucursal &sucursal, double facturacion)
{
    sucursal.facturacion = facturacion;
}
