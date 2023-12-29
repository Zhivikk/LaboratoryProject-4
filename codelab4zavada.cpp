#include <iostream>
#include <cmath>
using namespace std;

//Прототипи Функцій
//Функція Першого Завдання
void Sort_Part1(void);
//Функція Другого Завдання
void Part2_NumberRotation(void);
//Функція Третього Завдання
int Part3ChessTable(bool chess);
bool Part3CheckDiapason(unsigned int checkData);
bool ChessPosition(unsigned int x, unsigned int y);


//Функції

void Sort_Part1(void) // Функція Першого Завдання
{
	int A1, B1, C1, A2, B2, C2; // Декларація Змінних

	cout << "Insert A1:" << endl; // Введення даних
	cin >> A1;

	cout << "Insert B1:" << endl; // Введення даних
	cin >> B1;

	cout << "Insert C1:" << endl; // Введення даних
	cin >> C1;

	cout << "First three numbers:" << endl; // Виведення першої трійки цифр
	if (A1 > B1 && A1 > C1) // Обчислення
	{
		cout << "A1:" << A1 << " "; 
		if (B1 > C1)
		{
			cout << "B1:" << B1 << " " << "C1:" << C1 << " " << endl;
		}
		else
		{
			cout << "C1:" << C1 << " " << "B1:" << B1 << " " << endl;
		}
	}
	if (B1 > A1 && B1 > C1)
	{
		cout << "B1: " << B1 << " ";
		if (A1 > C1)
		{
			cout << "A1:" << A1 << " " << "C1:" << C1 << " " << endl;
		}
		else
		{
			cout << "C1:" << C1 << " " << "A1:" << A1 << " " << endl;
		}
	}
	if (C1 > A1 && C1 > B1)
	{
		cout << "C1:" << C1 << " ";
		if (A1 > B1)
		{
			cout << "A1:" << A1 << " " << "B1:" << B1 << " " << endl;
		}
		else
		{
			cout << "B1:" << B1 << "A1:" << A1 << endl;
		}
	}
	cout << "Second three numbers:" << endl; // Виведення другої трійки цифр

	cout << "Insert A2:" << endl; // Введення даних
	cin >> A2;

	cout << "Insert B2:" << endl; // Введення даних
	cin >> B2;

	cout << "Insert C2:" << endl; // Введення даних
	cin >> C2;

	if (A2 > B2 && A2 > C2) // Обчислення
	{
		cout << "A2:" << A2 << " ";
		if (B2 > C2)
		{
			cout << "B2:" << B2 << " " << "C2:" << C2 << " " << endl;
		}
		else
		{
			cout << "C2:" << C2 << " " << "B2: " << B2 << " " << endl;
		}
	}
	if (B2 > A2 && B2 > C2)
	{
		cout << "B2:" << B2 << " ";
		if (A2 > C2)
		{
			cout << "A2:" << A2 << " " << "C2:" << C2 << " " << endl;
		}
		else
		{
			cout << "C2:" << C2 << " " << "A2:" << A2 << " " << endl;
		}
	}
	if (C1 > A1 && C1 > B1)
	{
		cout << "C2: " << C2 << " ";
		if (A1 > B1)
		{
			cout << "A2:" << A2 << " " << "B2:" << B2 << " " << endl;
		}
		else
		{
			cout << "B2:" << B2 << " " << "A2:" << A2 << " " << endl;
		}
	}

}

void Part2_NumberRotation(void)
{
	// Integer 15. Дано тризначне число.
	// Використовуючи операцію ділення та залишку від ділення
	// Перевернути місцями сотні та десятки цього числа


	//декларація змінних
	int number, firstsymb, secondsymb, thirdsymb;
	//Введення даних 
	cout << "number:" << endl;
	cin >> number;
	// Підрахунок, перевірка числа на тризначність
	if (number > 99 && number < 1000) 
	{
		firstsymb = number / 100;
		secondsymb = number % 100 / 10;
		thirdsymb = number % 10;
		// Виведення результату
		cout << "answer:" << secondsymb << firstsymb << thirdsymb;

	}
	else {
		cout << "incorrect number! restart programm";

	}
}
//Функція Шахової Дошки
void Part3ChessTable(void)
{
	//Декларація Змінних
	unsigned int X1, Y1, X2, Y2;
//	X1 = X2 = Y1 = Y2 = 0;
/////////////////////////////////////////
	bool color1, color2;

	cout << "Enter x1:" << endl; // Введення координати
	cin >> X1; 
	
	if (Part3CheckDiapason(X1) == false)
	{
		return;
	}

	cout << "Enter y1:" << endl; // Введення координати
	cin >> Y1;
	if (Part3CheckDiapason(Y1) == false)
	{
		return;
	}

	cout << "Enter x2:" << endl; // Введення координати

	cin >> X2;

	if (Part3CheckDiapason(X2) == false)
	{
		return;
	}

	cout << "Enter Y2:" << endl; // Введення координати

	cin >> Y2;
	if (Part3CheckDiapason(Y2) == false)
	{
		return;
	}


	color1 = ChessPosition(X1, Y1);

	color2 = ChessPosition(X2, Y2); 
	if (color1 == color2) // Перевірка на тотожність клітин
	{
		cout << "Colors are the same."; cout << endl;
	}
	else
	{
		cout << "Colors are different."; cout << endl;
	}
}
//Функція перевірки числа на сумісність
bool Part3CheckDiapason(unsigned int checkData)
{
	if ((checkData >= 1) && (checkData < 9))
	{
		return (true);
	}
	else
	{
		cout << "wrong number/type!";
		return(false);
	}
}

//ВНутрішня Функція Шахової Дошки
bool ChessPosition(unsigned int x, unsigned int y)
{
	bool result;
	if ((x % 2) == 1)//x нечетный
	{
		if ((y % 2) == 1)      //y нечетный
		{
			result = false;
		}
		else                   //y четный
		{
			result = true;
		}
	}
	else             //x четный
	{
		if ((y % 2) == 1)      //y нечетный
		{
			result = true;
		}
		else                   //y четный
		{
			result = false;
		}
	}
	return (result);
}



int main() { // Головна функція (Функція вибору завдань)
	int menu;
	cout << "Task number:";
	cin >> menu;
	switch (menu)
	{ // перемикання між завданнями
	case 1: Sort_Part1(); break; // Завдання 1
	case 2: Part2_NumberRotation(); break; // Завдання 2
	case 3: Part3ChessTable(); break; // Завдання 3
	default: cout << "Wrong task! (Only 1,2,3)" << endl; //повідомлення про помилку
	}
	system("pause");
	return 0;

}
