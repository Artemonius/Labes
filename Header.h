
#include <iostream>
using namespace std;
template <class T>							// Объявление шаблона класса
class Vector
{
public:
	Vector(int s, T k);						// Конструктор с параметрами:
											// выделяет память под s элементов и заполняет их значениями k
	Vector(const Vector<T>& a);				// Конструктор с параметрами
	~Vector();								// Деструктор для освобождение пространства
	Vector& operator=(const Vector<T>& a);	// Операция присваивания
	T& operator[](int index);				// Операция доступа по индексу
	Vector operator*(const T k);			// Операция умножения на k
	int operator () ();					// Операция, возвращающая длину вектор
	friend ostream& operator<< <>(ostream& out, const Vector<T>& a);
	friend istream& operator>> <>(istream& in, Vector<T>& a);
private:
	int size;	// Размер вектора
	T* data;	// Указатель на динамический массив значений вектора
};

// Конструктор с параметрами
template <class T>
Vector<T>::Vector(int s, T k)
{
	size = s;						// Размер вектора
	data = new T[size];				// Создание динамического массива для элементов вектора
	for (int i = 0; i < size; i++)
		data[i] = k;				// Заполнение k элементами
}

// Конструктор копирования
template <class T>
Vector<T>::Vector(const Vector& a)
{
	size = a.size;
	data = new T[size];
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
}

// Деструктор освобождает память, 
// Так как это класс и элементы класса находятся в private, 
// То программа не может автоматически удалить эти элементы
template <class T>
Vector<T>::~Vector()
{
	delete[]data;
	data = 0;
}

//Операция присваивания
template <class T>
Vector<T>& Vector<T>::operator=(const Vector<T>& a)
{
	if (this == &a)return *this;
	size = a.size;
	if (data != 0) delete[]data;	// Удаление старого массива 
									// если в нем есть элементы
	data = new T[size];				// И создание нового
	for (int i = 0; i < size; i++)
		data[i] = a.data[i];
	return *this;
}

// Операция доступа по индексу 
template <class T>
T& Vector<T>::operator[](int index)
{
	if (index < size) return data[index];
	else cout << "\nError! Index>size";
}

// Операция умножения
template <class T>
Vector<T> Vector<T>::operator*(const T k)//*k
{
	Vector<T> temp(size, k);
	for (int i = 0; i < size; ++i)
		temp.data[i] = data[i] * k;
	return temp;
}

// Возвращение размера вектора
template <class T>
int Vector<T>::operator ()()
{
	return size;
}
// Операция вывода
template <class T>
ostream& operator<<(ostream& out, const Vector<T>& a)
{
	for (int i = 0; i < a.size; ++i)
		out << a.data[i] << " ";
	return out;
}

// Операция ввода
template <class T>
istream& operator>>(istream& in, Vector<T>& a)
{
	for (int i = 0; i < a.size; ++i)
		in >> a.data[i];
	return in;
}

