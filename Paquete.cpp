#include "Paquete.h"

Paquete::Paquete(){
    this->largo = 0;
    this->ancho = 0;
    this->prof = 0;
    this->costoK = 0.0;
    this->peso = 0.0;
}

Paquete::Paquete(Persona rem, Persona dest, double costo, int largo, int ancho, int prof, double costok, double peso):Envio(rem, dest, costo){
    this->largo = largo;
    this->ancho = ancho;
    this->prof = prof;
    this->costoK = abs(costok);
    this->peso = abs(peso);
}

int Paquete::getLargo(){
    return this->largo;
}

int Paquete::getAncho(){
    return this->ancho;
}

int Paquete::getProf(){
    return this->prof;
}

double Paquete::getCostoK(){
    return this->costoK;
}

double Paquete::getPeso(){
    return this->peso;
}


int Paquete::setLargo(int largo){
    this->largo = largo;
}

int Paquete::setAncho(int ancho){
    this->ancho = ancho;
}

int Paquete::setProf(int prof){
    this->prof = prof;
}

double Paquete::setCostoK(double costo){
    this->costoK = costo;
}

double Paquete::setPeso(double peso){
    this->peso = peso;
}

double Paquete::calculaCosto(){
    return Envio::calculaCosto() + (this->peso * this->costoK);
}