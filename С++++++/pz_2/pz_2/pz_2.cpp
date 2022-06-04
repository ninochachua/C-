# include <iostream>
# include<Windows.h>

int main() {
    using namespace std;

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    
    int K;
    int number_day;

    cout << "Введите число K от 1 до 365:  ";
    cin >> K;
    number_day = (K % 7) + 1;
    cout << "Номер дня недели = " << number_day << endl;
    return 0;
}   
