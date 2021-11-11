#include <cmath>
#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите два целых числа, чтобы проверить справедливость неравенства: " << endl;
    cin >> A >> B;
    if (A == B)
    {
        A = 0;
        B = 0;
        cout << "Новое значение переменной A: " << A << endl << "Новое значение переменной B: " << B;
    }
    if (A > B)
    {
        B = A;
        cout << "Новое значение переменной A: " << A << endl << "Новое значение переменной B: " << B << endl;
    }
    else 
    {
        A = B;
        cout << "Новое значение переменной A: " << A << endl << "Новое значение переменной B: " << B << endl;
    }
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    int b, m[3], A; 
    cout << "Введите три числа";
    for(b = 0; b < 3; b++)
    {
        cin >> m[b];
    }
    int i, j, buf;
    int n = sizeof(m) / sizeof(int);
    for(i = 0; i < n - 1; i++){
        for(j = 0; j < n - 1 - i; j++){
            if(m[j] > m[j + 1]){
                buf = m[j];
                m[j] = m[j + 1];
                m[j + 1] = buf;
            }
        }
    }
    A = m[1] + m[2];
    cout << A;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    int x1, y1, x2, y2, x3, y3;
    cout << "Введите координату x и y точки A: " << endl;
    cin >> x1 >> y1;
    cout << "Введите координату x и y точки B: " << endl;
    cin >> x2 >> y2;
    cout << "Введите координату x и y точки C: " << endl;
    cin >> x3 >> y3;
    float AB = abs(sqrt(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
    float AC = abs(sqrt(pow((x1 - x3), 2) + pow((y1 - y3), 2)));
    if (AB > AC)
        cout << "Точка C ближе к точке A и она находится на расстоянии: " << AC;
    else
        cout << "Точка B ближе к точке A и она находится на расстоянии: " << AB;
    if (AB == AC)
        cout << "Точка C и B находятся на одинаковом расстоянии к точке A: " << AC;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    float x1, y1;
    cout << "Введите координаты точки A: " << endl;
    cin >> x1 >> y1;
    if ((x1 > 0) and (y1 > 0))
        cout << "Точка A лежит в 1ой координатной четверти " << endl;
    if ((x1 < 0) and (y1 > 0))
        cout << "Точка A лежит в 2ой координатной четверти " << endl;
    if ((x1 < 0) and (y1 < 0))
        cout << "Точка A лежит в 3й координатной четверти " << endl;
    if ((x1 > 0) and (y1 < 0))
        cout << "Точка A лежит в 4ой координатной четверти " << endl;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "Введите целое число: " << endl;
    cin >> A;
    B = A % 2;
    if (A == 0)
    {
        cout << "Нулевое число";
        C += 2;
    }
    else
    {
        if (A < 0)
            cout << "Отрицательное ";
        else 
            cout << "Положительное ";
        if (B == 0)
            cout << "четное число";
        else
            cout << "нечетное число";
    }
    return 0;
}

int n6()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, D;
    cout << "Введите целое число от 1 до 999: " << endl;
    cin >> A;
    B = A / 100;
    C = A / 10;
    D = A % 2;
    if (D == 0)
        cout << "Четное ";
    else
        cout << "Нечетное ";
    if (C < 1)
        cout << "Однозначное число ";
    else
        if (B < 1)
            cout << "Двузначное число ";
        else
            cout << "Трехзначное число ";
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер задания 1, 2, 3, 4, 5 или 6: " << endl;
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
