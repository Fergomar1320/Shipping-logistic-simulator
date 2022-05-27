#include "Persona.h"
#include <string>

Persona::Persona(){
    this->nombre = "";
    this->ciudad = "";
    this->codigoPostal = "";
}

Persona::Persona(string nombre, string ciudad, string codigoPostal){
    this->nombre = nombre;
    this->ciudad = ciudad;
    this->codigoPostal = codigoPostal;
}

string Persona::getName(){
    return this->nombre;
}

string Persona::getCiudad(){
    return this->ciudad;
}

string Persona::getCp(){
    return this->codigoPostal;
}

void Persona::setName(string nombre){
    this->nombre = nombre;
}

void Persona::setCiudad(string ciudad){
    this->ciudad = ciudad;
}

void Persona::setCp(string codigoPostal){
    this->codigoPostal = codigoPostal;
}