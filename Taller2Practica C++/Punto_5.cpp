#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero;
    int sumaPares = 0, sumaImpares = 0, contPares = 0, contImpares = 0;

    while (contador < 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 2 == 0) {
            sumaPares += numero;
            contPares++;
        } else {
            sumaImpares += numero;
            contImpares++;
        }

        contador++;
    }

    cout << "Suma de pares: " << sumaPares << endl;
    cout << "Cantidad de pares: " << contPares << endl;

    if (contImpares > 0)
        cout << "Promedio de impares: " << (sumaImpares / (float)contImpares) << endl;
    else
        cout << "No hay numeros impares." << endl;

    return 0;
}
