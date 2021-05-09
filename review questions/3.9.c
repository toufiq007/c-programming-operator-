#include <stdio.h>
#include <math.h>
int main()
{
    // find the errors

    // number one

    int x,y,z;
    x = y = z = 0.5, 2.0, -5.75;
    // here 0.5 is assigned in z, z is assigned in y and y is assigned is x and datatype is integer so every x,y,z value is 0.5 and store 0 because datatype is int

    // write ans is 
    x = 0.5;
    y = 2.0;
    z = -5.75;
    // printf("%d\n",x);   
    // printf("%d\n",y);
    // printf("%d\n",z);



    // number two
    // here is no error all is correct
    int m,a = 2;
    m = ++a * 5;
    // printf("%d\n",m);



    // number three
    // here all is correct no errors
    int s;
    s = sqrt(49);
    printf("%d\n",s);



    // number four
    // here all is correct no errors
    int p=2,q=10,r=2;
    p*= q/r;
    printf("%d\n",p);



    // number five
    int t = 5;
    //s = /5; // here expressio is not correct correct is = s/=5

    t/= 5;
    // printf("%d\n",t);



    // number six
    int g,h=3,i=2;

    g = h++ - i*2;  // 3 - 4 --> -1
    printf("%d\n",g);









    return 0;
}