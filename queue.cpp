#include <iostream>

using namespace std;
class Queue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    Queue(int size)
    {
        arr = new int[size];
        this->size = size;
        front = -1;
        rear = -1;
    }
    void enqueue(int data)
    {
        if (rear == size)
        {
            cout << "queue overflow" << endl;
        }
        else
        {
            arr[rear] = data;
            rear++;
        }
    }
};
class circularQueue
{
    int *arr;
    int size;
    int front;
    int rear;

public:
    circularQueue(int size)
    {
        this->size = size;
        arr = new int[size];
        front = rear = -1;
    }
    void enqueue(int data){
        if((front==0 && rear==size-1)||rear==((front-1)%(size-1))){
            cout<<"Queue is full"<<endl;
        }
        else if(front==-1){
        
        }
    }
};
int main()
{
    Queue q(5);
    q.enqueue(1);
    return 0;
}
