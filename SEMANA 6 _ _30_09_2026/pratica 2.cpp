#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    int edad, opcion;
    double costo;

 
    cout << "   CALCULADORA DE TRIAJE Y COSTO MEDICO\n";

    cout << "Ingrese la edad del paciente: ";
    cin >> edad;

    if (edad < 0) {
        cout << "\nEdad no valida.\n";
        return 0;
    }

    cout << "\nSeleccione el nivel de triaje:\n";
    cout << "1. Prioridad I   - Emergencia\n";
    cout << "2. Prioridad II  - Urgencia\n";
    cout << "3. Prioridad III - Atencion prioritaria\n";
    cout << "4. Prioridad IV  - Atencion no urgente\n";
    cout << "Ingrese una opcion: ";
    cin >> opcion;

    switch (opcion) {
        case 1:
            costo = 100.00;
            cout << "\nTRIAJE: PRIORIDAD I - EMERGENCIA\n";
            cout << "Atencion inmediata.\n";
            break;

        case 2:
            costo = 80.00;
            cout << "\nTRIAJE: PRIORIDAD II - URGENCIA\n";
            cout << "Atencion de alta prioridad.\n";
            break;

        case 3:
            costo = 60.00;
            cout << "\nTRIAJE: PRIORIDAD III - ATENCION PRIORITARIA\n";
            cout << "Puede esperar segun la disponibilidad.\n";
            break;

        case 4:
            costo = 40.00;
            cout << "\nTRIAJE: PRIORIDAD IV - ATENCION NO URGENTE\n";
            cout << "Atencion ambulatoria.\n";
            break;

        default:
            cout << "\nOpcion de triaje no valida.\n";
            return 0;
    }

    cout << fixed << setprecision(2);
    cout << "Edad del paciente : " << edad << " anos\n";
    cout << "Costo de consulta : S/ " << costo << "\n";
    cout << "Proceso finalizado.\n";

    return 0;
}
