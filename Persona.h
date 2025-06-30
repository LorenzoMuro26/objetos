#ifndef PERSONA_H
#define PERSONA_H
#include <string>

class Persona
{
    public:
        Persona();
        Persona(std::string, std::string);
        virtual ~Persona();
        inline std::string getNombre() {return nombre;}
        std::string comoTeLlamas();
        std::string dondeVivis();
        void mudarse (std::string);

    protected:

    private:
        std::string ciudad;
        std::string nombre;
};

#endif // PERSONA_H
