//Angel Cabrera
#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    cout << "Introduce los elementos de la matriz 3x3:" << endl;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Diagonal principal:" << endl;
    for (int i = 0; i < 3; i++) {
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    return 0;
}
