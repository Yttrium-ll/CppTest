#include <iostream>
#include <locale>
#include <string>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");

	// Задача 1 - определение делимости
	/*int number_1;
	int number_2;
	cout << "Введите число ";
	cin >> number_1;
	cout << "Введите число ";
	cin >> number_2;

	if (number_1 % number_2 == 0)
	{
		cout << number_1 << " делится на "<< number_2 << endl;
	}
	else
	{
		cout << number_1 << " не делится на  " << number_2 << endl;
	}*/

	// Задача 2 - сумматор положительных чисел

	//float a;
	//float c = 0;
	//for (int b = 0; b < 10; b++)
	//{
	//	cout << "Введите число ";
	//	cin >> a;
	//	if (a > 0)
	//		c = c + a;
	//}
	//cout << c << endl;

	// Задача N - перевод из двоичной СС в десятичную

	string str;		// 11001010
	cout << "Введите двоичное число: ";
	cin >> str;
	cout << endl;

	int res = 0;

	// последний индекс массива = size - 1
	// [0][1][2][3] -> size() = 4

	for (size_t i = 0; i < str.size(); i++)
	{
		// cout << i << ": " << str[i] << endl;
		if (str[i] == '1')
			res += pow(2, str.size() - 1 - i);
	}

	cout << "Десятичное число: " << res << endl;

	return 0;
}

