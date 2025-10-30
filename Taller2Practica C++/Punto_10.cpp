#include <iostream>
using namespace std;

int main() {
    int contador = 0;
    float horas, precioHora, bruto, neto, salud, pension, aporteEmpresa;
    float totalSalud = 0, totalPension = 0, totalAporteEmpresa = 0;

    while (contador < 5) {
        cout << "Trabajador " << contador + 1 << endl;
        cout << "Horas trabajadas: ";
        cin >> horas;
        cout << "Precio por hora: ";
        cin >> precioHora;

        bruto = horas * precioHora;
        salud = bruto * 0.04;
        pension = bruto * 0.04;
        neto = bruto - (salud + pension);
        aporteEmpresa = bruto * 0.04;

        totalSalud += salud;
        totalPension += pension;
        totalAporteEmpresa += aporteEmpresa;

        cout << "Salario neto: " << neto << endl << endl;
        contador++;
    }

    cout << "Total pagado por salud: " << totalSalud << endl;
    cout << "Total pagado por pension: " << totalPension << endl;
    cout << "Aporte total de la empresa a pension: " << totalAporteEmpresa << endl;

    return 0;
}
