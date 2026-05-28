#include <iostream>
using namespace std;
int main() {
        int opcion = 0;
        float salarioBruto = 0.0;
        float isss = 0.0; 
        float afp = 0.0;
        float renta = 0.0;
        float valorRenta = 0.0;
        float descuentos = 0.0;
        float salarioNeto = 0.0;

    do {
       
        cout << "===CALCULO DE SALARIO NETO ===" << endl;
        cout << "1. Calcular salario neto " << endl;
        cout << "2. Salir " << endl;
        cout << "Seleccione una opcion: "; cin >> opcion; cout << endl;

        switch (opcion) {
            case 1:
               
                cout << "Ingrese el salario bruto mensual:" ;cin >> salarioBruto; cout << endl;
                if (salarioBruto <= 0)
                {
                    cout << "El salario bruto debe ser mayor a cero. Por favor, ingrese un valor válido." << endl;
                }
                else
                {
                    
                    isss = salarioBruto * 0.03;
                    if (isss > 30.0)
                    {
                        isss = 30.0;
                    }
                    
                    // Calcular AFP
                    afp = salarioBruto * 0.0725;

                    // Calcular Renta
                    valorRenta = salarioBruto - isss - afp;
                    if (valorRenta <= 550.0)
                    {
                        renta = 0.0;
                    }
                    else 
                    if (valorRenta > 550.1 && valorRenta <= 895.24)
                    {
                        renta = (valorRenta - 550.0) * 0.1 + 17.67;
                    }
                    else 
                    if (valorRenta > 895.25 && valorRenta <= 2038.10)
                    {
                        renta = (valorRenta - 895.24) * 0.2 + 60.00;
                    }
                    else
                    {
                        renta = (valorRenta - 2038.10) * 0.3 + 288.57;
                    }

                    descuentos = isss + afp + renta;

                    double salarioNeto = salarioBruto - descuentos;
                    cout << "===RESUMEN FINAL===" << endl;
                    cout << "Salario Bruto: $" << salarioBruto << endl;
                    cout << "ISSS: $" << isss << endl;
                    cout << "AFP: $" << afp << endl;
                    cout << "Renta: $" << renta << endl;
                    cout << "Total Descuentos: $" << descuentos << endl;
                    cout << "Salario Neto: $" << salarioNeto << endl;
                    cout << "===================" << endl;

                }
                
                break;
            case 2:
                cout << "Gracias por usar nuestro sistema." << endl;
                break;
            default:
                cout << "Por favor escriba un valor válido" << endl;
        }
    } while (opcion != 2);
    return 0;
}