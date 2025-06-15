/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int i, j,k;

    for(i = 1; i <= 4; i++) {
        
        for(k = 1; k <= 4 - i; k++) {
            printf(" ");
        }

        
        for(j = i; j >= 1; j--) {
            printf("%d", j);
        }

        for(j = 2; j <= i; j++) {
            printf("%d", j);
        }

        printf("\n");
    }

    return 0;
}