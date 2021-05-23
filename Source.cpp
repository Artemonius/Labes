#include <iostream>
#include <list>
#include <fstream>
#include <windows.h>
#include <cmath>
#include <string>
using namespace std;
struct human
{
    string fio;
    string adres;
    string pass;
    human* next = NULL;
};
int fun_hash(string s, int n)
{
    int l;
    l = s.size();
    return (l % n);
}

int main()
{
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);
    int data;
    int size = 0;
    int hash;
    human x;
    human* M;
    human* L;
    string user_search;
    int error = 0;
    while (size < 2 || size>100)
    {
        cout << "������� ������ �������\n";
        cin >> size;
    }
    const int N = size;
    cin.get();
    human* key = new human[size];
    for (int i = 0; i < size; i++)
    {
        key[i].fio = '0';
        key[i].adres = '0';
        key[i].pass = '0';
        key[i].next = NULL;
    }
    ifstream F1("FIO.txt");
    ifstream F2("adres.txt");
    ifstream F3("pass.txt");

    for (int i = 0; i < N; i++)
    {
        getline(F1, x.fio);
        getline(F2, x.adres);
        getline(F3, x.pass);
        x.next = NULL;
        hash = fun_hash(x.fio, N);

        while (hash >= size || key[size - 1].fio != "0")
        {
            human* key_new = new human[size * 2];

            for (int i = 0; i < size; i++)
            {
                key_new[i].fio = key[i].fio;
                key_new[i].adres = key[i].adres;
                key_new[i].pass = key[i].pass;
                key_new[i].next = key[i].next;
            }
            for (int i = size; i < size * 2; i++)
            {
                key_new[i].fio = '0';
                key_new[i].adres = '0';
                key_new[i].pass = '0';
                key_new[i].next = NULL;
            }
            delete[] key;
            key = key_new;
            size *= 2;
        }


        if (key[hash].fio != "0" and key[hash].next == NULL)
        {
            M = key[hash].next;
            M = new human;
            *M = x;
            key[hash].next = M;
            error++;
        }
        else
            if (key[hash].next != NULL)
            {
                M = key[hash].next;
                L = M;
                while (M != NULL)
                {
                    L = M;
                    M = M->next;
                }
                M = new human;
                *M = x;
                L->next = M;
                error++;
            }
            else
            {
                key[hash] = x;
            }

        cout << "\n\n���: " << x.fio;
        cout << "\n���� �������� : " << x.adres;
        cout << "\n����� �������� : " << x.pass;
        cout << "\n��� : " << fun_hash(x.fio, N);
    }

    int k;
    int j;
    cout << "\n\n���-�������:" << endl;
    for (int i = 0; i < size; i++)
    {
        k = 1;
        M = key[i].next;
        cout << "\n���=" << i << "-->" << key[i].fio << endl;

        while (M != NULL)
        {
            j = k;
            while (j > 0) { cout << "             "; j--; } cout << M->fio << endl;
            M = M->next;
            k++;
        }
    }

    cout << "\n\n������� �������. ��������: " << error << endl;

    while (true)
    {
        cout << "������� ��� ��� ������ \n";
        getline(cin, x.fio);
        hash = fun_hash(x.fio, N);
        M = &key[hash];

        while (M != NULL)
        {
            if (M->fio == x.fio)
            {
                cout << "\n������ ������:\n";
                cout << "��� - " << M->fio << endl;
                cout << "����� - " << M->adres;
                cout << "����� �������� - " << M->pass << endl;
                return 0;
            }
            M = M->next;
        }
        if (M == NULL) cout << "������ �� ������\n";
    }
}