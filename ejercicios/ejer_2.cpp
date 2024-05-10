#include <iostream>

using namespace std;

int main() {
    int i = 100; 

    // Imprimir los números impares en orden descendente desde 100 hasta 1
    cout << "Numeros impares entre 1 y 100:" << endl;
    while (i >= 1) { 
        if (i % 2 != 0) {
          cout << i << endl;
        }
        i--; 
    }
    return 0;
}
