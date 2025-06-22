/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x;
    printf("enter the month: ");
    scanf("%d",&x);
    switch(x)
    {
    
    case 1:
    printf("january 31 days\n");
    break;
    case 2:
    printf("february 28 or 29 days");
    break;
    case 3:
    printf("march 31 days");
    break;
    case 4:
    printf("april 30 days");
    break;
    case 5:
    printf("may 31 days");
    break;
    case 6:
    printf("june 30 days");
    break;
    case 7:
    printf("july 31 days");
    break;
    case 8:
    printf("august 30 days");
    break;
    case 9:
    printf("september 31 days");
    break;
    case 10:
    printf("october30 days");
    break;
    case 11:
    printf("november 31 days");
    break;
    case 12:
    printf("december 30 days");
    break;
   
    default:
     printf("invalid month");
}
return 0;
}
