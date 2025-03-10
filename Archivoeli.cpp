#include <iostream>
#include <fstream>
#include <cstdlib> 

using namespace std;

int main() {
    string nombreArchivo, nombreCliente, confirmacion;
    
    cout << "Introduzca el nombre del archivo a eliminar: ";
    cin >> nombreArchivo;

  
    ifstream archivo(nombreArchivo);
    if (!archivo) {
        cout << "Error. No se pudo abrir el archivo o no existe." << endl;
        system("pause");
        return -1;
    }

    cout << "Ingrese el nombre del cliente asociado al archivo: ";
    cin >> nombreCliente;

    string id, nombre, apellido;
    double ingreso;
    bool encontrado = false;

   
    while (archivo >> id >> nombre >> apellido >> ingreso) {
        if (nombre == nombreCliente) {
            encontrado = true;
            cout << "Se encontró un cliente con el nombre '" << nombreCliente << "' en el archivo." << endl;
            cout << "ID: " << id << ", Apellido: " << apellido << ", Ingreso: " << ingreso << endl;
            break;
        }
    }

    archivo.close();

    if (!encontrado) {
        cout << "No se encontró un cliente con ese nombre en el archivo. No se eliminará el archivo." << endl;
        system("pause");
        return -1;
    }

   
    cout << "¿Está seguro de que desea eliminar este archivo? (si/no): ";
    cin >> confirmacion;

    if (confirmacion == "si" || confirmacion == "SI" || confirmacion == "Si") {
        if (remove(nombreArchivo.c_str()) == 0) {
            cout << "Archivo eliminado exitosamente." << endl;
        } else {
            cout << "Error. No se pudo eliminar el archivo." << endl;
        }
    } else {
        cout << "Operación cancelada. El archivo no ha sido eliminado." << endl;
    }

    system("pause");
    return 0;
}
