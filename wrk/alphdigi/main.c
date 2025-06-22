/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char ch;
    printf("enter the character: ");
    scanf("%c",&ch);
    if((ch>='A'&&ch<='Z')||(ch>='a'&&ch<='z'))
    {
        printf("character is an alphabet");
    }
    else if(ch>='0'&&ch<='9')
    {
        printf("character is a digit");
    }
    else
    {
        printf("character is a special character");
    }
    
}