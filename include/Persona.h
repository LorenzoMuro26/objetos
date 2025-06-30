#ifndef PERSONA_H
#define PERSONA_H
#include <iostream>
#include "CajaFuerte.h"

class Persona
{
    public:
        Persona();
        virtual ~Persona();
        std::string dondeVivis ();
        std::string comoTeLlamas ();
        void mudarse (std::string);
        void cobrar (float);
        float dineroTotal ();
        void tuCajaFuerteEs (CajaFuerte&);

    protected:

    private:
        std::string nombre;
        std::string ciudad;
        float efectivo;
        CajaFuerte* miCajaFuerte;
};

#endif // PERSONA_H
