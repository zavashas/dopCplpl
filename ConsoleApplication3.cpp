
#include <iostream>
using namespace std;
int main() {

    setlocale(LC_ALL, "Russian");

    double a, b;

    cout << "Введите значение переменной a: ";
    cin >> a;
    double* p_a = &a;
    *p_a *= 3;
    cout << "Увеличенное в 3 раза значение переменной a: " << a << endl;

    cout << "Введите значение переменной b: ";
    cin >> b;
    double* p_b = &b;
    *p_b /= 3;
    cout << "Уменьшенное в 3 раза значение переменной b: " << b << endl;

    return 0;
}