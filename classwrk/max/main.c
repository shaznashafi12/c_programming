/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[]={23,56,34,23};
    int max=a[0];
    for(int i=1;i<5;i++)
    {
        if(a[i]>max)
        {
            max=a[i];
        }
        printf("largest number is %d",max);
    return 0;
}
}
