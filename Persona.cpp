#include "Persona.h"

Persona::Persona()
{
    nombre = "Juan";
    ciudad = "Viedma";
}

Persona::Persona(std::string _nombre, std::string _ciudad)
{
    nombre = _nombre;
    ciudad = _ciudad;
}

Persona::~Persona()
{
    //dtor
}

std::string Persona::comoTeLlamas()
{
    return nombre;
}

std::string Persona::dondeVivis()
{
    return ciudad;
}

void Persona::mudarse (std::string unaCiudad) {
    ciudad = unaCiudad;
}
