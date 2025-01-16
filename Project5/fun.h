#include <iostream>
#include <string>
#include <algorithm>//для reverse(просто перевернуть строку)
using namespace std;

string multiply(const string& num1, const string& num2); // Функция умножения двух длинных чисел (строки)
string power(const string& base, int exponent); // Функция возведения числа (в строковом формате) в степень
string subtract(const string& num1, const string& num2); // Функция вычитания длинных чисел (строк). подобие столбиком вычитание
int compare(const string& num1, const string& num2); // Функция сравнения двух длинных чисел:
