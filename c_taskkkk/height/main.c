/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int height;
    printf("enter the height");
    scanf("%d",&height);
    if(height<150)
    {
        printf("shorter");
        
    }
    else if(height>150&&height<=165)
    {
        printf("average");
    }
    else if(height>166)
    {
        printf("taller");
    }

    return 0;
}
