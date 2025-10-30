#include <iostream>
using namespace std;

int main() {
    int numero, digito, divisor = 1000000;
    int cont3 = 0, suma3 = 0;

    cout << "Ingrese un numero de 7 digitos: ";
    cin >> numero;

    while (divisor >= 1) {
        digito = numero / divisor;
        cout << digito << endl;

        if (digito % 3 == 0) {
            cont3++;
            suma3 += digito;
        }

        numero = numero % divisor;
        divisor = divisor / 10;
    }

    cout << "Cantidad de digitos multiplos de 3: " << cont3 << endl;
    cout << "Suma de digitos multiplos de 3: " << suma3 << endl;

    return 0;
}
