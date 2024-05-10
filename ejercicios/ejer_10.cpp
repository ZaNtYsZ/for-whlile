#include <iostream>
using namespace std;

int main() {
    int matriz[3][3];

    // Ingreso de elementos para la matriz original
    cout << "Ingrese los elementos de la matriz (3x3):" << endl;
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz[i][j];
            j++;
        }
        i++;
    }

    // Transposición de la matriz
    int matriz_transpuesta[3][3];
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            matriz_transpuesta[j][i] = matriz[i][j];
            j++;
        }
        i++;
    }

    // Impresión de la matriz transpuesta
    cout << "La matriz transpuesta es:" << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << matriz_transpuesta[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
