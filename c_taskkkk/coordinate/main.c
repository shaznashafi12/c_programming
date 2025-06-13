/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int x, y;
    printf("Enter X coordinate: ");
    scanf("%d", &x);
    printf("Enter Y coordinate: ");
    scanf("%d", &y);
    if (x > 0 && y > 0)
    {
        printf("The point (%d, %d) lies in the First quadrant.\n", x, y);
    }
    else if (x < 0 && y > 0) 
    {
        printf("The point (%d, %d) lies in the Second quadrant.\n", x, y);
    } 
    else if (x < 0 && y < 0) 
    {
        printf("The point (%d, %d) lies in the Third quadrant.\n", x, y);
    }
    else if (x > 0 && y < 0) 
    {
        printf("The point (%d, %d) lies in the Fourth quadrant.\n", x, y);
    } 
    else if (x == 0 && y == 0) 
    {
        printf("The point (%d, %d) is at the Origin.\n", x, y);
    } 
    else if (x == 0) 
    {
        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
    }
    else
    {
        printf("The point (%d, %d) lies on the X-axis.\n", x, y);
    }
    return 0;
}