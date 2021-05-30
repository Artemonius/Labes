#include"Header.h"
#include"Time.h"




int main()
{
	system("chcp 1251>nul");
	int siz = 0;
	cout << "Введите размер контейнера : "; cin >> siz;
	int ch = 0;	Vector<Time>v(siz);
	while (true)
	{
		cout << "           1: Добавить элементы           \n"
			<< "            2: Удалить элементы        \n"
			<< "            3: Найти минимальный элемент       \n"
			<< "            4: Печать                  \n"
			<< "            5: Завершить программу            \n";
		cout << "Ваш выбор : "; cin >> ch;
		switch (ch)
		{
		case 1:
		{

			v.add_element();
			break;
		}
		case 2:
		{
			v.delete_element();
			break;
		}
		case 3:
		{
			//st.maximum_element();
			break;
		}
		case 4:
		{
			v.print();
			break;
		}
		case 5:
		{
			system("pause");
			return 0;
			break;
		}
		default:
			cout << "Ваш выбор некорректен \n";
			break;
		}
	}
}