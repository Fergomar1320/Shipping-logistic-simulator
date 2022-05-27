#ifndef PERSONA_H  
#define PERSONA_H
#include <string>
using namespace std;

class Persona{
    public:
    Persona();
    Persona(string, string, string);
    string getName();
    string getCiudad();
    string getCp();

    void setName(string);
    void setCiudad(string);
    void setCp(string);

    private:
    string nombre;
    string ciudad;
    string codigoPostal;
};

#endif