#include <iostream>

using namespace std;

int main() {
    int suma_pares = 0;
    int i = 100; 
    // Sumar los números pares
    while (i <= 200) { // Mientras i esté en el rango de 100 a 200
        if (i % 2 == 0) { // Si el número es par
            suma_pares += i;
        }
        i++; 
    }

    cout << "La suma de los numeros pares entre 100 y 200 es: " << suma_pares << endl;

    return 0;
}
