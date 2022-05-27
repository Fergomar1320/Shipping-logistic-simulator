#include "Sobre.h"

Sobre::Sobre(){
    this->largo = 0;
    this->ancho = 0;
    this->costoS = 0.0;
}

Sobre::Sobre(Persona rem, Persona dest, double costo, int largo, int ancho, double costoS): Envio(rem, dest, costo){
    this->largo = largo;
    this->ancho = ancho;
    this->costoS = costoS;
}

int Sobre::getLargo(){
    return this->largo;
}

int Sobre::getAncho(){
    return this->ancho;
}

double Sobre::getCostoS(){
    return this->costoS;
}

int Sobre::setLargo(int largo){
    this->largo = largo;
}

int Sobre::setAncho(int ancho){
    this->ancho = ancho;
}

double Sobre::setCostoS(double costoS){
    this->costoS = costoS;
}

double Sobre::calculaCosto(){
    if(this->ancho > 25 && this->largo < 30 || this->ancho > 25 && this->largo > 30 || this->ancho < 25 && this->largo > 30 ||   this->ancho > 30 && this->largo < 25|| this->ancho > 30 && this->largo > 25 || this->ancho < 30 && this->largo > 25){
        return Envio::calculaCosto() + this->costoS;
    }
    else{
        return Envio::calculaCosto();
    }
}