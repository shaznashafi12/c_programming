/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float cp,sp,profit,loss;
    printf("enter the cost price :");
    scanf("%f",&cp);
    printf("enter the selling price :");
    scanf("%f",&sp);
    if(sp>cp)
    {
    profit=sp-cp;
     printf("profit of Rs. %.2f\n",profit);
    }
    else if(cp>sp)
    {
    loss=cp-sp;
     printf("loss of Rs. %.2f\n",loss);
    }
    else
    {
        printf("no profit no loss");
    }
    return 0;
}
