#include <iostream>
#include <string>

using namespace std;

int main() {
    
    string diasSemana[7] = {"domingo", "lunes", "martes", "miércoles", "jueves", "viernes", "sábado"};
    
 
    string diaBuscado;
    
   
    int opcion;
    cout << "Elige una opcion:\n";
    cout << "1. mostrar Todos los dias de la semana\n";
    cout << "2. Buscar la posicion de un dia especifico\n";
    cout << "Opcion: ";
    cin >> opcion;
    
    if(opcion == 1) {
       
        cout << "Dias de la semana:\n";
        for(int i = 0; i < 7; i++) {
            cout << (i + 1) << ". " << diasSemana[i] << endl;
        }
    } else if(opcion == 2) {
       
        cout << "Introduce el dia de la semana que quieres buscar: ";
        cin >> diaBuscado;
        
        
        bool encontrado = false;
        for(int i = 0; i < 7; i++) {
            if(diaBuscado == diasSemana[i]) {
                cout << "El dia " << diaBuscado << " esta en la posicinn: " << (i + 1) << endl;
                encontrado = true;
                break;
            }
        }
        
        if(!encontrado) {
            cout << "dia no encontrado.\n";
        }
    } else {
        cout << "No existe ese dia.\n";
    }
    
    return 0;
}
