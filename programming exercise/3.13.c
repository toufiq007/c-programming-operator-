#include <stdio.h>
int main()
{
    // Given three values, write a program to read three values from keyboard and print out the largest of them without using the if statement

    int a,b,c,largest;
    printf("Enter the three values: ");
    scanf("%d %d %d",&a,&b,&c);

    largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf ("The largest value is %d\n",largest);

    return 0;
}