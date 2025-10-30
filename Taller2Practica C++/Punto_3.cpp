#include <iostream>
using namespace std;

int main() {
    int contador = 0, numero, multiplos15 = 0;

    while (contador < 10) {
        cout << "Ingrese un numero: ";
        cin >> numero;

        if (numero % 15 == 0)
            multiplos15++;

        contador++;
    }

    cout << "Cantidad de multiplos de 15: " << multiplos15 << endl;
    return 0;
}
