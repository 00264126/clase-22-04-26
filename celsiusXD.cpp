#include <iostream>
using namespace std;

int main () {
    float Celsius;
    int c=32;
    float b=1.8;

    cout << "Ingrese los grados en Celsius: ";
    cin >> Celsius;
    //Operacion//
    float resultado=(Celsius * b) + c;

    //Resultados//

    cout << "Su conversion de Celsius a Fahrenheit es: " << resultado;

    return 0;


}