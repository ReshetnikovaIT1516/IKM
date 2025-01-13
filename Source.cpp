#include <iostream>  
#include <windows.h> 
#include <string> 
#include "Header.h"
using namespace std;
long long dvaNOD(long long a, long long b) //Функция для нахождения НОД двух чисел
{
    while (b != 0)
    {
        long long t = b;
        b = a % b;
        a = t;
    }
    return a;
}
long long triNOD(long long m, long long n, long long p) //Функция для нахождения НОД трех чисел
{
    return  dvaNOD(dvaNOD(m, n), p);
}
bool proverka(const string& s)
{
    if (s.empty())
    {
        return false;
    }
    if (s[0] == '0')
    {
        cout << "Число не может начинаться с нуля!\n";
        return false;
    }
    if (s[0] == '-')
    {
        cout << "Число не может быть отрицательным!\n";
        return false;
    }
    for (char ch : s)
    {
        if (ch < '0' || ch > '9')
        {
            return false;
        }
    }
    if (s.length() > 10 || (s.length() == 10 && s >= "2147483647")) // Проверка на значение не меньше INT_MAX
    {
        return true;
    }
    else // Если меньше 10 цифр, проверяем значение
    {

        cout << "Число должно быть больше или равно " << INT_MAX << "!\n";
        return false;
    }
    return true;
}
bool LongLong(const string& str, long long& out) // Функция для преобразования строки в long long 
{
    out = 0;
    size_t startIndex = 0;

    for (size_t i = startIndex; i < str.length(); ++i)
    {
        if (str[i] < '0' || str[i] > '9')
        {
            return false;
        }
        out = out * 10 + (str[i] - '0');
    }

    return true;
}