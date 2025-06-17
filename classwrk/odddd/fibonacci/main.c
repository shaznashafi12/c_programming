/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() 
{
    int i,a=0,b=1,n=10,fib;
    printf("Fibonacci series are:\n");
    for(int i=1;i<=n;i++) 
    {
        printf("%d\n",a);
        fib=a+b;
        a=b;
        b=fib;
    }
    return 0;
}