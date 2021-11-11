#include <cmath>
#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите два целых числа, чтобы проверить справедливость неравенства: " << endl;
    cin >> A >> B;
    if ((A > 2) and (B <= 3))
        cout << "Неравенство справедливо " << endl;
    else
        cout << "Неравенство несправедливо" << endl;
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "Введите три целых числа, чтобы проверить справедливость неравенства: " << endl;
    cin >> A >> B >> C;
    if ((A < B) and (B < C))
        cout << "Неравенство справедливо " << endl;
    else 
        cout << "Неравенство несправедливо " << endl;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "Введите целое положительное число: " << endl;
    cin >> A;
    B = A % 2;
    C = A % 100;
    if ((B == 0) and (C == A))
        cout << "Число двухзначное и четное " << endl;
    else
        cout << "Число не соответстует условию " << endl;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, C1, D;
    cout << "Введите целое трехзначное число: " << endl;
    cin >> A;
    B = A % 10;
    C1 = trunc(A / 10);
    C = C1 % 10;
    D = trunc(A / 100);
    if (((B < C) and (C < D)) or ((B > C) and (C > D)))
        cout << "Цифры данного числа образуют возрастающую или убывающую последовательность " << endl;
    else 
        cout << "Цифры данного числа не образуют возрастающую или убывающую последовательность" << endl;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, C1, D, D1, E;
    cout << "Введите целое четырехзначное число: " << endl;
    cin >> A;
    B = A % 10;
    C1 = trunc(A / 10);
    C = C1 % 10;
    D1 = trunc(A / 100);
    D = D % 10;
    E = trunc(A / 1000);
    if ((B == E) and (D == C))
        cout << "Число читается одинаково слева направо и справа налево " << endl;
    else 
        cout << "Число НЕ читается одинаково слева направо и справа налево " << endl;
    return 0;
}

int n6()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "Введите три целых числа, которые являются сторонами треугольника: " << endl;
    cin >> A >> B >> C;
    if ((pow(A, 2) == pow(B, 2) + pow (C, 2)) or (pow(B, 2) == pow(A, 2) + pow (C, 2)) or (pow(C, 2) == pow(B, 2) + pow (A, 2)))
        cout << "Треугольник прямоугольный " << endl;
    else 
        cout << "Треугольник непрямоугольный " << endl;
    return 0;
}

int n7()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "Введите три целых числа, которые являются сторонами треугольника: " << endl;
    cin >> A >> B >> C;
    if ((A < B + C) and (B < A + C) and (C < A + B))
        cout << "Треугольник существует " << endl;
    else 
        cout << "Треугольник не существует " << endl;
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите задание под 1, 2, 3, 4, 5, 6 или 7: " << endl;
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
    }
    return 0;
}
