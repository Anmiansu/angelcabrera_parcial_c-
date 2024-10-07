#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main() {
    int numeroUsuario, numeroAleatorio, intentos = 0;

    // Semilla para números aleatorios
    srand(time(0));
    numeroAleatorio = rand() % 100 + 1;

    cout << "Piensa en un numero entre 1 y 100." << endl;

    do {
        cout << "Adivina el numero: ";
        cin >> numeroUsuario;
        intentos++;

        if (numeroUsuario < numeroAleatorio) {
            cout << "El numero es mayor." << endl;
        } else if (numeroUsuario > numeroAleatorio) {
            cout << "El numero es menor." << endl;
        }
    } while (numeroUsuario != numeroAleatorio);

    cout << "Felicidades! Adivinaste el numero en " << intentos << " intentos." << endl;

    return 0;
}
