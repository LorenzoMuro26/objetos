#include "Ladron.h"
#include <iostream>
#include <CajaFuerte.h>
#include "CajaFuerte.h"

using namespace std;

Ladron::Ladron()
{
    //ctor
}

Ladron::~Ladron()
{
    //dtor
}

void Ladron::Robar ()
{
    robado = CajaFuerte::cuantoHay();
    CajaFuerte::vaciar();
}

void Ladron::tuObjetivoEs (CajaFuerte& unaCajaFuerte)
{
    Objetivo = &unaCajaFuerte;
}
