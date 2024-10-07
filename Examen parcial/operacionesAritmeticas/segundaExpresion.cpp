#include <iostream>
using namespace std;

int main() {
    double a, b, c, d, resultado;

    cout << "Introduce el valor de a: ";
    cin >> a;
    cout << "Introduce el valor de b: ";
    cin >> b;
    cout << "Introduce el valor de c: ";
    cin >> c;
    cout << "Introduce el valor de d: ";
    cin >> d;

    resultado = (a + b) / (c + d);

    cout << "El resultado es: " << resultado << endl;

    return 0;
}
