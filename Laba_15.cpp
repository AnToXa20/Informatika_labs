#include <cmath>
#include <iostream>
#include <string>

using namespace std;


void PowerA3(double A, double &B) //Функция для первого задания
{
    B = A * A * A;
}

int Sign(float X) //Функция для второго задания
{
    if (X < 0)
        return -1;
    if (X == 0)
        return 0;
    if (X > 0)
        return 1;
}

float RingS(float R1, float R2) //Функция для третьего задания
{
    float pi = 3.14;
    float S = 3.14 * (pow(R1, 2) - pow(R2, 2));
    return S;
}

int Quarter(int X, int Y) //Функция для четвертого задания
{
    if ((X > 0) and (Y > 0))
        return 1;
    if ((X < 0) and (Y > 0))
        return 2;
    if ((X < 0) and (Y < 0))
        return 3;
    if ((X > 0) and (Y < 0))
        return 4;
}

double Fact2(int N) //Функция для пятого задания
{ 
    int F = 1;
    for (; N > 0; N -= 2)
        F *= N;
    return F;
}

void n1()
{
    int i;
    double mass[5];
    cout << "Введите 5 чисел, которые возведутся в 3ю степень " << endl;
    for (i = 0; i < 5; i++)
    {
        cout << "число: ";
        cin >> mass[i];
        PowerA3(mass[i], mass[i]);
        cout << "Третья степень: " << mass[i] << endl;
    }
}

void n2() 
{
    float A, B;
    cout << "Введите 2 вещественных числа: " << endl;
    cin >> A;
    cin >> B;
    cout << "Ответ: " << Sign(A) + Sign(B);
}

void n3() 
{
    int i;
    float mass[3];
    float arr[3];
    cout << "Введите  " << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "Внешний радиус: ";
        cin >> mass[i];
        cout << "Внутренний радиус: ";
        cin >> arr[i];
        cout << "Площадь кольца: " << RingS(mass[i], arr[i]) << endl;
    }
}
void n4()
{
    int i;
    float massX[3];
    float massY[3];
    cout << "Введите координату " << endl;
    for (i = 0; i < 3; i++)
    {
        cout << "X: ";
        cin >> massX[i];
        cout << "Y: ";
        cin >> massY[i];
        cout << "Номер координатной четверти: " << Quarter(massX[i], massY[i]) << endl;
    }
}

void n5() 
{
    int N;
    cout << "Введите число: ";
    cin >> N;
    cout << "Двойной факториал этого числа: " << Fact2(N) << endl;
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
