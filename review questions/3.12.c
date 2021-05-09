#include <stdio.h>
int main()
{
    int x = 100;
    printf("%d\n",10 + x++); // 10 + 100 --> 110
    printf("%d\n",10 + ++x); // 10 + 102 --> 112


    return 0;
}