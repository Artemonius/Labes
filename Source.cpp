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
        if (queue.front() % 2 == 0) //идет проверка на четность индекса
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
        stlQueue.push(int(i*5)); //а вот здесь мы регулируем выведенную в первый раз очередь
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
    Queue myQueue = Queue();                //Самописная очередь
    queue<int> stlQueue;
    FillQueue(stlQueue);
    cout << "Очередь до выполнения задания" << endl;
    PrintQueue(stlQueue);
    stlQueue = RemoveEvenElementsFromQueue(stlQueue);
    cout << "Очередь после выполнения задания" << endl;
    PrintQueue(stlQueue);
    return 0;
}