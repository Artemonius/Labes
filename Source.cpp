#include"Header.h"
#include"Time.h"




int main()
{
	system("chcp 1251>nul");
	int siz = 0;
	cout << "������� ������ ���������� : "; cin >> siz;
	int ch = 0;	Vector<Time>v(siz);
	while (true)
	{
		cout << "           1: �������� ��������           \n"
			<< "            2: ������� ��������        \n"
			<< "            3: ����� ����������� �������       \n"
			<< "            4: ������                  \n"
			<< "            5: ��������� ���������            \n";
		cout << "��� ����� : "; cin >> ch;
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
			cout << "��� ����� ����������� \n";
			break;
		}
	}
}