/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={30,45,67,78,89};
    int num,i,n=5,start=0,end=n-1,mid; 
    printf("enter the element to be searched");
    scanf("%d",&num);
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==num)
        {
            printf("the element is found at position %d",mid);
            break;
            
        }
        else if(a[mid]>num)
        {
            end=mid-1;
        }
        else
        {
            start=mid+1;
        }
        
    }
    if(start>end)
    {
        printf("element is not found");
        return 0;
    }

    
}
