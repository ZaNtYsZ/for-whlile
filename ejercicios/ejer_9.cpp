#include <iostream>
using namespace std;

int main() {
    int matriz1[3][3];
    int matriz2[3][3];
    int resultado[3][3];

    // Ingreso de elementos para la primera matriz
    cout << "Ingrese los elementos de la primera matriz (3x3):" << endl;
    int i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz1[i][j];
            j++;
        }
        i++;
    }

    // Ingreso de elementos para la segunda matriz
    cout << "Ingrese los elementos de la segunda matriz (3x3):" << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << "Elemento (" << i + 1 << "," << j + 1 << "): ";
            cin >> matriz2[i][j];
            j++;
        }
        i++;
    }

    // Multiplicación de matrices
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            resultado[i][j] = 0;
            int k = 0;
            while (k < 3) {
                resultado[i][j] += matriz1[i][k] * matriz2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    // Impresión de la matriz resultante
    cout << "La matriz resultante de la multiplicacion es:" << endl;
    i = 0;
    while (i < 3) {
        int j = 0;
        while (j < 3) {
            cout << resultado[i][j] << " ";
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
