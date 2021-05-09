#include <stdio.h>
int main()
{
    int m;

    for (m=0; m < 3; ++m){
        printf("%d",(m%2 ? m: m+2));
        printf("\n");
        // printf ("%d",m);
    }

    // 1: 0%2 != 0  second condition --> 0 + 2 = 2
    // 2: 1%2 == 0 first condition --> 1
    // 3: 2%2 !=0 second condition --> 2 + 2 = 4


    return 0;
}