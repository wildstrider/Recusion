#include <iostream>
#include <conio.h>
using namespace std;
#define tab "\t"

void elevator(int floor);
int factorial(int n);
double power(double a, int n);
int Fibonacci(int fib);

//#define FACTORIAL
//#define POWER
//#define ELEVATOR
#define FIBONACHI
int main()
{
	setlocale(LC_ALL, "ru");
#ifdef ELEVATOR
	system("cls");
	cout << "hello world\n";
	int floor;
	cout << "на каком вы этаже? "; cin >> floor;
	elevator(floor);
	cout << "еще раз?(y/n):";
	if (_getch() == 'y')main();
#endif 
#ifdef FACTORIAL
	int n; cout << "Введите число: "; cin >> n;
	cout << factorial(n) << endl;
#endif 
#ifdef POWER
	double a; cin >> a;
	int n; cin >> n;
	cout << power(a, n);
#endif 
#ifdef FIBONACHI
	int f; cout << "Введите количество чисел фибоначи: "; cin >> f;
	for (int i = 0; i < f; cout << Fibonacci(i) << tab, i++);
	cout << endl;
	cout << "Введите до какого числа выводить числа фибоначи: "; cin >> f;
	for (int i = 0; Fibonacci(i) < f; cout << Fibonacci(i) << tab, i++);
#endif 
	return 0;
}

void elevator(int floor)
{
	if (floor == 0) {
		cout << "привет подвал" << endl;
		return;
	}
	static int counter = 0;
	cout << "мы на " << floor << " этаже" << "\t";
	cout << counter++ << endl;
	elevator(floor - 1);
	cout << "мы на " << floor << " этаже" << "\t";
	cout << counter++ << endl;
}
int factorial(int n)
{
	return n == 0 ? 1 : n * factorial(n - 1);
}
double power(double a, int n)
{
	return n == 0 ? 1 : n < 0 ? 1 / a * power(a, n + 1) : a * power(a, n - 1);
}
int Fibonacci(int fib)
{
	return fib < 2 ? 1 : Fibonacci(fib - 1) + Fibonacci(fib - 2);
}
