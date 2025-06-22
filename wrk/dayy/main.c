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
    printf("enter the day");
    scanf("%d",&x);
    switch(x)
    {
    case 1:
    printf("sunday");
    break;
    case 2:
    printf("monday");
    break;
    case 3:
    printf("tuesday");
    break;
    case 4:
    printf("wednesday");
    break;
    case 5:
    printf("thursday");
    break;
    case 6:
    printf("friday");
    break;
    case 7:
    printf("saturday");
    break;
   
    default:
     printf("invalid day");
}
return 0;
}

    

    

