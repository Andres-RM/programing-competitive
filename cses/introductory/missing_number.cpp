#include <iostream>
using namespace std;

int main() {
    long long n;
    cin >> n;
    
    long long suma_esperada = n * (n + 1) / 2;
    
    long long suma_actual = 0;
    for (int i = 0; i < n - 1; i++) {
        long long x;
        cin >> x;
        suma_actual += x;
    }
    
    cout << suma_esperada - suma_actual << endl;
    
    return 0;
}
