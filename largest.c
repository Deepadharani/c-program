#include <stdio.h>
int main()
{
    float c, b, a;

    printf("Enter three different numbers: ");
    scanf("%f %f %f", &c, &b, &a);

    if( c>=b && a>=c)
        printf("%f is the largest number.", c);

    if( b>=a && b>=c )
        printf("%f is the largest number.", b);

    if( c>=a && c>=b )
        printf("%f is the largest number.", a);

    return 0;
}
