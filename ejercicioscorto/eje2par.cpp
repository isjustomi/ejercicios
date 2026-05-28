#include <iostream>
using namespace std;

int main() {
    int numeros[15];
    int mayor, menor;

    for (int i = 0; i < 15; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    mayor = numeros[0];
    menor = numeros[0];

    for (int i = 1; i < 15; i++) {
        if (numeros[i] > mayor) {
            mayor = numeros[i];
        }

        if (numeros[i] < menor) {
            menor = numeros[i];
        }
    }

    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}