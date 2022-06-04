# include <iostream>
# include <windows.h>
# include <cmath>

using namespace std;

int main()

{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    int a, b, c, d;
    int n;
    cout << "Введите четыре целых числа, одно из которых отлично от трех других: " << endl;
    cout << "Введите первое число a: ";
    cin >> a;
    cout << "Введите второе число b: ";
    cin >> b;
    cout << "Введите третье число c: ";
    cin >> c;
    cout << "Введите четвертое число d: ";
    cin >> d;
    if (a == b && b == c) n = 4;
    else if (a == b && a == d) n = 3;
    else if (a == c && a == d) n = 2;
    else if (b == c && b == d) n = 1;
    cout << "порядковый номер числа, отличного от остальных:  " << n << endl;

    system("pause");
    return 0;
}
