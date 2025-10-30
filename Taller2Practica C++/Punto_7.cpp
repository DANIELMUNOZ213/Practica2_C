#include <iostream>
using namespace std;

int main() {
    int numero, digito, divisor = 1000000;

    cout << "Ingrese un numero de 7 digitos: ";
    cin >> numero;

    while (divisor >= 1) {
        digito = numero / divisor;
        cout << digito << endl;
        numero = numero % divisor;
        divisor = divisor / 10;
    }

    return 0;
}
