#ifndef METODOS_H_INCUDED
#define METODOS_H_INCLUDED
#include "Sucursal.h"


void agregarSucursal(Sucursal* s[], int pos, int id, std::string direccion, tZona zona, double facturacion);
double facturacionZona(Sucursal* s[],int cant, tZona zona);
int facturacionMaxima(Sucursal* s[],int cant);
int facturacionMinima(Sucursal* s[],int cant);
#endif // METODOS_H_INCLUDED
