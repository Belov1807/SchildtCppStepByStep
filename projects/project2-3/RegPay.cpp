/*
 * Проект 2-3
 * Вычисление регулярного платежа по ссуде.
*/
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    // Начальная сумма ссуды.
    double Principal;
    // Ставка процента по ссуде (пр: 0.075).
    double IntRate;
    // Число платежей в год.
    double PayPerYear;
    // Число лет, на которые выдана ссуда.
    double NumYears;
    // Регулярный платеж.
    double Payment;
    // Временные рабочие переменные.
    double numer, denom;
    // Основание и порядок для вызова функции pow().
    double b, e;
    // Полная сумма процентов, выплаченных за все время существования ссуды.
    double principalAllPeriod;

    cout << "Введите сумму суды: ";
    cin >> Principal;

    cout << "Введите процентную ставку (например, 0.075): ";
    cin >> IntRate;

    cout << "Введите число платежей в год: ";
    cin >> PayPerYear;

    cout << "Введите число лет: ";
    cin >> NumYears;

    numer = IntRate * (Principal / PayPerYear);
    e = - (PayPerYear * NumYears);
    b = (IntRate / PayPerYear) + 1;

    denom = 1 - pow(b, e);

    Payment = numer / denom;

    principalAllPeriod = (Payment * PayPerYear * NumYears) - Principal;

    cout << "Платеж составит " << Payment << endl;
    cout << "Полная сумма процентов, выплаченных за все время существования ссуды: " << principalAllPeriod << endl;

    return 0;
}
