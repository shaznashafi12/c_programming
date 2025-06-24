/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
       int a[4]={1,2,3,4};
       
      int pos=1,n=4,value=5,i;
      printf("before insertion\n");
      for(i=0;i<n;i++)
      {
          printf("%d\n",a[i]);
      }
      for(i=n;i>pos;i--)
      {
          a[i]=a[i-1];
      }
      a[pos]=value;
      n++;
    printf("after insertion");
    for(i=0;i<n;i++)
{
    printf("%d\n",a[i]);
}
    return 0;
}