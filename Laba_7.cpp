#include <cmath>
#include <iostream>
#define _USE_MATH_DEFINES //Число pi

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    double a, A;
    double pi;
    pi = M_PI;
    cout << "Введите угол в градусах: " << endl;
    cin >> a;
    A = a / (180 / pi);
    cout << "Значение угла в радианах: " << A;
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    double a, A;
    double pi;
    pi = M_PI;
    cout << "Введите угол в радианах: " << endl;
    cin >> a;
    A = a * (180 / pi);
    cout << "Значение угла в градусах: " << A;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    float X, A, Y, B1;
    cout << "Введите X кг конфет, а потом цену в A рублей: " << endl;
    cin >> X >> A;
    float B = A / X;
    cout << "1 кг конфет стоит: " << B << endl;
    cout << "Введите Y кг конфет, чтобы узнать сколько они стоят в цене A: " << endl;
    cin >> Y;
    B1 = Y * B;
    cout << "Столько стоит Y кг конфет: " << B1;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    float V1, V2, S, T, SK;
    cout << "Введите скорость первого авто, а потом скорость второго: " << endl;
    cin >> V1 >> V2;
    cout << "Введите расстояние между авто: " << endl;
    cin >> S;
    cout << "Введите время в часах в течение которого авто будут отдаляться друг от друга: " << endl;
    cin >> T;
    SK = T * (V1 + V2) + S;
    cout << "На столько отдалились автомобили друг от друга: " << SK << endl;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    float A, B, x;
    cout << "Введите первый коэффициент, неравный нулю а потом второй: " << endl;
    cin >> A >> B;
    x = -B / A;
    cout << "x равен: " << x;
    return 0;
}

int n6()
{
    setlocale(LC_ALL, "Russian");
    float A1, B1, A2, B2, C1, C2, x, y;
    cout << "Введите коэффициенты A1, B1, C1: " << endl;
    cin >> A1 >> B1 >> C1;
    cout << "Введите коэффициенты A2, B2, C2: " << endl;
    cin >> A2 >> B2 >> C2;
    x = (C1 - B1 * ((C2 - A2 * x) / B2)) / A1;
    y = ((C2 - A2 * x) / B2);
    cout << "X равно: " << x << endl;
    cout << "Y равно: " << y << endl;
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите задание под №1 или №2 или №3 или №4 или №5 или №6: " << endl;
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
    case 6:
        n6();
        break;
    }
    return 0;
}
    
    
