#include <iostream>
#include <clocale>

using namespace std;

/**
* @brief ��/ 3 ���������� �������������� �������
* ������� 2 (������� 4)
* ���� ��� ����� ��������� ����� ������� �� ���.
*/
int main() {
	setlocale(LC_ALL, "ru");
	double a, b;
	cout << "������� ����� a � b:";
	cin >> a >> b;

	// ����� ������� �� ���
	if (a > b)
	{
		cout << "������� ����� b: " << b;
		return 1;
	}
	if (a < b)
	{
		cout << "������� ����� a: " << a;
		return 1;
	}
	else
		cout << "����� �����";


}