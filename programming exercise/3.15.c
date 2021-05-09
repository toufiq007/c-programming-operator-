#include <stdio.h>
int main()
{
    // write a program to read three valus using scanf statement and print the following results:
    // a: Sum of the values
    // b: Average of the three values
    // c: Largest of the three
    // d: Smallest of the three

    int a,b,c,sum;
    float avarage;
    printf("Enter three integer values: ");
    scanf("%d %d %d",&a,&b,&c);

    // sum of the three numbers
    sum = a+b+c;
    printf("Sum of three values: %d\n",sum);
    // avarage of the three numbers
    avarage = (float)(a+b+c)/3;
    printf("Avarage of three values: %.2f\n",avarage);

    // largest of the three numbers
    int largest;
    largest = a > b ? (a > c ? a : c) : (b > c ? b : c);
    printf("largest of the three is %d\n",largest);
    

    // smallest of the three numbers
    int smallest;
    smallest = a < b ? (a < c ? a : c) : (b < c ? b : c);
    printf ("Smallest of the three is %d\n",smallest);



    return 0;
}