#include <cmath>
#include <iostream>
#include <string>

using namespace std;

int n1()
{
    int A, B;
    setlocale(LC_ALL, "Russian");
    cout << "Введите число от 1 до 31: " << endl;
    cin >> A;
    cout << "Введите номер месяца от 1 до 12: " << endl;
    cin >> B;
    string mas[] = { "Первое", "Второе", "Третье", "Четвертое", "Пятое", "Шестое",
    "Седьмое", "Восьмое", "Девятое", "Десятое", "Одиннадцатое", "Тринадцатое", 
    "Четырнадцатое", "Пятнадцатое", "Шестнадцатое", "Семнадцатое", "восемнадцатое", 
    "Девятнадцатое", "Двадцатое", "Двадцать первое", "Двадцать второе", "Двадцать третье", 
    "Двадцать четвертое", "Двадцать пятое", "Двадцать шестое", "Двадцать седьмое", 
    "Двадцать восьмое", "Двадцать девятое", "Тридцатое", "Тридцать первое"};
    string arr[] = {"января", "февраля", "марта", "апреля", "мая", "июня", "июля",
    "августа", "сентября", "октября", "ноября", "декабря"};
    cout << mas[A - 1];
    cout << arr[B - 1];
    return 0;
}

int n2()
{
    setlocale(LC_ALL, "Russian");
    int N, B;
    string C, A;
    cout << "Введите сторону света С, З, Ю или В: " << endl;
    cin >> C;
    if ((C != "С") or (C != "З") or (C != "Ю") or (C != "В"))
    {
        cout << "Вы ввели некорректную сторону света, вы забанены " << endl;
        return 0;
    }
    if (C == "С")
        B = 0;
    if (C == "З")
        B = 1;
    if (C == "Ю")
        B = 2;
    if (C == "В")
        B = 3;
    cout << "Введите цифровую комманду -1, 0 или 1: " << endl;
    cin >> N;
    if ((N > 1) or (N < -1))
    {
        cout << "Неверная комманда, робот продолжает движение " << endl;
        N = 0;
    }
    B = B + N;
    cout << "Введите цифровую комманду -1, 0 или 1: " << endl;
    cin >> N;
    if ((N > 1) or (N < -1))
    {
        cout << "Неверная комманда, робот продолжает движение " << endl;
        N = 0;
    }
    B = B + N;
    cout << "Введите цифровую комманду -1, 0 или 1: " << endl;
    cin >> N;
    if ((N > 1) or (N < -1))
    {
        cout << "Неверная комманда, робот продолжает движение " << endl;
        N = 0;
    }
    B = B + N;
    B = abs(B);
    if ((B == 0) or (B == 4)) 
        cout << "Север";
    if ((B == 1) or (B == 5)) 
        cout << "Запад";
    if ((B == 2) or (B == 6)) 
        cout << "Юг";
    if (B == 3) 
        cout << "Восток";
    return 0;
}

int n3()
{
    int A;
    cout << "Введите колличество учебных заданий от 10 до 40 включительно: " << endl;
    cin >> A;
    if ((A < 10) or (A > 40))
    {
        cout << "Условие задания не выполнено, программа прекращена " << endl;
        return 0;
    }
    string arr[]{"одно ", "два ", "три ", "четыре ", "пять ", "шесть ", "семь ", "восемь ", "девять ",
    "десять ", "одиннадцать ", "двенадцать ", "тринадцать ", "четырнадцать ", "пятнадцать ",
    "шестнадцать ", "семнадцать ", "восемнадцать ", "девятнадцать ", "двадцать "};
    string mas[]{"тридцать ", "сорок "};
    if ((A >= 10) and (A <= 20))
        cout << arr[A - 1] << "учебных заданий";
    if (A == 21)
        cout << arr[19] << arr[0] << "учебное задание";
    if ((A >= 22) and (A <= 24))
        cout << arr[19] << arr[A - 21] << "учебных задания";
    if ((A >= 25) and (A <= 29))
        cout << arr[19] << arr[A - 21] << "учебных заданий";
    if (A == 30)
        cout << mas[0] << "учебных заданий";
    if (A == 31)
        cout << mas[0] << arr[0] << "учебное задание";
    if ((A >= 32) and (A <= 34))
        cout << mas[0] << arr[A - 31] << "учебных задания";
    if ((A >= 35) and (A <= 39))
        cout << mas[0] << arr[A - 31] << "учебных заданий";
    if (A == 40)
        cout << mas[1] << "учебных заданий";
    return 0;
}

int n4()
{
    int A, E, D, S;
    cout << "Введите любое целое число от 100 до 999 включительно: " << endl;
    cin >> A;
    if ((A < 100) or (A > 999))
    {
        cout << "Вы ввели число неправильное число, программа приостановлена " << endl;
        return 0;
    }
    string ed[]{"один ", "два ", "три ", "четыре ", "пять ", "шесть ", "семь ", "восемь ", "девять "};
    string dec[]{"десять ", "двадцать ", "тридцать ", "сорок ", "пятьдесят ", "шестьдесят ", "семьдесят ",
    "восемьдесят ", "девяносто "};
    string sot[]{"сто ", "двести ", "триста ", "четыреста ", "пятьсот ", "шестьсот ", "семьсот ", "вомьсот ",
    "девятьсот "};
    S = A / 100;
    D = (A / 10) % 10;
    E = A % 10;
    if (S != 0)
        cout << sot[S - 1];
    if (D != 0)
        cout << dec[D - 1];
    if (E != 0)
        cout << ed[E - 1];
    return 0;
}

int n5()
{
    cout << "Введите номер года: " << endl;
    int A;
    cin >> A;
    cout << "Тогда был ";
    switch (A % 1984 % 60 / 12)
    {
        case 0:
        cout << "год зален"; 
        break;
        case 1:
        cout << "год красн";
        break;
        case 2:
        cout << "год желт";
        break;
        case 3:
        cout << "год бел";
        break;
        case 4:
        cout << "год черн";
        break;
    }
    switch (A % 1984 % 60 % 12)
    {
        case 0:
        cout << "ой крысы";
        break;
        case 1:
        cout << "ой коровы";
        break;
        case 2:
        cout << "ого тигра";
        break;
        case 3:
        cout << "ого зайца";
        break;
        case 4:
        cout << "ого дракона";
        break;
        case 5:
        cout << "ой змеи";
        break;
        case 6:
        cout << "ой лошади";
        break;
        case 7:
        cout << "ой овцы";
        break;
        case 8:
        cout << "ой обезьяны";
        break;
        case 9:
        cout << "ой курицы";
        break;
        case 10:
        cout << "ой собаки";
        break;
        case 11:
        cout << "ой овцы";
        break;
    }
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
    }
    return 0;
}
