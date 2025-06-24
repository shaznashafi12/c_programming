/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[5]={1,2,3,4,5};
    int i,num,n=5;
   printf("enter the number to be searched");
   scanf("%d",&num);
   for(i=0;i<n;i++)
   {
       if(num==a[i])
       {
        printf("element is found at %d ",i);  
        break;
       }
   }
   
       if(i==n)
       {
           printf("element is not found");
       }
       return 0;
       
   }
  

   
