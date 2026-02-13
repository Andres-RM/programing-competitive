#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    // Imprimir la secuencia hasta llegar a 1
    while (n != 1) {
        cout << n << " ";
        
        if (n % 2 == 0) {
            // Si n es par, dividir entre 2
            n /= 2;
        } else {
            // Si n es impar, multiplicar por 3 y sumar 1
            n = n * 3 + 1;
        }
    }
    
    // Imprimir el último valor (1)
    cout << 1 << endl;
    
    return 0;
}
