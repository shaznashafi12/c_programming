/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define SIZE 10

int stack[SIZE];
int top=-1;
void printstack()
{
    if(top==-1)
    {
        printf("stack is empty");
    }
    else
    {
        for(int i=top;i>=0;i--)
        {
            printf("%d\n",stack[i]);
            }
    }
}
void push(int value)
{
    if(top==SIZE-1)
    {
        printf(" stack is full:\n");
    }
    else
    {
        top++;
        stack[top]=value;
        printf("%d insertion success: \n",value);
    }
}
void pop()
{
    if(top==-1)
    {
        printf("stack is empty\n");
    }
    else
    {
        printf("\n%d popped from stack\n",stack[top--]);
    }
}


int main()
{
     push(34);
     push(56);
     push(35);
     printstack();
     pop();
     printstack();
      
   
    
    return 0;
}