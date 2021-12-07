#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void n1()
{
    int A;
    float B, C;
    B = 0.1;
    cout << "Введите цену за 1 кг конфет: " << endl;
    cin >> A;
    while (B <= 1.1)
    {
        C = A * B;
        cout << "Цена за " << B << " кг конфет " << C << endl;
        B = B + 0.1;
    }
}

void n2()
{
    int N, A;
    A = 0;
    cout << "Введите целое число бОЛЬШЕ 0: " << endl;
    cin >> N;
    double B, N1;
    N1 = 1.1;
    B = 1.2;
    while (A < (N - 1))
    {
        N1 = N1 * B;
        B = B + 0.1;
        A = A + 1;
    }
    cout << N1;
}

void n3()
{
    int N, A, B;
    A = 0;
    cout << "Введите целое число бОЛЬШЕ 0: " << endl;
    cin >> N;
    for (B = 1; B <= (2 * N - 1); B += 2) 
    {
        A = A + B;
        cout << A << endl;
    }
}

void n4()
{
    double A, C, Z;
    int N, B;
    cout << "Введите вещественное число A: " << endl;
    cin >> A;
    cout << "Введите целое число N бОЛЬШЕ 0: " << endl;
    cin >> N;
    C = 0;
    for (B = 0; B <= N; B ++)
    {
        C = C + pow(A, B);
    }
    cout << C;
}

void n5()
{
    double A, C, A2;
    cout << "Введите вещественное число A:" << endl;
    cin >> A;
    int N, i;
    cout << "Введите целое число N: " << endl;
    cin >> N;
    A2 = 1; 
    C = 1;
    for (i = 2; i <= N; ++i)
    {
        A2 *= -A;
        C += A2;
    }
    cout << C;
}

int main()
{
    int A;
    cout << "Введите номер задания 1, 2, 3, 4 или 5: " << endl;
    cin >> A;
    setlocale(LC_ALL, "Russian");
    switch(A)
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
}
