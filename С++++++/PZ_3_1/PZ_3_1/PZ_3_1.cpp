//Даны целые числа a, b, c, являющиеся сторонами некоторого треугольника.
//Проверить истинность высказывания : «Треугольник со сторонами a, b, c является равносторонним»

#include <iostream>
#include<Windows.h>
using namespace std;

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    float a, b, c;
    cout << "введите значение a: ";
    cin >> a;

    cout << "введите значение b: ";
    cin >> b;

    cout << "введите значение c: ";
    cin >> c;

    cout << ((a == b) & (a == c) & (b == c)) << "Треугольник равносторонний";
    return 0;
}