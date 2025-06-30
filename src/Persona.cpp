#include "Persona.h"

Persona::Persona()
{
    nombre = "Juan";
    ciudad = "Viedma";
    efectivo = 0;
    //std::cout << this << std::endl;
}

Persona::~Persona()
{
    //dtor
}

std::string Persona::dondeVivis ()
{
    return ciudad;
}

std::string Persona::comoTeLlamas ()
{
    return nombre;
}

void Persona::mudarse (std::string unaCiudad)
{
    ciudad = unaCiudad;
}

void Persona::tuCajaFuerteEs (CajaFuerte& unaCajaFuerte)
{
    miCajaFuerte = &unaCajaFuerte;
}

void Persona::cobrar (float unSueldo)
{
    efectivo += unSueldo * 0.6;
    miCajaFuerte -> guardar (unSueldo * 0.4);
}

float Persona::dineroTotal ()
{
    return efectivo + miCajaFuerte -> cuantoHay ();
}
