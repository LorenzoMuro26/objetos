#ifndef LADRON_H
#define LADRON_H
#include "CajaFuerte.h"

class Ladron
{
    public:
        Ladron();
        Ladron(CajaFuerte &);
        virtual ~Ladron();
        void robar ();

    protected:

    private:
        float robado;
        CajaFuerte* objetivo;
};

#endif // LADRON_H
