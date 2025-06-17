/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int i,n;
    printf("enter the number");
    scanf("%d",&n);
    if(n<=1)
    {
        printf("%d is not a prime number\n",n);
        return 0;
    }
    for(i=2;i<n;i++)
    {
    if(n%i==0)
    {
        printf("%d is not a prime",n);
        return 0;
        
    }
    }
     printf("%d is a prime number",n);
    return 0;
   

    
}
