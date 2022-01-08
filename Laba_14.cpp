#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int NOD (int A, int B) //функция для 5го задания
{
    while (A != B)
    {
        if (A > B)
            A -= B;
        else
            B -= A;
    }
    return A;
}

void n1()
{
    int A, B, i, j;
    cout << "Введите 2 целых положительных числа, второе должно быть больше первого: " << endl;
    cin >> A;
    cin >> B;
    for (i = A; i <= B; i++)
    {
        for (j = 1; j < i; j++)
        {
            cout << i << " " << endl;
        }
    }
}

void n2()
{
    float A, B, C;
    cout << "Введите 2 положительных числа, первое должно быть больше второго: " << endl;
    cin >> A;
    cin >> B;
    while ((A - B) >= 0)
        A = A - B;
    cout << A;
}

void n3()
{
    int N, K, A;
    cout << "Введите целое число больше 1: " << endl;
    cin >> N;
    K = 0;
    A = 0;
    while (A < N)
    {
        K = K + 1;
        A += K;
    }
    cout << "Наименьшее из целых чисел K... " << K << endl;
    cout << "Сумма: " << A << endl;
}
void n4() //не готово
{
    float P, S;
    int K = 0;
    S = 1000;
    cout << "Введите месячную процентную ставку от 1 до 24 процентов " << endl;
    cin >> P;
    while (S <= 1100)
        {
            K++;
            S += S * P / 100;
        }
    cout << "Месяцы: " << K << endl;
    cout << "Вклад: " << S << endl;
}

void n5() // не готово
{
    int A, B;
    cout << "Введите первое целое положительное число: " << endl;
    cin >> A;
    cout << "Введите второе целое положительное число: " << endl;
    cin >> B;        
    if (B == 0)
        cout << A << endl;
    else
        cout << NOD(A, B) << endl;
}

void n6()
{
    int N;
    cout << "Введите число Фибоначчи: ";
    cin >> N;
    int F = 0;
    int F1 = 1;
    int F2 = 1;
    int K = 2;
    while (F < N) {
        ++K;
        F = F2 + F1;
        F2 = F1;
        F1 = F;
    }
    cout << "Порядковый номер числа Фибоначчи: " << K;
}

int main()
{
    int A;
    cout << "Введите номер задания 1, 2, 3, 4, 5 или 6: " << endl;
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
        case 6:
        n6();
        break;
    }
}
