#include"Vector.h"
template<class T>
class Iterator
{
public:
	int* element;

public:
	Iterator() :element(NULL) {}
	Iterator(Vector<T>& ob, int index)
	{
		element = ob.data[index];
	}
	Iterator& operator+(Vector<T>& ob)
	{

		for (int i = 0; i < ob.size; i++)
		{
			this->element = element + ob.data[i];
		}
		return *this;
	}
	Iterator& operator+(int intiger)
	{
		return *this + intiger;
	}
};