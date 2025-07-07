#include <iostream>
#include "Persona.h"
#include "CajaFuerte.h"

using namespace std;

int main()
{
    Persona unaPersona;
    CajaFuerte unaCajaFuerte;

    unaPersona.tuCajaFuerteEs (unaCajaFuerte);
    unaPersona.cobrar (1000000);

    cout << unaPersona.comoTeLlamas () << endl;
    cout << unaPersona.dineroTotal () << endl;
    return 0;
}
