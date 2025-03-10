#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
string nombreArchivo;
cout << "Introduzca el nombre del archivo a crear: ";
cin >> nombreArchivo;


ofstream archivo(nombreArchivo, ios::out | ios::app);

if (!archivo)
{
cout << "Error. No se pudo abrir el archivo" << endl;
system("pause");
return -1;
}

int idCliente = 0;
char nombre[20], apellido[20];
double ingreso;

cout << "Introduce el ID del cliente (0 para terminar): ";
cin >> idCliente;

while (idCliente > 0)
{
cout << "Introduce el nombre: ";
cin >> nombre;
cout << "Introduce el apellido: ";
cin >> apellido;
cout << "Introduce el ingreso: ";
cin >> ingreso;

archivo << idCliente << " "
<< nombre << " "
<< apellido << " "
<< ingreso << endl;

cout << "Introduce el ID del cliente (0 para terminar): ";
cin >> idCliente;
}

archivo.close();
cout << "\nOperación finalizada con éxito.\n\n";
system("pause");

return 0;
}
