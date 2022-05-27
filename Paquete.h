#ifndef PAQUETE_H  
#define PAQUETE_H
#include "Envio.h"

using namespace std;

class Paquete: public Envio{
    public:
        Paquete();
        Paquete(Persona, Persona, double, int, int, int, double, double);

        int getLargo();
        int getAncho();
        int getProf();
        double getCostoK();
        double getPeso();

        int setLargo(int);
        int setAncho(int);
        int setProf(int);
        double setCostoK(double);
        double setPeso(double);

        double calculaCosto();

    private:
        int largo, ancho, prof;
        double costoK, peso;
};

#endif