#include <iostream>

using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;
    int64_t moves = 0;
    int prev;
    cin >> prev;
    for (int i = 1; i < n; i++) {
        int curr;
        cin >> curr;
        if (curr < prev) {
            moves += prev - curr;
            curr = prev;
        }
        prev = curr;
    }
    cout << moves << "\n";
    return 0;
}