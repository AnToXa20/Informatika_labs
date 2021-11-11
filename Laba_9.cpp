#include <cmath>
#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите количество секунд, прошедших с начала суток: " << endl;
    cin >> A;
    B = A % 60;
    cout << "Количество секунд прошедших с последней минуты: " << B << endl;
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите номер дня в году в диапозоне от 1 до 365: " << endl;
    cin >> A;
    B = A % 7;
    cout << B << endl;
    if (B == 0) 
        cout << "Было Воскресенье " << endl;
    if (B == 1) 
        cout << "Был Понедельник " << endl;
    if (B == 2) 
        cout << "Был Вторник " << endl;
    if (B == 3) 
        cout << "Была Среда " << endl;
    if (B == 4) 
        cout << "Был Четверг " << endl;
    if (B == 5) 
        cout << "Была Пятница " << endl;
    if (B == 6) 
        cout << "Была Суббота " << endl;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    int K, N, B;
    cout << "Введите день недели который был 1го января: " << endl;
    cin >> N;
    cout << "Введите номер дня года от 1 до 365:" << endl; 
    cin >> K;
    B = K % 7;
    cout << B << endl;
    if (B == N) 
        cout << "Было Воскресенье " << endl;
    if (B == N + 1) 
        cout << "Был Понедельник " << endl;
    if (B == N + 2) 
        cout << "Был Вторник " << endl;
    if (B == N + 3) 
        cout << "Была Среда " << endl;
    if (B == N + 4) 
        cout << "Был Четверг " << endl;
    if (B == N + 5) 
        cout << "Была Пятница " << endl;
    if (B == N + 6) 
        cout << "Была Суббота " << endl;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, D;
    cout << "Введите два целых числа, являющиеся сторонами прямоугольника: " << endl;
    cin >> A >> B;
    cout << "Введите целое число, являющееся стороной квадрата: " << endl;
    cin >> C;
    D = (A / C) * (B / C);
    cout << "Количество квадратов, которые влезают в прямоугольник: " << D << endl;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    int A, B;
    cout << "Введите любой год нашей эры " << endl;
    cin >> A;
    B = A / 101 + 1;
    cout << B;
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите задание под номером 1, 2, 3, 4 или 5: " << endl;
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
    }
    return 0;
}
