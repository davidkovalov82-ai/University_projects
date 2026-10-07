#include <cstdio>
#include <iostream>

int main(void) {
    int mark;

    printf("Print your mark: ");
    std::cin >> mark;

    if (mark < 0 || mark > 100) {
        printf("Invalid points!\n");
    } else if (mark < 50) {
        printf("You get 2\n");
    } else if (mark >= 50 && mark <= 59) {
        printf("You get 3\n");
    } else if (mark >= 60 && mark <= 69) {
        printf("You get 4\n");
    } else if (mark >= 70 && mark <= 79) {
        printf("You get 5\n");
    } else if (mark >= 80 && mark <= 100) {
        printf("You get 6\n");
    } else {
        printf("You cant get this mark");
    }
    return 0;
}