#include <iostream>
#include "Persona.h"
#include "CajaFuerte.h"
#include "Ladron.h"

using namespace std;

int main()
{
    Persona unaPersona;
    CajaFuerte unaCajaFuerte;
    Ladron unLadron;

    unaPersona.tuCajaFuerteEs (unaCajaFuerte);
    unaPersona.cobrar (1000000);

    cout << unaPersona.comoTeLlamas () << endl;
    cout << unaPersona.dineroTotal () << endl;

    unLadron.tuObjetivoEs (unaCajaFuerte);
    unLadron.Robar ();

    cout << unaPersona.dineroTotal () << endl;
    return 0;
}
