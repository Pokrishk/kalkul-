
#include <iostream>
using namespace std;
int main()
{
    int choi = 0;
    do {
        int choice;
        int a;
        int b;
        int c;
        setlocale(LC_ALL, "RUS");
        cout << "1.Сложение \n2.Вычитание \n3.Умножение \n4.Деление \n5.Возведение в степень \n6.Нахождения квадратного корня \n7.Нахождение 1 процента от числа \n8.Найти факториал числа \n9.Выйти из программы \nЧто хотите сделать?";
        cin >> choice;
        switch (choice)
        {
        case 1:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            cout << "Результат: " << a + b << endl;
            break;
        case 2:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            cout << "Результат: " << a - b << endl;
            break;
        case 3:
            cout << "Введите первое число ";
            cin >> a;
            cout << "Введите второе число ";
            cin >> b;
            cout << "Результат: " << a * b << endl;
            break;
        case 4:
            cout << "Введите делимое ";
            cin >> a;
            cout << "Введите делитель ";
            cin >> b;
            if (b == 0)
            {
                cout << "На 0 делить запрещаю ";
            }
            cout << "Результат: " << a / b << endl;
            break;
        case 5:
            cout << "Введите число ";
            cin >> a;
            cout << "Введите его степень ";
            cin >> b;
            cout << "Результат: " << pow(a, b) << endl;
            break;
        case 6:
            cout << "Введите число, из которого хотите узнать корень ";
            cin >> a;
            if (a < 0) {
                cout << "Нельзя взять корень ";
            }
            cout << "Результат: " << sqrt(a) << endl;
            break;
        case 7:
            cout << "Введите число, от которого вы хотите узнать 1% ";
            cin >> a;
            cout << "Результат: " << a % 100 << endl;
            break;
        case 8:
            int result;
            cout << "Введите число, факториал которого хотите узнать ";
            cin >> a;
            if (a < 0) {
                cout << "Нельзя найти факториал отрицательного числа " << endl;
            }
            else {
                result = 1;
                for (int i = 1; i <= a; i++) {
                    result *= i;
                }
                cout << "Результат: " << result << endl;
                break;
        case 9:
            cout << "Выход...";
            break;
        default:
            cout << "Где-то что-то пошло не так. Давайте заново.";
            choi = 1;
            break;
            };
    }
    } while (choi != 1);
}
