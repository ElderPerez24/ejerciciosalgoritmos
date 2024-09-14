#include <iostream>

using namespace std;

enum Bebida {
    Cafe,
    Te,
    Jugo
};

const double PRECIO_CAFE = 10.0;
const double PRECIO_TE = 8.0;
const double PRECIO_JUGO = 12.0;

int main() {
    int seleccion;
    int cantidad;
    double costoTotal;

    cout << "Bienvenido a nuestra cafeteria\n";
    cout << "Seleccione su bebida:\n";
    cout << "0 - Café (Q10.00)\n";
    cout << "1 - Té (Q8.00)\n";
    cout << "2 - Jugo (Q12.00)\n";
    cout << "Ingrese el numero correspondiente a su eleccion: ";
    cin >> seleccion;

    if (seleccion < 0 || seleccion > 2) {
        cout << "Selección inválida.\n";
        return 1;
    }

    cout << "Ingrese la cantidad que desea consumir: ";
    cin >> cantidad;

    if (cantidad <= 0) {
        cout << "Cantidad inválida.\n";
        return 1;
    }

    switch (seleccion) {
        case Cafe:
            costoTotal = cantidad * PRECIO_CAFE;
            break;
        case Te:
            costoTotal = cantidad * PRECIO_TE;
            break;
        case Jugo:
            costoTotal = cantidad * PRECIO_JUGO;
            break;
    }

    cout << "Su total es: Q" << costoTotal << endl;

    return 0;
}
