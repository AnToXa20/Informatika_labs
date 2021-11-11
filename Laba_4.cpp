#include <cmath>
#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите первую сторону прямоугольника" << endl;
    cin >> a;
    cout << "Введите вторую сторону прямоугольника" << endl;
    cin >> b;
    float S = a * b;
    float P = 2 * (a + b);
    cout << "Площадь прямоугольника равна: " << S << endl;
    cout << "Периметр прямоугольника равна: " << P << endl;
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    float pi, d;
    pi = 3.14; 
    cout << "Введите диаметр окружности" << endl;
    cin >> d;
    float L = pi * d;
    cout << "Диаметр окружности равен: " << L << endl;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите первое число" << endl;
    cin >> a;
    cout << "Введите второе число" << endl;
    cin >> b;
    float sr = (a + b) / 2;
    cout << " Средне арифметическое двух чисел равно: " << sr << endl;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите первое ненулевое число" << endl;
    cin >> a;
    cout << "Введите второе ненулевое число" << endl;
    cin >> b;
    float su = pow(a, 2) + pow(b, 2);
    float rsn = pow(a, 2) - pow(b, 2);
    float prs = pow(a, 2) * pow(b, 2);
    float chas = pow(a, 2) / pow(b, 2);
    cout << "Сумма двух чисел равно: " << su << endl;
    cout << "Разность двух чисел равно: " << rsn << endl;
    cout << "Произведение двух чисел равно: " << prs << endl;
    cout << "Частное двух чисел равно: " << chas << endl;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    float a, b;
    cout << "Введите первое ненулевое число" << endl;
    cin >> a;
    cout << "Введите второе ненулевое число" << endl;
    cin >> b;
    float su = abs(a) + abs(b);
    float rsn = abs(a) - abs(b);
    float prs = abs(a) * abs(b);
    float chas = abs(a) / abs(b);
    cout << "Сумма двух чисел равно: " << su << endl;
    cout << "Разность двух чисел равно: " << rsn << endl;
    cout << "Произведение двух чисел равно: " << prs << endl;
    cout << "Частное двух чисел равно: " << chas << endl;
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер задания 1, 2, 3, 4, 5, 6: " << endl;
    cin >> a;
    switch (a)
    {
    case 1:
        n1();
        break;
    case 2:
        n2();
        break;
    case 3:
        n3();
        break;
    case 4:
        n4();
        break;
    case 5:
        n5();
        break;
    return 0;
    }
}
    
    
