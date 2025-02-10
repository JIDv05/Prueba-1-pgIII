#include <iostream>
#include <string>

using namespace std;

class Vehiculo {
protected:
    string matricula;
    string modelo;
    int potenciaCV;

public:
    Vehiculo(string mat, string mod, int pot) : matricula(mat), modelo(mod), potenciaCV(pot) {}

    string getMatricula() const { return matricula; }
    string getModelo() const { return modelo; }
    int getPotenciaCV() const { return potenciaCV; }
};

class Taxi : public Vehiculo {
private:
    string numeroLicencia;

public:
    Taxi(string mat, string mod, int pot, string numLic) : Vehiculo(mat, mod, pot), numeroLicencia(numLic) {}

    void setNumeroLicencia(string numLic) { numeroLicencia = numLic; }
    string getNumeroLicencia() const { return numeroLicencia; }
};

class Autobus : public Vehiculo {
private:
    int numeroPlazas;

public:
    Autobus(string mat, string mod, int pot, int numPlazas) : Vehiculo(mat, mod, pot), numeroPlazas(numPlazas) {}

    void setNumeroPlazas(int numPlazas) { this->numeroPlazas = numPlazas; }
    int getNumeroPlazas() const { return numeroPlazas; }
};

int main() {
    Vehiculo vehiculo("JIDV05", "Civic", 240);
    Taxi taxi("UYOIS423", "Toyota Corola", 100, "05-05-05");
    Autobus autobus("ERTS452", "BUS", 80, 30);

    cout << "Vehiculo: " << vehiculo.getMatricula() << " " << vehiculo.getModelo() << " " << vehiculo.getPotenciaCV() << "CV" << endl;
    cout << "Taxi: " << taxi.getMatricula() << " " << taxi.getModelo() << " " << taxi.getPotenciaCV() << "CV, Licencia: " << taxi.getNumeroLicencia() << endl;
    cout << "Autobus: " << autobus.getMatricula() << " " << autobus.getModelo() << " " << autobus.getPotenciaCV() << "CV, Plazas: " << autobus.getNumeroPlazas() << endl;

    return 0;
}
