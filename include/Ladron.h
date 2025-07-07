#ifndef LADRON_H
#define LADRON_H
#include "CajaFuerte.h"

class Ladron
{
    public:
        Ladron();
        virtual ~Ladron();
        void Robar ();
        void tuObjetivoEs (CajaFuerte &);

    protected:

    private:
        CajaFuerte* Objetivo;
        float robado;

};

#endif // LADRON_H
