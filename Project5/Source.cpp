#include <iostream>
#include <clocale>

using namespace std;

/**
* @brief Лр/ 3 ветвящийся вычислительный процесс
* Задание 2 (Вариант 4)
* Даны два числа требуется найти меньшее из них.
*/
int main() {
	setlocale(LC_ALL, "ru");
	double a, b;
	cout << "Введите числа a и b:";
	cin >> a >> b;

	// Найти меньшее из них
	if (a > b)
	{
		cout << "меньшее число b: " << b;
		return 1;
	}
	if (a < b)
	{
		cout << "меньшее число a: " << a;
		return 1;
	}
	else
		cout << "Числа равны";


}