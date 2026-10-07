#include <iostream>

int main(void) {
    int a, b, c, d, n;

    std::cout << "Print a, b, c, d, n";
    std::cin >> a >> b >> c >> d >> n;

    if (a > b) {
        c = a;
        if (d == a) {
        } else {
            n = a - b;
        }
    } else {
        if (d > b) {
            n = a;
        } else {
            n = b;
        }
    }
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << ", d = " << d << ", n = " << n
              << '\n';

    return 0;
}