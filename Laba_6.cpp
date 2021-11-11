#include <cmath>
#include <iostream>

using namespace std;

int n1()
{
   setlocale(LC_ALL, "Russian");
    float A, B, C;
    cout << "Введите точки A и B " << endl;
    cin >> A >> B;
    C = B;
    B = A;
    A = C;
    cout << "Новые значения точек равны: " << A << " " << B;
    return 0; 
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    float A, B, C, A2;
    cout << "Введите точки A и B и C " << endl;
    cin >> A >> B >> C;
    A2 = A;
    A = B;
    B = C;
    C = A2;
    cout << "Новые значения точек равны: " << A << " " << B << " " << C;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    float A, B, C, A2, B2;
    cout << "Введите точки A и B и C " << endl;
    cin >> A >> B >> C;
    A2 = A;
    A = C;
    C = B;
    B = A2;
    cout << "Новые значения точек равны: " << A << " " << B << " " << C;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    float x;
    cout << "Введите x " << endl;
    cin >> x;
    float y = 3 * pow(x, 6) - 6 * pow(x, 2) - 7;
    cout << "Функция равна " << y;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    float x;
    cout << "Введите x " << endl;
    cin >> x;
    float y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    cout << "Функция равна " << y;
    return 0;
}

int n6()
{
    setlocale(LC_ALL, "Russian");
    float A, B;
    cout << "Введите A " << endl;
    cin >> A;
    B = A * A;
    A = B * B * B;
    cout << "A в восьмой степени равно: " << A;
    return 0;
}

int n7()
{
    setlocale(LC_ALL, "Russian");
    float A, B, C;
    cout << "Введите A " << endl;
    cin >> A;
    B = A * A * A;
    C = B * B;
    A = C * C * B;
    cout << "A в восьмой степени равно: " << A;
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер задания 1, 2, 3, 4, 5, 6 или 7: " << endl;
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
    case 7:
        n7();
        break;
    return 0;
    }
}
