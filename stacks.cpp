#include <iostream>

using namespace std;
class Stack
{
public:
    int top;
    int *arr;
    int size;
    Stack(int size)
    {
        arr = new int[size];
        this->size = size;
        top = -1;
    }
    void push(int data){
        if(size-top>=0){
            // cout<<size<<endl;
            cout<<size-top<<endl;
            top++;
            cout<<top<<endl;
            arr[top]=data;
            cout<<arr[top]<<endl;
        }
        else{
            cout<<"stack overflow"<<endl;
        }

    }
    void pop(){
        if(top>=0){
            top--;
        }
        else{
            cout<<"stack underflow"<<endl;
        }
    }
    int peek(){
        if(top>=0){
            return arr[top];
        }
        else{
            cout<<"stack underflow"<<endl;
            return -1;
        }
    }
    bool isempty(){
        if(top>=0){
            return false;
        }
        return true;
    }
};
int main()
{
Stack s(5);
s.push(1);
s.push(2); 
s.push(3);
    return 0;
}