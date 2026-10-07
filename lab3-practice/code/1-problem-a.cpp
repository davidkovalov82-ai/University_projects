#include <iostream>

int main() {
    int m, a, b;

    std::cout << "Введите m, a, b: ";
    std::cin >> m >> a >> b;

    if (m == 0 || m == 1) {
        m = a;
        b = b + m;
    } else if (m == 2) {
        b = b + m;
    } else if (m == 3) {
        a = a + m;
    } else if (m == 4) {
        b = b - m;
        m = b;
    } else {
        m = b;
    }

    std::cout << "m = " << m << ", a = " << a << ", b = " << b << '\n';

    return 0;
}