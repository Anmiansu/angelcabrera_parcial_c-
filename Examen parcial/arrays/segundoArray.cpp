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

    cout << "Vector en orden inverso:" << endl;
    for (int i = n - 1; i >= 0; i--) {
        cout << vector[i] << " ";
    }
    cout << endl;

    return 0;
}
