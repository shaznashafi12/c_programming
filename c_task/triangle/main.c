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
    printf("enter the first side");
    scanf("%d",&a);
    printf("enter the second side");
    scanf("%d",&b);
    printf("enter the third side");
    scanf("%d",&c);
    if(a==b&&b==c)
    {
        printf("equilateral triangle");
    }
    else if(a==b||b==c||a==c)
    {
        printf("isosceles triangle");
    }
    else
    {
        printf("scalene triangle");
    }

    return 0;
}
