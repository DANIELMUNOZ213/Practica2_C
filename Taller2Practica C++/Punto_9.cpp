#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    float horas, precioHora, bruto, neto, impuesto;

    while (contador < 5) {
        cout << "Trabajador " << contador + 1 << endl;
        cout << "Horas trabajadas: ";
        cin >> horas;
        cout << "Precio por hora: ";
        cin >> precioHora;

        bruto = horas * precioHora;
        impuesto = bruto * 0.12;
        neto = bruto - impuesto;

        cout << "Salario neto: " << neto << endl << endl;
        contador++;
    }

    return 0;
}
