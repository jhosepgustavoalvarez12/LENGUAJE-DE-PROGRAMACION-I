#include <iostream>
using namespace std;

int main()
{
    int donante, receptor;

    cout << "======================================" << endl;
    cout << "     COMPATIBILIDAD DE SANGRE" << endl;
    cout << "======================================" << endl;

    cout << "\nTIPOS DE SANGRE:" << endl;
    cout << "1. O-" << endl;
    cout << "2. O+" << endl;
    cout << "3. A-" << endl;
    cout << "4. A+" << endl;
    cout << "5. B-" << endl;
    cout << "6. B+" << endl;
    cout << "7. AB-" << endl;
    cout << "8. AB+" << endl;

    cout << "\nIngrese el tipo de sangre del DONANTE: ";
    cin >> donante;

    cout << "Ingrese el tipo de sangre del RECEPTOR: ";
    cin >> receptor;

    cout << "\n--------------------------------------" << endl;

    switch(donante)
    {
        case 1: // O-
            if(receptor >= 1 && receptor <= 8)
            {
                cout << "COMPATIBLE" << endl;
                cout << "O- puede donar a todos los grupos." << endl;
            }
            break;

        case 2: // O+
            if(receptor == 2 || receptor == 4 ||
               receptor == 6 || receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        case 3: // A-
            if(receptor == 3 || receptor == 4 ||
               receptor == 7 || receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        case 4: // A+
            if(receptor == 4 || receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        case 5: // B-
            if(receptor == 5 || receptor == 6 ||
               receptor == 7 || receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        case 6: // B+
            if(receptor == 6 || receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        case 7: // AB-
            if(receptor == 7 || receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        case 8: // AB+
            if(receptor == 8)
            {
                cout << "COMPATIBLE" << endl;
            }
            else
            {
                cout << "NO COMPATIBLE" << endl;
            }
            break;

        default:
            cout << "Tipo de sangre del donante no valido." << endl;
    }

    cout << "--------------------------------------" << endl;

    return 0;
}