#include <iostream>
using namespace std;

int main() {
    int numeros[20];
    int numeroBuscado;

    for (int i = 0; i < 20; i++) {
        cout << "Ingresa los numeros son 20 en total: ";
        cin >> numeros[i];
    }

    cout << "Ingresa el numero que deseas buscar: ";
    cin >> numeroBuscado;

    for (int i = 0; i < 20; i++) {
        if (numeros[i] == numeroBuscado) {
            cout << "El numero " << numeroBuscado << " se encuentra en el arreglo." << endl;
            return 0; 
        }
    }

    cout << "El numero " << numeroBuscado << " no se encuentra en el arreglo." << endl;
    return 0;
}