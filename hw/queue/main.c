/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 5
 
int queue[size];
int front=-1,rear=-1;

void enqueue(int value)
{
    if(rear==size-1)
    {
        printf("queue is full");
    }
    else
    {
        if(front==-1)front=0;
        rear++;
        queue[rear]=value;
        printf("%d inserted into a queue\n",value);
        
    }
}

void dequeue()
{
    if(front==-1)
    {
        printf("queue is empty\n");
    }
    else
    {
       printf("removed:%d\n",queue[front]);
       front++;
       if(front>rear)
       {
           front=rear-1;
       }
    }
}
void display()
{
    if(front==-1||front>rear)
    {
        printf("queue is empty\n");
    }
    else
    {
        printf("queue elements:\n");
        for(int i=front;i<=rear;i++)
        {
            printf("%d",queue[i]);
            printf("\n");
        }
        
    }
}
int main()
{
    
   enqueue(39);
   enqueue(56);
   enqueue(57);
   display();
   dequeue();
   display();
   enqueue(78);
   display();
   return 0;
}