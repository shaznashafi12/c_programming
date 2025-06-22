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
    printf("january");
    break;
    case 2:
    printf("february");
    break;
    case 3:
    printf("march");
    break;
    case 4:
    printf("april");
    break;
    case 5:
    printf("may");
    break;
    case 6:
    printf("june");
    break;
    case 7:
    printf("july");
    break;
    case 8:
    printf("august");
    break;
    case 9:
    printf("september");
    break;
    case 10:
    printf("october");
    break;
    case 11:
    printf("november");
    break;
    case 12:
    printf("december");
    break;
   
    default:
     printf("invalid month");
}
return 0;
}
