//*******************************************************************************************
/*
*     12636b1313ce091ad55471945ea03767c60b6107
*/
//*******************************************************************************************
#include <iostream>
#include <cstdlib>
#include <locale>
#include <cmath>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(0, "");

	int x, y, a, sum;
	char znak;
    
	cout << "//////////////////////////////////// Калькулятор /////////////////////////////// " << endl;

	cout << " \n 1) Калькулятор... " << endl;
	cout << " \n 2) Выход....  " << endl;      //МЕНЮ!
	cout << " \n 3) Обо мне...... \n " << endl;
	cin >> a;

	
	if (a == 1)
	{
		cout << a << endl;
	}

	else if (a == 3)
	{
		system("start index.html");
		cout << a << endl;
		return 0;
			
	}

	else
	{
		return 0;
	}


	
	cout << " \n Введите знак (+ , - , / , * , ^ , % ; ) \n " << endl;
	cin >> znak;       // Введите знак + - * / % ^

	cout << " \n Введите 1 чесло! \n " << endl;
	cin >> x;     // ВВЕДИТЕ ЛЮБОЕ ЧЕСЛО!

	cout << " \n Введите 2 чесло! \n " << endl;
	cin >> y;      // ВЕДИТЕ 2 ЛЮБОЕ ЧЕСЛО!

	if (znak == '+')
	{
		sum = x + y;
		cout << " \n Ответ = " << sum << endl;
	}

	else if (znak == '-')
	{
		sum = x - y;
		cout << " \n Ответ = " << sum << endl;
	}

	else if (znak == '/')
	{
		sum = x / y;
		cout << " \n Ответ = " << sum << endl;
	}

	else if (znak == '*')
	{
		sum = x * y;
		cout << " \n Ответ = " << sum << endl;
	}

	else if (znak == '%')
	{
		sum = x % y;
		cout << " \n Ответ = " << sum << endl;
	}

	else if (znak == '^')
	{
		sum = pow(x, y);            //ВОЗВОДИМ В СТЕПЕНЬ!
		cout << " \n Ответ = " << sum << endl;
	}

	else
	{
		cout << " \n Не верно! " << endl;        //НЕ ПРАВЕЛЬНЫЙ ВОД!
	}

	system("pause");

	return 0;

}
//*******************************************************************************************
/*
*         12636b1313ce091ad55471945ea03767c60b6107
*/
//*******************************************************************************************