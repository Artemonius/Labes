#include <iostream>
#include "Queue.h"
#include <queue>
#define FILLNUMBER 10
queue<int> RemoveEvenElementsFromQueue(queue<int>& queue)
{
    ::queue<int> nQueue;

    int length = queue.size();
    for (int i = 0; i < length; i++)
    {
        if (queue.front() % 2 == 0) //���� �������� �� �������� �������
        {
            queue.pop();
        }
        else
        {
            nQueue.push(queue.front());
            queue.pop();
        }
    }
    return nQueue;
}

void FillQueue(queue<int>& stlQueue)
{
    for (int i = 0; i < FILLNUMBER; i++)
    {
        stlQueue.push(int(i*5)); //� ��� ����� �� ���������� ���������� � ������ ��� �������
    }
}

void PrintQueue(queue<int> stlQueue)
{
    while (!stlQueue.empty())
    {
        cout << stlQueue.front() << " ";
        stlQueue.pop();
    }
    cout << endl;
}

int main() {
    setlocale(LC_ALL, "Russian");
    Queue myQueue = Queue();                //���������� �������
    queue<int> stlQueue;
    FillQueue(stlQueue);
    cout << "������� �� ���������� �������" << endl;
    PrintQueue(stlQueue);
    stlQueue = RemoveEvenElementsFromQueue(stlQueue);
    cout << "������� ����� ���������� �������" << endl;
    PrintQueue(stlQueue);
    return 0;
}