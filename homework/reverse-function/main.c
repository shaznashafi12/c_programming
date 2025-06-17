/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void reverse(int a[],int n)
{
    for(int i=0;i<n/2;i++)
    {
        int k=a[i];
        a[i]=a[n-1-i];
        a[n-1-i]=k;
        
    }
    printf("\n");
}


int main()
{
    int a[100],i,n;
    printf("enter the number of elements");
    scanf("%d",&n);
    printf("enter %d elements",n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    reverse(a, n);
    printf("reversed array are:");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
