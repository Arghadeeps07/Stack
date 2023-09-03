#include <stdio.h>
#include <stdlib.h>
typedef struct Node
{
    int data;
    struct Node *next;
} Node;
Node *top = NULL;

int isFull()
{
    Node *ptr = (Node *)malloc(sizeof(Node));
    if (ptr == NULL)
        return 1;
    return 0;
}

int isEmpty()
{
    if (top == NULL)
        return 1;
    return 0;
}

void push(int data)
{
    if (isFull())
    {
        printf("Stack Overflow\nExiting...");
        exit(1);
    }
    Node *ptr = (Node *)malloc(sizeof(Node));
    if (!top)
    {
        top = ptr;
    }
    ptr->next = top;
    ptr->data = data;
    top = ptr;
}

void pop()
{
    if (isEmpty())
    {
        printf("Stack Underflow\nExiting...");
        exit(2);
    }

    Node *ptr = top;
    top = top->next;
    free(ptr);
}

void peek()
{
    if (top == NULL)
    {
        printf("Stack is empty\n");
    }
    printf("Element: %d\n", top->data);
}

int main()
{
    push(56);
    push(6);
    push(96);
    push(53);
    pop();
    peek();

    return 0;
}