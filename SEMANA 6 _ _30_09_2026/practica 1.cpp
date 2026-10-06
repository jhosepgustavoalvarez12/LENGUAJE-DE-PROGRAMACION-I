#include <iostream>

using namespace std;

int main()
{
    double monto, descuento, descuentoAdicional, descuentoTotal, precioFinal;
    int categoria;

   
    cout << "Ingrese el monto total de la compra";
    cin >> monto;

   
    if (monto <= 0)
    {
        cout << "ERROR: El monto debe ser mayor a 0." << endl;
        return 0;
    }

 
    cout << "\nTipo de cliente:" << endl;
    cout << "1. Cliente Regular" << endl;
    cout << "2. Cliente VIP" << endl;
    cout << "3. Cliente Oro" << endl;
    cout << "Ingrese la categoria: ";
    cin >> categoria;

    
    if (categoria < 1 || categoria > 3)
    {
        cout << "ERROR: La categoria debe estar entre 1 y 3." << endl;
        return 0;
    }

    
    switch (categoria)
    {
        case 1:
            descuento = monto * 0.05;
            break;

        case 2:
            descuento = monto * 0.10;
            break;

        case 3:
            descuento = monto * 0.20;
            break;
    }

  
    descuentoAdicional = 0;

    if (monto > 200)
    {
        descuentoAdicional = monto * 0.05;
    }


    descuentoTotal = descuento + descuentoAdicional;

    precioFinal = monto - descuentoTotal;
   
    cout << "RESULTADOS" << endl;
    
    cout << "Monto de compra: $" << monto << endl;
    cout << "Descuento por categoria: $" << descuento << endl;
    cout << "Descuento adicional: $" << descuentoAdicional << endl;
    cout << "Descuento total aplicado: $" << descuentoTotal << endl;
    cout << "Precio final a pagar: $" << precioFinal << endl;

    return 0;
}
