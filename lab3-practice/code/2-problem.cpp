#include <iostream>

int main(void) {
    double a, b, c;

    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        std::cout << "biggest num = " << a << '\n';
    } else if (b >= a && b >= c) {
        std::cout << "biggest num = " << b << '\n';
    } else if (c >= b && c >= a) {
        std::cout << "biggest num = " << c << '\n';
    }
}