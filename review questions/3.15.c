#include <stdio.h>
int main()
{
    unsigned x = 1;
    signed  y = -1;

    if (x > y){
        printf("X > Y \n");
    }
    else{
        printf("x <= y\n");
    }

    // printf("unsigned : %d\n",x);
    // printf("signed char : %d\n",y);

    return 0;
}