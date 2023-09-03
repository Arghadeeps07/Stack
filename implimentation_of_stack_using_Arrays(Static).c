#include<stdio.h>
#include<stdlib.h>
#define size 7
int top = -1;
int arr[size];
void push(int data){
    if(top == size-1){
        printf("Stack Overflow \nExiting...");
        exit(1);
    }
    top++;
    arr[top] = data;
}
void pop(){
    if(top == -1){
        printf("Stack Underflow \nExiting...");
        exit(2);
    }
    top--;
}
void peek(){
    if(top == -1){
        printf("Stack is empty...");
    }
    printf("%d", arr[top]);
}
int main()
{
    push(5);
    push(4);
    

    pop();
    pop();
    pop();

    peek();

    return 0;
}