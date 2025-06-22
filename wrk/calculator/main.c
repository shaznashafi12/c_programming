/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main() {
    int choice;
    float n1, n2, r;
 while(1) {
        printf("1.Addition\n");
        printf("2.Subtraction\n");
        printf("3.Multiplication\n");
        printf("4.Division\n");
        printf("5.Exit\n");
        printf("Enter your choice(1-5): ");
        scanf("%d",&choice);

        if(choice==5) {
            printf("Exiting\n");
            break;
        }

        printf("Enter two numbers: ");
        scanf("%f%f",&n1,&n2);

        switch(choice) {
            case 1:
                r=n1+n2;
                printf("Result=%f\n",r);
                break;

            case 2:
                r=n1-n2;
                printf("Result=%f\n",r);
                break;

            case 3:
                r=n1*n2;
                printf("Result=%.2f\n",r);
                break;

            case 4:
                if (n2==0)
                    printf("Error! Division by zero is not allowed.\n");
                else {
                    r=n1/n2;
                    printf("Result=%.2f\n",r);
                }
                break;

            default:
                printf("Invalid choice\n");
        }
    }

    return 0;
}
