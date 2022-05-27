#ifndef ENVIO_H
#define ENVIO_H
#include "Persona.h"

class Envio{
    public:
        Envio();
        Envio(Persona, Persona, double);

        Persona getRemitente();
        Persona getDestinatario();
        double getCosto();

        void setRemitente(Persona);
        void setDestinatario(Persona);
        void setCosto(double);
        double calculaCosto();

    private:
        Persona remitente;
        Persona destinatario;
        double costoE;
};

#endif