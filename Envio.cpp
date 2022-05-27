#include "Envio.h"

Envio::Envio(){
    this->costoE = 0.0;
}

Envio::Envio(Persona remitente, Persona destinatario, double costo){
    this->remitente = remitente;
    this->destinatario = destinatario;
    this->costoE = costo;
}

Persona Envio::getRemitente(){
    return this->remitente;
}

Persona Envio::getDestinatario(){
    return this->destinatario;
}

double Envio::getCosto(){
    return this->costoE;
}

void Envio::setRemitente(Persona remitente){
    this->remitente = remitente;
}

void Envio::setDestinatario(Persona destinatario){
    this->destinatario = destinatario;
}

void Envio::setCosto(double costo){
    this->costoE = costoE;
}

double Envio::calculaCosto(){
    return this->costoE;
}