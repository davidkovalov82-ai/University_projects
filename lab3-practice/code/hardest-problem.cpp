#include <cmath>
#include <cstdio>
#include <iostream>

int main(void) {
    int a, b, c;
    double d, x1, x2;

    std::cout << "Введите a, b, c: ";
    std::cin >> a >> b >> c;

    std::printf("%dx^2%+dx%+d = 0\n", a, b, c);

    if (a == 0 && b == 0) {
        std::cout << "Уравнението е изродено.\n";

        if (c == 0) {
            std::cout << "Всяко x е решение.\n";
        } else {
            std::cout << "Няма решение.\n";
        }
    } else if (a == 0 && b != 0) {
        x1 = -1.0 * c / b;
        std::cout << "x = " << x1 << '\n';
    } else if (a != 0 && b != 0 && c == 0) {
        x1 = -1.0 * b / a;
        x2 = 0;

        std::cout << "x1 = " << x1 << '\n';
        std::cout << "x2 = " << x2 << '\n';
    } else if (a != 0) {
        d = 1.0 * b * b - 4.0 * a * c;

        std::cout << "D = " << d << '\n';

        if (d > 0) {
            x1 = (-b + std::sqrt(d)) / (2.0 * a);
            x2 = (-b - std::sqrt(d)) / (2.0 * a);

            std::cout << "x1 = " << x1 << '\n';
            std::cout << "x2 = " << x2 << '\n';
        } else if (d == 0) {
            x1 = -1.0 * b / (2.0 * a);
            x2 = x1;

            std::cout << "x1 = x2 = " << x1 << '\n';
        } else {
            double re = -1.0 * b / (2.0 * a);
            double im = std::sqrt(-d) / std::fabs(2.0 * a);

            std::cout << "Два комплексни корена:\n";
            std::cout << "x1 = " << re << " + " << im << "i\n";
            std::cout << "x2 = " << re << " - " << im << "i\n";
        }
    }

    return 0;
}