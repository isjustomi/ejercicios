#include <iostream>
using namespace std;

int main() {
    float calificaciones[8];
    float suma = 0;
    float promedio;

    for (int i = 0; i < 8; i++) {
        cout << "Ingresa la calificacion " << i + 1 << ": ";
        cin >> calificaciones[i];

        suma = suma + calificaciones[i];
    }

    promedio = suma / 8;

    cout << "El promedio es: " << promedio << endl;

    return 0;
}