#include <iostream>

using namespace std;

int main() {
    int suma_cuadrados = 0;
    int i = 1; 
    // Calcular la suma 
    while (i <= 100) {
        suma_cuadrados += i * i;
        i++; 
    }

    cout << "La suma de los cuadrados entre 1 y 100 es: " << suma_cuadrados << endl;

    return 0;
}
