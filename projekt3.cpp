#include <iostream>
#include <cmath>

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0) return false;
    int limit = static_cast<int>(std::sqrt(n));
    for (int i = 3; i <= limit; i += 2)
        if (n % i == 0) return false;
    return true;
}

int main() {
    int x;
    std::cout << "Fut nje numer: ";
    std::cin >> x;
    if (isPrime(x)) std::cout << x << " eshte numer prim.\n";
    else std::cout << x << " nuk eshte numer prim.\n";
    return 0;
}
