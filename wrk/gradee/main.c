/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char g;
    printf("enter the grade (E,V,G,A,F): ");
    scanf("%c",&g);
    switch(g)
    {
        case 'E':
           printf("Excellent");
           break;
         case 'V':
           printf("Very Good");
           break;
         case 'G':
        
            printf("Good");
            break;
         case 'A':
        
            printf("Average");
            break;
         case 'F':
         
            printf("Fail");
            break;
        default:
            printf("invalid grade");
    }
    
    return 0;
}
