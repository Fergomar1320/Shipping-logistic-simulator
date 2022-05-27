#include <iostream>
#include "Paquete.h"
#include "Sobre.h"

using namespace std;

int main(){
    Persona remitente("Fernando", "Zapopan", "45010");
    Persona destinatario("Luis", "Zapopan", "45017");

    cout << "Datos del remitente \n \t NOMBRE: " << remitente.getName() << "\n \t CIUDAD: " << remitente.getCiudad() << "\n \t CP: " << remitente.getCp() << endl;
    cout << "\nDatos del destinatario \n \t NOMBRE: " << destinatario.getName() << "\n \t CIUDAD: " << destinatario.getCiudad() << "\n \t CP: " << destinatario.getCp() << endl;

    Envio Fedex(remitente, destinatario, 150.0);
    cout << "Costo del envio: $" << Fedex.calculaCosto() << endl;

    Paquete caja(remitente, destinatario, 150.0, 20, 20, 25, 2.0, 15.0);
    cout << "Costo del envio del Paquete: $" << caja.calculaCosto() << endl;

    Sobre envelop(remitente, destinatario, 150.0, 30, 15, 25.0);
    cout << "\nCosto del envio del sobre: $" << envelop.calculaCosto() << endl;

    Sobre env2(remitente, destinatario, 150.0, 10, 20, 25.0);
    cout << "Costo del envio del sobre: $" << env2.calculaCosto() << endl;
    return 0;
}