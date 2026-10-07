#include <cstdio>
#include <iostream>

int main(void) {
    int x;
    printf("Print x: ");
    std::cin >> x;

    if (x % 7 != 0) {
        std::cout << "Не се дели точно на 7.\n";
    } else {
        std::cout << "Дели се точно на 7.\n";
    }
    return 0;
}