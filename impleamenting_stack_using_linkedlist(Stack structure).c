#include<stdio.h>
#include<stdlib.h>
typedef struct Node{
    int data;
    struct Node* next;
}Node;
typedef struct stack{
    Node* top;
}stack;
void push(stack* s,int data){
    Node* nw = (Node*) malloc(sizeof(Node));
    nw->data = data;
    if(s->top == NULL){
        s->top = nw;
    }
    nw->next = s->top;
    s->top = nw;
}
void pop(stack* s){
    if(!s->top){
        printf("Stack Underflow\nExiting...");
        exit(0);
    }
    Node* temp = s->top;
    s->top = (s->top)->next;
    free(temp);
}
void peek(stack *s){
    if(!s->top){
        printf("The stack is empty\nExiting...");
        exit(1);
    }
    printf("%d\n",(s->top)->data);
}
int main(){
    stack s;
    push(&s, 32);
    push(&s, 35);
    push(&s, 38);
    push(&s, 78);
    pop(&s);
    peek(&s);
    return 0;
}