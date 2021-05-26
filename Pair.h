#include <iostream> 
using namespace std;
class Pair
{
public:
	Pair(void);
	Pair(int, double);
	Pair(const Pair&);
	Pair& operator = (const Pair&);
	// ������������� �������� ����� � ������
	friend ostream& operator<<(ostream& out, const Pair&);
	friend istream& operator>>(istream& in, Pair&);
public:
	virtual ~Pair(void) {};
private:
	int M1;		// ������ �����
	double M2;	// ������ �����
};

