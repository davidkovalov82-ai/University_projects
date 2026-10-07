#include <cstdio>
#include <iostream>

int main(void) {
    double a, b, c;

    printf("print 3 numbers: ");

    std::cin >> a >> b >> c;

    if (a >= b && a >= c) {
        printf("A %lf the biggest", a);
    } else if (b >= a && b >= c) {
        printf("B %lf is the biggets", b);
    } else if (c >= a && c >= b) {
        printf("C %lf is the biggest", c);
    } else {
        printf("wrong number");
    }
    return 0;
}