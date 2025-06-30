#ifndef PERSONA_H
#define PERSONA_H
#include <string>
#include "CajaFuerte.h"

class Persona
{
    public:
        Persona();
        Persona (std::string, std::string); // constructor parametrizado
        virtual ~Persona();
        std::string comoTeLlamas();
        std::string dondeVivis();
        void mudarse (std::string);
        void tuCajaFuerteEs (CajaFuerte &);

    protected:

    private:
        std::string ciudad;
        std::string nombre;
        CajaFuerte *miCajaFuerte;
};

#endif // PERSONA_H
