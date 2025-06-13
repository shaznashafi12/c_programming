/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main()
{
    int maths,physics,chemistry;
    int total,mathsphysicstotal;
    printf("enter marks in mathematics");
    scanf("%d",&maths);
    printf("enter marks in physics");
    scanf("%d",&physics);
    printf("enter marks in chemistry");
    scanf("%d",&chemistry);
    total=physics+maths+chemistry;
    mathsphysicstotal=maths+physics;
    if(maths>=65&&physics>=55&&chemistry>=50&&(total>=190||mathsphysicstotal>=140))
    {
        printf("the candidate is eligible for admission");
    }
    else 
    {
                printf("the candidate is not eligible for admission");

    }

    return 0;
}