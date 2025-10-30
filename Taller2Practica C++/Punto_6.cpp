#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero;
    int restaImpares = 0, contImpares3 = 0, contPares = 0, sumaPares = 0;
    bool primerImpar = true;

    while (contador < 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 2 != 0) {
            if (primerImpar) {
                restaImpares = numero;
                primerImpar = false;
            } else {
                restaImpares -= numero;
            }

            if (numero % 3 == 0)
                contImpares3++;
        } else {
            sumaPares += numero;
            contPares++;
        }

        contador++;
    }

    cout << "Resta de impares: " << restaImpares << endl;
    cout << "Cantidad de impares multiplos de 3: " << contImpares3 << endl;

    if (contPares > 0)
        cout << "Promedio de pares: " << (sumaPares / (float)contPares) << endl;
    else
        cout << "No hay numeros pares." << endl;

    return 0;
}
