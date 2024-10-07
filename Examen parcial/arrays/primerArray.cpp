//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Introduce el tamanho del vector: ";
    cin >> n;

    int vector[n];
    for (int i = 0; i < n; i++) {
        cout << "Introduce el elemento " << i + 1 << ": ";
        cin >> vector[i];
    }

    cout << "Vector con indices:" << endl;
    for (int i = 0; i < n; i++) {
        cout << "indice " << i << ": " << vector[i] << endl;
    }

    return 0;
}
