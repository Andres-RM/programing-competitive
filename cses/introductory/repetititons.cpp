#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string dna;
    cin >> dna;
    int count = 1;
    int max_count = 1;
    for (size_t i = 1; i < dna.size(); i++) {
        if (dna[i] == dna[i - 1]) {
            count++;
        } else {
            count = 1;
        }
        max_count = max(max_count, count);
    }
    cout << max_count << endl;
    return 0;
}