#include <iostream>

int main() {
    int a, b;
    std::cin >> a >> b;

    if (a == 0) {
        if (b == 0) {
            std::cout << "INF" << std::endl; // Бесконечно много решений
        } else {
            std::cout << "NO" << std::endl; // Решений нет
        }
    }
    else {
        if (b % a == 0) {
            std::cout << -b / a << std::endl; // Единственное целочисленное решение
        } else {
            std::cout << "NO" << std::endl; // Решений нет, так как b не делится на a
        }
    }

    return 0;
}