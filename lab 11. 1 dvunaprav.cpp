#include <iostream>

using namespace std;

struct point
{
    int key;
    point* next;
    point* prev;
};

point* make_point(int n)
{
    point* first, * p;
    first = NULL;
    for (int i = n; i > 0; i--)
    {
        p = new(point);
        p->key = rand() % 50;
        p->next = first;
        first = p;
    }
    return first;
}

int delete_point(point* first)
{
    point* p = first;
    int n = 0;
    while (p != NULL)
    {
        if (p->key % 2 == 0)
        {
            while (p->next != NULL)
            {
                p->key = p->next->key;
                p = p->next;
            }
            n++;
            p = first;
        }
        else p = p->next;
    }
    return n;
}

point* print_point(point* first, int size)
{
    if (first == NULL)return NULL;
    point* p = first;
    int i = 1;
    for (i = 1; i <= size; i++)
    {
        cout << i << ") " << p->key << "\t";
        p = p->next;
    }
    cout << endl;
    return first;
}



int main()
{
    system("chcp 1251>nul");
    cout << "Введите количество элементов списка: ";
    int size;
    cin >> size;
    while (size < 2)
    {
        cout << "Введите количество элементов списка: ";
        cin >> size;
    }
    point* first;
    first = make_point(size);
    print_point(first, size);
    int n = delete_point(first);
    print_point(first, size - n);
    return 0;
}
