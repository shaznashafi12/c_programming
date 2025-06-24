/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[6]={45,32,13,54,99,46};
    int i,j,temp,n=6,minIndex;
    for(i=0;i<n-1;i++)
    {
        minIndex=i;
        for(j=i;j<n;j++)
        {
            if(a[j]<a[minIndex])
            {
                minIndex=j;
            }
        }if(minIndex!=i)
        {
                
                temp=a[i];
                a[i]=a[minIndex];
                a[minIndex]=temp;
            }
        }
    
    printf("sorted elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d\t",a[i]);
    }
   

    return 0;
}
