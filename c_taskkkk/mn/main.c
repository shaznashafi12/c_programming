/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int m,n;
    printf("enter the integer value of m");
    scanf("%d",&m);
    if(m>0)
    {
        n=1;
    }
    else if(m==0)
    {
        n=0;
    }
    else
    {
        n=-1;
    }
    printf("the value of n is %d:",n);

    return 0;
}