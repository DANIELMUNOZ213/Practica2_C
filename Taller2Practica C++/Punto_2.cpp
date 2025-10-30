#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    int numero, mayor, menor;
    bool hayNegativo = false;

    while (contador < 10) {
        cout << "Ingrese un numero distinto de cero: ";
        cin >> numero;

        if (numero == 0) {
            cout << "Error: no se permite el cero." << endl;
            continue; // vuelve a pedir el número sin aumentar contador
        }

        if (contador == 0) {
            mayor = menor = numero;
        }

        if (numero > mayor) mayor = numero;
        if (numero < menor) menor = numero;

        if (numero < 0) hayNegativo = true;

        contador++;
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    if (hayNegativo)
        cout << "Se ingreso al menos un numero negativo." << endl;

    return 0;
}