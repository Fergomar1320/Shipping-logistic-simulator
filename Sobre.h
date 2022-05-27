#ifndef SOBRE_H
#define SOBRE_H
#include "Envio.h"

class Sobre: public Envio{
    public:
        Sobre();
        Sobre(Persona, Persona, double, int, int, double);

        int getLargo();
        int getAncho();
        double getCostoS();

        int setLargo(int);
        int setAncho(int);
        double setCostoS(double);

        double calculaCosto();

    private:
        int largo, ancho;
        double costoS; 
};

#endif