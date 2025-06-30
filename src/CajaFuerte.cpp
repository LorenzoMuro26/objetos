#include "CajaFuerte.h"

CajaFuerte::CajaFuerte()
{
    importe = 0;
    cantVeces = 0;
}

CajaFuerte::~CajaFuerte()
{
    //dtor
}

float CajaFuerte::cuantoHay ()
{
    return importe;
}

void CajaFuerte::guardar (float unImporte)
{
    importe += unImporte;
    cantVeces ++;
}

void CajaFuerte::vaciar ()
{
    importe = 0;
}
