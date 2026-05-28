#include <iostream>
using namespace std;

int main() {
    int numeros[10];
    int suma = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];

        suma = suma + numeros[i];
    }

    cout << "La suma total es: " << suma << endl;

    return 0;
}