#include"Time.h"
using namespace std;

int main()
{
	system("chcp 1251>nul");
	Time t1, t2, t3;
	t1.set_min_sec();
	t2.set_min_sec();
	t1.show();
	t2.show();
	t3 = t1 - t2;
	cout << "После вычитания (' - ')" << endl;
	t3.show();
	if (t1 == t2) {
		t1.show();
		cout << " равно " << endl;
		t2.show();
	}
	else {
		t1.show();
		cout << "не равно" << endl;
		t2.show();
	}
}