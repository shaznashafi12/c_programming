/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={10,78,56,54,32};
    int i,search;
    printf("enter the element to search");
    scanf("%d",&search);
    for(i=0;i<=5;i++)
    {
       if(a[i]==search)
       {
           printf("element is found at index %d",i);
           return 0;
           
       }
    }
           printf("element is not found");
           return 0;

}
