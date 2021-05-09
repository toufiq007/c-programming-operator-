#include <stdio.h>
int main()
{
    // write a program that determines whether a given integer is odd or even and displays the number and description on the same line

    int n;
    printf("Enter a Integer number: ");
    scanf("%d",&n);

    if (n%2==0){
        printf("The number is %d and It is an even number\n",n);
    }
    else{
        printf("The number is %d and It is an odd number\n",n);
    }

    return 0;
}