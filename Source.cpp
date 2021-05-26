#include"HTM.h"
#include <iostream>
using namespace std;

int main()
{
	HTM ob;
	double x = 0; 
	int y = 0;
	ob.read(x, y);
	ob.calculat();
	ob.print();
	system("pause");
	return 0;
}