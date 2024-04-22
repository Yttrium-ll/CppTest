// CppTest.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>		// заголовочный файл стандартной библиотеки с функциями ввода/вывода
#include <string>		// строки

namespace constants
{
	const float pi = 3.1415926;		// константа
}
bool everywhere = true;		// глобальная переменная

using namespace std;
//using std::string;
//using std::cout;
//using std::cin;
//using std::endl;

// функции

void print_hello()				// void - возвращаемого значения нет
{
	cout << "Hello" << endl;
}

int sum_int(int a, int b)					// int - тип возвращаемого значения
{
	int res = a + b;
	return res;
	cout << "Never seen" << endl;		// не будет выполнено
}

// void main() <- точка входа
int main(int argc, char** argv)
{
	// целые числа
	short sh;       // 0..255
	int dInt;          // объявление переменной
	dInt = -1;			// инициализация переменной
	long l;
	cout << "2^5=" << pow(2, 5) << endl;
	unsigned int ui;

	// десятичные дроби (числа с плавающей точкой)
	float fl;
	double d;

	// булевые значения
	bool b;
	b = true;
	b = false;
	b = 1.2f;		// 1.2f - числовой литерал

	{	// локальная область видимости
		bool b1 = true;
		b = true;
		constants::pi;
	}
	everywhere = false;

	// символьные типы
	char ch;        // = unsiged short

	// строки
	string s;
	s = "\tHello\"World\"!\n";	// "\tHello\"World\"!\n" - строковый литерал	

	string sFirst = "a";		// класс строки
	string sSecond = "b";

	string sRes = sFirst + " and " + sSecond;

	cout << sRes << endl;						// вывод
	//cin >> ch;						// ввод
	//cout << ch;

	// массивы
	int arr[3];		// массив из 3х int
	arr[0] = 0;
	arr[1] = 1;
	//arr[2] = 2;

	cout << "arr_0+arr_1=" << arr[0] + arr[1] << "; arr_2=" << arr[2] << endl;

	bool bArr[4] = { true, true, false, false };	// инициализация массивов
	char str[6] = "hello";		// Си-строки

	print_hello();
	int dRes = sum_int(2, 5);
	cout << "sum(2, 5)=" << dRes << endl;

	dInt = -1;
	// условный оператор
	if (dInt > 0)								// > < == >= <= != (не равно) 
	{
		cout << "dInt is positive" << endl;
	}
	else if (dInt == 0)
	{
		cout << "dInt is zero" << endl;
	}
	else
	{
		cout << "dInt is negative" << endl;
	}

	ch = 'd';
	// оператор выбора
	switch (ch)
	{
	case 'd':
	{
		cout << "ch = d" << endl;
		break;
	}
	case 'c':
	{
		cout << "ch = c" << endl;
		break;
	}
	case 'e':
	{
		cout << "ch = e" << endl;
		break;
	}
	default:
	{
		cout << "ch = ?" << endl;
		break;
	}
	}

	dInt++;		// dInt = dInt + 1 - инкремент
	dInt--;		// dInt = dInt - 1 - декремент

	dInt += 2;	// dInt = dInt + 2 - инкремент
	dInt -= 3;	// dInt = dInt - 3 - декремент
	dInt *= 3;	// dInt = dInt * 3
	dInt /= 3;	// dInt = dInt / 3

	cout << endl;
	// Циклы
	// for(инициализация счетчика; условие выполнения цикла; изменение счетчика)
	for (int i = 0; i < 10; i++)			// i - счетчик
	{
		if (i == 5) continue;
		cout << i << "^2" << "=" << i*i << endl;
		if (i == 6) break;
	}
	cout << endl;
	for (int i=0;;i+=5)		// условия нет - потенциально бесконечный цикл
	{
		if (i >= 6) break;
		cout << i << "^2" << "=" << i * i << endl;
	}
	cout << endl;


	cout << "Bye World" << endl;
	return 0;
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
