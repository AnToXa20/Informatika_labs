#include <cmath>
#include <iostream>
#include <string>

using namespace std;

void n1()
{
    int N, i, j;
    j = 1;
    cout << "Введите длину массива: ";
    cin >> N;
    int mass[N];
    for (i = 1; i < N; i++)
    {
        mass[i] = j;
        j += 2;
        cout << mass[i] << " ";
    }
    
}

void n2() 
{
    int N, A, D, i;
    cout << "Введите длину массива больше 1: ";
    cin >> N;
    cout << "Введите первый член массива: ";
    cin >> A;
    cout << "Введите знаменатель геометрической прогрессии: ";
    cin >> D;
    int mass[N];
    for (i = 0; i < N; i++)
    {
        A = A * pow(D, i);
        mass[i] = A;
        cout << mass[i] << " ";
    }
}

void n3() 
{
    int N, A, B, j;
    cout << "Введите длину массива больше 2: ";
    cin >> N;
    cout << "Введите первое число: ";
    cin >> A;
    cout << "Введите второе число: ";
    cin >> B;
    int mass[N];
    int D = 1;
    int i = 0;
    mass[i] = A;
    cout << mass[i] << " ";
    mass[i + 1] = B;
    cout << mass[i + 1] << " ";
    for (i = 2; i < N; i++)
    {
        mass[i] = mass[i - 1] + mass[i - 2];
        cout << mass[i] << " ";
    }
}
void n4() 
{
    int N, i;
    cout << "Введите длину массива: ";
    cin >> N;
    float mass[N];
    cout << "Введите массив: " << endl;
    for (i = 0; i < N; i++)
        cin >> mass[i];
    cout << "Массив: ";
    for (i = 0; i < N; i++)
    {
        cout << mass[i] << " ";
        cout << mass[N - i - 1] << " ";
    }
}

void n5() 
{
    int N, i, A;
    cout << "Введите длину массива: ";
    cin >> N;
    int mass[N];
    int Mch[N];
    int Mnch[N];
    int j1 = 0, j2 = 0, NCH = 0, CH = 0;
    cout << "Введите массив: " << endl;
    for (i = 0; i < N; i++)
        cin >> mass[i];
    for (i = 0; i < N; i++)
    {
        A = mass[i] % 2;
        if (A == 0)
        {
            Mch[j1] = mass[i];
            j1++;
            CH++;
        }
        else
        {
            Mnch[j2] = mass[i];
            j2++;
            NCH++;
        }
    }
    cout << "Нечетные числа: " << endl;
    for (i = 0; i < NCH; i++)
    {
        cout << Mnch[i] << " ";    
    }
    cout << endl << "Четные числа: " << endl;
    for (i = (CH - 1); i >= 0; i--)
    {
        cout << Mch[i] << " ";
    }
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
