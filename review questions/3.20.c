#include <stdio.h>
int main()
{
    int m = -14, n = 3;
    printf("the result is negative : %d\n",m/n * 10);

    n = -n;
    printf("the result is positive: %d\n",m/n * 10);




    return 0;
}