#include <iostream>
using namespace std;

int main() {
    int numeros[12];

    for (int i = 0; i < 12; i++) {
        cout << "Ingresa el numero " << i + 1 << ": ";
        cin >> numeros[i];
    }

    cout << "Numeros en orden inverso:" << endl;

    for (int i = 11; i >= 0; i--) {
        cout << numeros[i] << endl;
    }

    return 0;
}