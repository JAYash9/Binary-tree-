#include<iostream>

using namespace std;
class Queue{
int *arr;
int size;
int front;
int rear;
public:
Queue(int size){
    arr = new int[size];
    this->size = size;
    front = -1;
    rear = -1;  
}
void enqueue(int data){
    if(rear==size){
        cout<<"queue overflow"<<endl;
    }
    else{
        arr[rear]=data;
        rear++;
    }
}
};
int main(){
    Queue q(5);
    q.enqueue(1);
    return 0;
}
