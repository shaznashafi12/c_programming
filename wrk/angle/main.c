/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    printf("enter the three sides:\n");
    scanf("%d%d%d",&a,&b,&c);
    if(a>=0&&b>=0&&c>=0)
    {
        if(a+b+c==180)
        {
            printf("triamgle can be formed");
        }
        else
        {
            printf("triangle cannod be formed");
        }
    }
    else
    {
        printf("triangle cannot be formed because angle should be greater than 0");
    }
    
    return 0;
}
