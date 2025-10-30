#include <iostream>
using namespace std;

int main() {
    int contador = 1, numero, mayor, menor;

    cout << "Ingrese el numero 1: ";
    cin >> numero;
    mayor = menor = numero;

    while (contador < 10) {
        contador++;
        cout << "Ingrese el numero " << contador << ": ";
        cin >> numero;

        if (numero > mayor)
            mayor = numero;
        if (numero < menor)
            menor = numero;
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;
    return 0;
}
