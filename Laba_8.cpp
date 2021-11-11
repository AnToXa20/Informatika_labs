#include <cmath>
#include <iostream>
#define _USE_MATH_DEFINES //Число pi

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    float ent, ex;
    cout << "Введите объем файла в байтах: " << endl;
    cin >> ent;
    ex = ceil(ent / 1024);//окруление в большую сторону
    cout << ex;
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C;
    cout << "Введите целое положительное число A, а потом целое число B: " << endl;
    cin >> A >> B;
    C = A / B;
    cout << "Количество отрезков B, размещенных на отрезке A: " << C;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, D;
    cout << "Введите целое положительное число A, а потом целое положительное число B: " << endl;
    cin >> A >> B;
    C = A / B;
    D = A - B * C;
    cout << "Количество отрезков B, размещенных на отрезке A: " << D;
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, D;
    cout << "Введите двухзначное число" << endl;
    cin >> A;
    B = A % 10;
    C = trunc(A / 10);
    D = B * 10 + C;
    cout << "Число наоборот: " << D ;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    int A, B, C, D;
    cout << "Введите трех число" << endl;
    cin >> A;
    B = A % 100;
    C = trunc(A / 100);
    D = B * 10 + C;
    cout << "Число наоборот: " << D;
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
    
    
