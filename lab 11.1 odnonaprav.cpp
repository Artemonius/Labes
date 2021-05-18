#include <iostream>

using namespace std;

struct point
{
    char key;
    point* next;
};

point* make_point(int n)
{
    point* first, * p;
    first = NULL;
    for (int i = n; i > 0; i--)
    {
        p = new(point);
        p->key = char(rand() % 25 + 64);
        p->next = first;
        first = p;
    }
    return first;
}

point* add_point(point* first, char l, char x, int n)
{
    point* p = first;
    point* first2 = make_point(n);
    point* p_lj = first2;
    p_lj->key = p->key;
    while (p->next != NULL)
    {

        if (p->key == l)
        {
            p_lj->key = l;
            p_lj = p_lj->next;
            p_lj->key = x;
        }
        else p_lj->key = p->key;
        p_lj = p_lj->next;
        p = p->next;
    }
    p = first;
    p_lj = first2;
    while (p != NULL && p_lj != NULL)
    {
        p->key = p_lj->key;
        p_lj = p_lj->next;
        p = p->next;
    }
    return first;
}

point* print_point(point* first, bool flag)
{
    point* p = first;
    while (p->next != NULL)
    {
        cout << p->key << " ";
        p = p->next;
    }
    if (flag) cout << p->key;
    return first;
}



int main()
{
    system("chcp 1251>nul");
    cout << "Введите количество элементов списка: ";
    int n;
    bool flag = false;
    cin >> n;
    n++;
    point* first;
    first = make_point(n);
    print_point(first, flag);
    flag = true;
    cout << "Введите элемент после которого нужно добавить элемент: ";
    char l;
    cin >> l;
    cout << "Введите элемент который нужно добавить: ";
    char x;
    cin >> x;
    add_point(first, l, x, n);
    print_point(first, flag);
    return 0;
}