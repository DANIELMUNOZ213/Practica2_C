#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero, multiplos15 = 0, multiplos15Pares = 0;

    while (contador < 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 15 == 0) {
            multiplos15++;
            if (numero % 2 == 0)
                multiplos15Pares++;
        }

        contador++;
    }

    cout << "Multiplos de 15: " << multiplos15 << endl;
    cout << "Multiplos de 15 que son pares: " << multiplos15Pares << endl;
    return 0;
}
