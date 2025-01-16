#include "fun.h"

int main() {
	int a, b, m, n;
	cout << "Дана задача : Выяснить, какое из чисел a^m, b^n больше и на сколько (0 < a, b <= 40000; 0 <  m, n <= 10)." << endl;
	cout << "Введите значения a, m, b, n: "; 
	cin >> a >> m >> b >> n;
	if (a > 40000 or b > 40000 or m > 10 or n > 10 or a < 0 or b < 0 or m < 0 or n < 0) {
		cout << "Ошибка ввода! Читайте внимательно." << endl; //Если числа не подходят к задаче
		return 1;
	}


	// Преобразуем числа a и b в строки для работы с длинными числами
	string str_a = to_string(a);
	string str_b = to_string(b);

	// Вычисляем степени a^m и b^n с использованием функции pow
	string a_pow_m = power(str_a, m);
	string b_pow_n = power(str_b, n);

	// Сравниваем результаты a^m и b^n
	int cmp = compare(a_pow_m, b_pow_n);

	if (cmp == 1) {
		string difference = subtract(a_pow_m, b_pow_n);
		cout << "Число a^m больше числа b^n на: " << difference << "\n";
	}
	else if (cmp == -1) {
		string difference = subtract(b_pow_n, a_pow_m);
		cout << "Число b^n больше числа a^m на: " << difference << "\n";
	}
	else {
		cout << "Число a^m и Число b^n равны." << "\n";
	}

	return 0;
}