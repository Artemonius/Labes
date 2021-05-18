#include<iostream>

using namespace std;
void hoar_sort(int* arr, int left, int right, string* name)
{
	setlocale(LC_ALL, "RUS");
	system("chcp 1251>nul");
	int i = left, j = right, pivot = arr[(left + right) / 2];
	while (i <= j)
	{
		while ((arr[i] < pivot) && (i < right))i++;
		while ((pivot < arr[j]) && (j > left))j--;
		if (i <= j)
		{
			swap(arr[i], arr[j]);
			swap(name[i], name[j]);
			i++; j--;
		}
	}
	if (left < j)hoar_sort(arr, left, j, name);
	if (i < right)hoar_sort(arr, i, right, name);
}
void shell_Sort(int* arr, int size, string* name)
{
	setlocale(LC_ALL, "RUS");
	system("chcp 1251>nul");
	for (int gap = size / 2; gap > 0; gap /= 2)
	{
		for (int i = gap; i < size; i++)
		{
			int temp = arr[i];
			string s = name[i];
			int j;
			for (j = i; j >= gap; j -= gap)
			{
				if (temp < arr[j - gap]) {
					arr[j] = arr[j - gap];
					name[j] = name[j - gap];
				}
				else
					break;
			}
			arr[j] = temp;
			name[i] = s;
		}
	}
}
void print(int* arr, int size, string* name)
{
	setlocale(LC_ALL, "RUS");
	system("chcp 1251>nul");
	for (int i = 0; i < size; i++)
	{
		cout << "Ёлемент : " << name[i] << " -> " << arr[i] << "  " << endl;
	}
}
int main()
{
	system("chcp 1251>nul");
	setlocale(LC_ALL, "RUS");
	int size = 0;
	cout << "¬ведите количество книг : "; cin >> size;
	while (size <= 0) {
		cout << "введите правильное количество книг";
		cin >> size;
	}
	int* arr = new int[size];
	string* name = new string[size];
	for (int i = 0; i < size; i++)
	{
		cout << "¬ведите им€ книги" << endl;
		cin >> name[i];
		cout << endl;
		cout << "¬ведите количество страниц в книге ";
		cout << endl;
		//<< i + 1 << endl;
		cin >> arr[i];
		while (arr[i] <= 0) {
			cout << "введите верное количество страниц";
			cin >> arr[i];
		}
	}
	cout << "книги которые вы ввели" << endl;
	print(arr, size, name);
	hoar_sort(arr, 0, size - 1, name);
	cout << "============ћетод ’оара===============" << endl;
	print(arr, size, name);
	shell_Sort(arr, size, name);
	cout << "============ћетод Ўелла===============" << endl;
	print(arr, size, name);
	system("pause");
	return 0;
}