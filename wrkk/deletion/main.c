/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int n=5,i,pos=2;
    for(i=pos;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n--;
     printf("array aftr deletion:");
     for(i=0;i<n;i++)
     printf("%d",a[i]);


    return 0;
}
