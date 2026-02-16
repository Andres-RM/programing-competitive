#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    std::ios_base::sync_with_stdio(false);
    std::cin.tie(NULL);

    int n;
    std::cin >> n;

    if (n == 1) {
        std::cout << "1\n";
        return 0;
    }

    if (n <= 3) {
        std::cout << "NO SOLUTION\n";
        return 0;
    }

    int odd = 2;
    int even = 1;
    for (int i = 0; i < n / 2; i++) {
        std::cout << odd << " ";
        odd += 2;
    }
    for (int i = 0; i < (n + 1) / 2; i++) {
        std::cout << even << " ";
        even += 2;
    }

    std::cout << "\n";

    return 0;
}   