/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main()
{
    int i,j;
    for(i=5;i>0;i--){
        for(j=1;j<=5;j++){
            if(j<=5-i)
            
                printf(" ");
            
            else
                printf("*");
            
        }
        printf("\n");
    }

    return 0;
}