/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={2,3,5,6,6};
    int i,sum=0;
    for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }
    printf("sum is %d",sum);

    return 0;
}
