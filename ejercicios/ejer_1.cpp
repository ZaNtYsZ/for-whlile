#include <iostream>

using namespace std;

int main() {
    int n;
    int suma = 0;
    int i = 1; 

    cout << "Ingrese un numero natural: ";
    cin >> n;

    // Calcular la suma 
    while (i <= n) {
        suma += i;
        i++; 
    }

    cout << "La suma de los numeros naturales desde 1 hasta " << n << " es: " << suma << endl;

    return 0;
}
