#include <iostream>  
#include <windows.h> 
#include <string> 
#include "Header.h"
using namespace std;
int main()
{
    setlocale(LC_ALL, "Russian");
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    long long m, n, p;
    string M, N, P;
    cout << "Данная программа находит наибольший общий делитель для трёх длинных чисел!" << endl;
    cout << "Введите три числа (m, n, p) (числа должны быть >= 2147483647):" << endl;
    while (true)
    {
        cout << "Введите m: ";
        cin >> M;
        if (proverka(M) && LongLong(M, m))
        {
            break;
        }
        else
        {
            cout << "Ошибка: неверный ввод для m! \nПожалуйста, введите целое неотрицательное число, которое больше или равно 2 147 483 647." << endl;
        }
    }
    if (!LongLong(M, m))
    {
        cout << "Ошибка: неверное преобразование для m!" << endl;
        return 1;
    }
    while (true)
    {
        cout << "Введите n: ";
        cin >> N;
        if (proverka(N) && LongLong(N, n))
        {
            break;
        }
        else
        {
            cout << "Ошибка: неверный ввод для n! \nПожалуйста, введите целое неотрицательное число, которое больше или равно 2 147 483 647." << endl;
        }
    }
    while (true)
    {
        cout << "Введите p: ";
        cin >> P;
        if (proverka(P) && LongLong(P, p))
        {
            break;
        }
        else
        {
            cout << "Ошибка: неверный ввод для p! \nПожалуйста, введите целое неотрицательное число, которое больше или равно 2 147 483 647." << endl;
        }
    }
    long long r = triNOD(m, n, p);
    cout << "Наибольший общий делитель чисел m,n,p = " << r << endl;
    return 0;
}
