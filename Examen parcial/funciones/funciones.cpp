//Angel Cabrera
#include <iostream>
using namespace std;

int sumarElementos(int vector[], int n) {
    int suma = 0;
    for (int i = 0; i < n; i++) {
        suma += vector[i];
    }
    return suma;
}

int main() {
    int n;
    cout << "Introduce el tamanho del vector: ";
    cin >> n;

    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    int suma = sumarElementos(vector, n);
    cout << "La suma de los elementos es: " << suma << endl;

    return 0;
}
