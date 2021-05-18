#include <iostream>
#include <stack>

using namespace std;

void print(stack <int> st)
{
    int p = st.size();
    for (int i = 0; i < p; i++)
    {
        cout << st.top() << " ";
        st.pop();
    }
}

int main()
{
    system("chcp 1251>nul");
    stack <int> st;
    int i = 0;
    int x;
    int size;
    cout << "������� ���������� ���������: ";
    cin >> size;
    while (size < 2)
    {
        cout << "�������� ��������. ������� �������� ������ 1: ";
        cin >> size;
    }
    int* arr = new int[size];
    for (i = 0; i < size; i++)
    {
        cout << "������� ������� �����: ";
        cin >> arr[i];
    }
    for (i = size - 1; i >= 0; i--)
    {
        st.push(arr[i]);
    }
    print(st);
    cout << endl;
    cout << "������� ������� ����� �������� ����� �������� �������: " << endl;
    int l;
    cin >> l;
    cout << "������� ������� ������� ����� ��������: ";
    cin >> x;
    stack <int> st2;
    while (st.top() != l)
    {
        st2.push(st.top());
        st.pop();
    }
    st2.push(st.top());
    st.pop();
    st2.push(x);
    while (st2.size() > 0)
    {
        st.push(st2.top());
        st2.pop();
    }
    print(st);
    return 0;
}
