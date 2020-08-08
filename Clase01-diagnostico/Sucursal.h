#ifndef SUCURSAL_H_INCLUDED
#define SUCURSAL_H_INCLUDED
#include <string>

enum tZona{
    norte=0,
    sur=1,
    este=2,
    oeste=3
};

typedef struct {
    int id;
    std::string direccion;
    tZona zona;
    double facturacion;
} Sucursal;

void crear (Sucursal &sucursal);

void crear (Sucursal &sucursal, int id, std::string direccion, tZona zona, double facturacion);

int getId(Sucursal &sucursal);

void setId(Sucursal &sucursal, int id);

std::string getDireccion(Sucursal &sucursal);

void setDireccion(Sucursal &sucursal, std::string direccion);

tZona getZona(Sucursal &sucursal);

void setZona(Sucursal &sucursal, tZona zona);

double getFacturacion(Sucursal &sucursal);

void setFacturacion(Sucursal &sucursal, double facturacion);

#endif // SUCURSAL_H_INCLUDED
