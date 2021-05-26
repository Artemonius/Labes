#include "Header.h" 
#include "Pair.h" 
#include <iostream> 
using namespace std;

void main()
{
	system("chcp 1251>nul");
	int s;
	cout << "Введите размер: ";
	cin >> s;
	while (s < 1)
	{
		cout << "Введите размер: ";
		cin >> s;
	}
	Vector<int>A(s, 0);					// Заполнение вектора A с размером s нулями 
	cout << "Заполните вектор A: " << endl;
	cin >> A;								// Заполнение A 
	cout << "Вектор А: " << A << endl;
	Vector <int>B(10, 5);				// Заполнения вектора B числами
	cout << "Вектор B: " << B << endl;
	B = A;								// Присваивание вектору B вектора A
	cout << "Вектор B после переприсваивания: " << B << endl;
	cout << "A[2] = " << A[2] << endl;	// Доступ по индексу
	cout << "Размер вектора A = " << A() << endl;	// Вывод размера вектора A
	cout << "B[1] " << B[1] << " * " << "A[4] " << A[4] << " = " << B[1] * A[4] << endl;
	Vector<char> D(s, 0);
	cout << "Заполните класс Vector типа char: " << endl;
	cin >> D;
	Vector<double> E(s, 0);
	cout << "Заполните класс Vector типа double: " << endl;
	cin >> E;
	Vector<float> F(s, 0);
	cout << "Заполните класс Vector типа float: " << endl;
	cin >> F;
	cout << "Вектор типа char: " << D << endl;
	cout << "Вектор типа double: " << E << endl;
	cout << "Вектор типа float: " << F << endl;
	Pair C(0, 0);
	cin >> C;							// Ввод вектору С пары чисел
	cout << C << endl;
	C = { 1,0 };						// Другое присваивание вектору C чисел
	cout << C;
	~A();
	~B();
	~D();
	~E();
	~F();
}

