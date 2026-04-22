#include <iostream>
using namespace std;

int main () {

    int a, b, c, d=3;

    cout << "Inserte los numeros:";
    cin >> a >> b >> c;

    // Operaciones//
    int suma = a + b + c;
    int promedio = suma / d;

    cout << "Su promedio es: " << promedio;
    
    return 0;
}