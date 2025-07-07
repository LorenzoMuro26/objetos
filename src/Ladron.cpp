#include "Ladron.h"

Ladron::Ladron()
{
    //ctor
}

Ladron::Ladron(CajaFuerte& _objetivo)
{
    objetivo = &_objetivo;
}

Ladron::~Ladron()
{
    //dtor
}
