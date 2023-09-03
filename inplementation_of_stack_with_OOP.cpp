#include<iostream>
using namespace std;
#define size 5
class Stack{
    int arr[size];
    int top = -1;
public:
    void push(int data){
        if(top == size-1){
            cout<<"Stack overflow \n Exiting... \n";
            exit(1);
        }
        arr[++top] = data;
    }
    void pop(){
        if( top == -1){
          cout<<"Stack underflow \n Exiting... \n";
          exit(2); 
        }
        top--;
    }
    int peek(){
        if(top == -1){
            cout<<"Stack is empty..."<<endl;
        }
        return arr[top];
    }
};
int main()
{
    Stack s1;
    s1.push(2);
    s1.push(7);
    s1.push(10);
    s1.push(22);
    s1.pop();
    cout<<s1.peek()<<endl;
    return 0;
}