/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={4,7,8,9,10};
    int i;
     printf("even numbers are:\n");
    for(i=0;i<5;i++)
    {
        if(a[i]%2==0)
        {
            printf("%d\n",a[i]);
        }
        
    }

 return 0;
}
