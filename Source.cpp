#include"Iterator.h"
int main()
{
	Vector<int> A(5, 7);
	Vector <int>myvector(5, 8);
	cout << A << endl;
	cin >> A;
	cout << A << endl;
	A[1] = 20;
	cout << A << endl;
	Vector <int>B(5, 5);
	cout << B << endl;
	B = A;
	cout << B << endl;
	A[3] = B[3] + 10;
	cout << A << endl;
	A = A * B;
	cout << A << endl;
	system("pause");
	return 0;
}