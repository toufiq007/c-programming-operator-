#include <stdio.h>
int main()
{
    int a=5,b=10,c=-6,result;

    // expression one
    result = (a>b) && (a<c);
    printf("%d\n",result); // here first condition is false to ovarall condition is false and ans is --> 0


    // expression two
    result = (a<b) && (a>c);
    printf("%d\n",result); // here all two condition is true so main result is true and ans --> 1


    // expression three
    result = (a == c) || (b > a); // here b > a condition is true main result is true and ans --> 1
    printf("%d\n",result);


    // expression four
    result = (b > 15 && c < 0) || a > 0; //here a > 0 condition is true main result is true and ans --> 1
    printf("%d\n",result);



    // expression five
    result = (a/2.0 == 0.0 && b/2.0 != 0.0) || c <0.0;
    printf("%d\n",result); // here c < 0.0 condition is true main result is true and ans --> 1

    return 0;
}