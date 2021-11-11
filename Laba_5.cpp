#include <cmath>
#include <iostream>

using namespace std;

int n1()
{
    setlocale(LC_ALL, "Russian");
    float x1, x2, y1, y2;
    cout << "Введите координаты x1 и y1 " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты x2 и y2" << endl;
    cin >> x2 >> y2;
    float rast = sqrt(abs(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
    cout << "Расстояние между точками равно: " << rast << endl;
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    float A, B, C;
    cout << "Введите точку A " << endl;
    cin >> A;
    cout << "Введите точку B " << endl;
    cin >> B;
    cout << "Введите точку C " << endl;
    cin >> C;
    float AC = abs(C) - abs(A);
    float BC = abs(C) - abs(B);
    float SU = AC + BC;
    cout << "Расстояние между точками A и C равно: " << AC << endl;
    cout << "Расстояние между точками B и C равно: " << BC << endl;
    cout << "Сумма этих расстояний равна : " << SU << endl;
    return 0;
}

int n3()
{
    setlocale(LC_ALL, "Russian");
    double A, B, C;
    cout << "Введите точку A " << endl;
    cin >> A;
    cout << "Введите точку B " << endl;
    cin >> B;
    cout << "Введите точку C, которая должна быть расположена между точками A и B " << endl;
    cin >> C;
    if (C < B and A < C)
    {
        double AC = abs(C) - abs(A);
        double BC = abs(B) - abs(C);
        double PR = BC * AC;
        cout << "Произведение AC и BC равно: " << PR << endl;
    }
    else
        cout << "Точка C не лежит между точками A и B ";
    return 0;
}

int n4()
{
    setlocale(LC_ALL, "Russian");
    float x1, y1, x2, y2;
    cout << "Введите координаты первой вершины прямоугольника x1 и y1 " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты противоположной вершины прямоугольника x2 и y2 " << endl;
    cin >> x2 >> y2;
    float AB = abs(y1) - abs(y2);
    float BC = abs(x1) - abs(x2);
    float S = abs(AB * BC);
    float P = abs(2 * (AB + BC));
    cout << "Периметр прямоугольника равен: " << P << endl;
    cout << "Площадь прямоугольника равена: " << S << endl;
    return 0;
}

int n5()
{
    setlocale(LC_ALL, "Russian");
    float x1, y1, x2, y2, x3, y3;
    cout << "Введите координаты первой вершины треугольника x1 и y1 " << endl;
    cin >> x1 >> y1;
    cout << "Введите координаты второй вершины треугольника x2 и y2 " << endl;
    cin >> x2 >> y2;
    cout << "Введите координаты третьей вершины треугольника x2 и y2 " << endl;
    cin >> x3 >> y3;
    float AB = sqrt(abs(pow((x1 - x2), 2) + pow((y1 - y2), 2)));
    float BC = sqrt(abs(pow((x2 - x3), 2) + pow((y2 - y3), 2)));
    float AC = sqrt(abs(pow((x1 - x3), 2) + pow((y1 - y3), 2)));
    float P = AB + BC + AC;
    float p = P / 2;
    float S = sqrt(p * (p - AB) * (p - BC) * (p - AC));
    cout << "Периметр треугольника равен: " << P << endl;
    cout << "Площадь треугольника равена: " << S << endl;
    return 0;
}

int main()
{
    int a;
    setlocale(LC_ALL, "Russian");
    cout << "Введите номер задания 1, 2, 3, 4 или 5: " << endl;
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
    return 0;
    }
}
    
    
