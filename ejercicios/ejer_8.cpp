#include <iostream>

using namespace std;

int main() {
    const int longitud = 5;

    int vector1[longitud];
    int vector2[longitud];
    int i = 0; 

    cout << "Ingrese los elementos del primer vector:" << endl;
    while (i < longitud) { // Bucle para ingresar los elementos del primer vector
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector1[i];
        i++; 
    }

    i = 0; 

    cout << "Ingrese los elementos del segundo vector:" << endl;
    while (i < longitud) { 
        cout << "Elemento " << i + 1 << ": ";
        cin >> vector2[i];
        i++; 

    // Calcular el producto punto
    int producto_punto = 0;
    i = 0; 
    while (i < longitud) { // Bucle para calcular el producto punto
        producto_punto += vector1[i] * vector2[i];
        i++; 
    }

    cout << "El producto punto de los dos vectores es: " << producto_punto << endl;

    return 0;
}
