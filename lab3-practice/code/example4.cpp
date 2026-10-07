#include <cstdio>
#include <iostream>
using namespace std;
int main() {
    int quantity;    // количество
    float discount,  // отстъпка
        price,       // единична цена
        total;       // обща сума
    // Въвеждане на единична цена и количество закупени стоки
    printf("Enter price = ");
    cin >> price;
    printf("Enter quantity = ");
    cin >> quantity;
    // Избор на алтернативен вариант за отстъпката
    if (1000 < quantity) {
        discount = 10.0f;
    } else if (100 < quantity) {
        discount = 5.0f;
    } else if (10 < quantity) {
        discount = 2.5f;
    } else {
        discount = 0.0f;
    }

    total = (1.0f - 0.01f * discount) * price * quantity;
    printf("Total = %.2f\n", total);
}