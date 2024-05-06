#include <iostream>
using namespace std;
#include <locale>

int main()
{
	setlocale(LC_ALL, "Russian");
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
	float a;
	float c = 0;
	for (float b = 0; b < 10; b++)
	{
		cout << "Введите число ";
		cin >> a;
		if (a > 0)
		{
		c = c + a;	
		}

	}
	cout << c << endl;


}

