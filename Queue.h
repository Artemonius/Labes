#include <iostream>

using namespace std;

#ifndef QUEUE_QUEUE_H
#define QUEUE_QUEUE_H
#define QMAX 100

class Queue
{
private:
    double qu[QMAX];

public:
    int rear, front;
    Queue()
    {
        front = 1;
        rear = 0;
        return;
    }

    void insert(int x)
    {
        if (rear < QMAX - 1)
        {
            rear = rear + 1.0;
            qu[rear] = x;
        }
        else
            cout << "Очередь переполнена\n";
        return;
    }

    bool isEmpty(Queue* q)
    {
        if (rear < front) return 1;
        else return 0;
    }

    void print()
    {
        /*
        int h;
        if(isEmpty(this))
        {
            cout << "Очередь пуста!\n";
            return;
        }

        for(h = front; h <= rear;h++)
        {
            cout << qu[h]<<endl;
        }
        return;
        */

        for (int i = front; i <= rear; i++)
        {
            cout << qu[i] << " ";
        }
        cout << endl;
    }

    double remove()
    {
        int x;
        int h;

        if (isEmpty(this))
        {
            cout << "Очередь пуста!\n";
            return 0;
        }

        x = qu[front];
        for (h = front; h < rear; h++)
        {
            qu[h] = qu[h + 1];
        }
        rear--;
        return x;
    }

};



#endif //QUEUE_QUEUE_H
#pragma once
