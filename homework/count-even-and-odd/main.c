/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[7]={4,7,8,9,10,3,6};
    int i,even=0,odd=0;
  
    for(i=0;i<7;i++)
    {
        if(a[i]%2==0)
         even++;
        else
         odd++;
         
    }
    printf("even numbers:%d\n",even);
        printf("odd numbers:%d\n",odd);

 return 0;
}