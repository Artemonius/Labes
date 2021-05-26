#include "Header.h" 
#include "Pair.h" 
#include <iostream> 
using namespace std;

void main()
{
	system("chcp 1251>nul");
	int s;
	cout << "������� ������: ";
	cin >> s;
	while (s < 1)
	{
		cout << "������� ������: ";
		cin >> s;
	}
	Vector<int>A(s, 0);					// ���������� ������� A � �������� s ������ 
	cout << "��������� ������ A: " << endl;
	cin >> A;								// ���������� A 
	cout << "������ �: " << A << endl;
	Vector <int>B(10, 5);				// ���������� ������� B �������
	cout << "������ B: " << B << endl;
	B = A;								// ������������ ������� B ������� A
	cout << "������ B ����� ����������������: " << B << endl;
	cout << "A[2] = " << A[2] << endl;	// ������ �� �������
	cout << "������ ������� A = " << A() << endl;	// ����� ������� ������� A
	cout << "B[1] " << B[1] << " * " << "A[4] " << A[4] << " = " << B[1] * A[4] << endl;
	Vector<char> D(s, 0);
	cout << "��������� ����� Vector ���� char: " << endl;
	cin >> D;
	Vector<double> E(s, 0);
	cout << "��������� ����� Vector ���� double: " << endl;
	cin >> E;
	Vector<float> F(s, 0);
	cout << "��������� ����� Vector ���� float: " << endl;
	cin >> F;
	cout << "������ ���� char: " << D << endl;
	cout << "������ ���� double: " << E << endl;
	cout << "������ ���� float: " << F << endl;
	Pair C(0, 0);
	cin >> C;							// ���� ������� � ���� �����
	cout << C << endl;
	C = { 1,0 };						// ������ ������������ ������� C �����
	cout << C;
	~A();
	~B();
	~D();
	~E();
	~F();
}

