#include "function.h"

function::function() :A(0.00), B(0.00), C(0.00)
{
	cout << "Программа запускается . . . " << this << endl;
}

function::function(double a, double b, double c)
{
	cout << "Введите коэффициент A = "; 
	cin >> a;
	cout << "Введите коэффициент B = "; 
	cin >> b;
	cout << "Введите коэффициент C = "; 
	cin >> c;
	A = a; 
	B = b; 
	C = c;
}

function::function(const function& ob)
{

	double delta;
	double x1, x2;
	if (ob.A != 0)
	{
		delta = ob.B * ob.B - 4 * ob.A * ob.C;
		if (delta < 0)
		{
			//No solution 
			cout << "Нет результатов\n";
		}
		else if (delta == 0) {

			//One solution
			cout << "X = " << -ob.B / (2 * ob.A) << endl;
		}
		else
		{
			// two solutions
			x1 = -ob.B - sqrt(delta) / (2 * ob.A);
			x2 = -ob.B + sqrt(delta) / (2 * ob.A);
			cout << "X1 = " << x1 << "   " << "X2 = " << x2 << endl;;
		}
	}
}


function::~function()
{
	cout << "The object has been deleted    " << this << endl;
}
