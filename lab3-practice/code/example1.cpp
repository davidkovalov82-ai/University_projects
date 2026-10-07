#include <iostream>
using namespace std;
int main() {
    int a, b;  // зададени числа
    int max;   // стойност на по-голямото от две числа
    // Въвеждане на двете цели числа a и b
    printf("a = ");
    cin >> a;
    printf("b = ");
    cin >> b;
    // Избор на по-голямото от двойка числа
    // оператор if с две алтернативи
    if (a > b)
        max = a;
    else
        max = b;
    // Извеждане на стойността на по-голямото число
    cout << "max = " << max << endl;
    return 0;
}