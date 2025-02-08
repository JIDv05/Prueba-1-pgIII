#include <iostream>
using namespace std;

int main() {
  
    int ncuenta;
    int Inicial;
    int CargosT;
    int CrediosT;
    int limiteCredito;
    int nuevoSaldo;

    cout << "Ingrese el numero de cuenta del cliente: ";
    cin >> ncuenta;

    cout << "Ingrese el saldo inicial: ";
    cin >> Inicial;

    cout << "Ingrese el total de cargos del mes: ";
    cin >> CargosT;

    cout << "Ingrese el total de creditos aplicados en el mes: ";
    cin >> CrediosT;

    cout << "Ingrese el limite permitido en la cuenta: ";
    cin >> limiteCredito;

    
    nuevoSaldo = Inicial + CargosT - CrediosT;

    
    cout << "El nuevo saldo de la cuenta " << ncuenta << " es: " << nuevoSaldo << endl;

    
    if (nuevoSaldo > limiteCredito) {
        cout << "Se excedio el limite de su credito." << endl;
    } else {
        cout << "El cliente esta dentro del limite de su credito." << endl;
    }

    return 0;
}