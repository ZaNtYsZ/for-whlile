#include<iostream>

using namespace std;

int main() {
    int arreglo1[10];
    int arreglo2[10];
    int arreglo3[10]; 
    int i = 0; 

    cout << "Ingrese los elementos del primer vector:" << endl;
    while (i < 5) { // Bucle para ingresar los elementos del primer vector
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo1[i];
        i++; 
    }

    i = 0; // Reinicio el contador para el segundo bucle

    cout << "Ingrese los elementos del segundo vector:" << endl;
    while (i < 5) { 
        cout << "Elemento " << i + 1 << ": ";
        cin >> arreglo2[i];
        i++; 
    }

    i = 0; 

    // Calcular la suma de los vectores y almacenar el resultado en el tercer vector
    while (i < 5) { // Bucle para calcular la suma y almacenar en el tercer vector
        arreglo3[i] = arreglo1[i] + arreglo2[i];
        i++; 

    // Mostrar el tercer vector, que contiene la suma de los dos vectores 
    cout << "El tercer vector, que contiene la suma de los dos vectores, es:" << endl;
    i = 0; // Reiniciamos el contador para el cuarto bucle
    while (i < 5) { // Bucle para mostrar el tercer vector
        cout << arreglo3[i] << " ";
        i++; 
    }
    cout << endl;

    return 0;
}
