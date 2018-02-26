#include<stdio.h>
#include<string.h>
int main()
{
    char a[10],b[10];
    int z;
    printf("enter the value");
    scanf("%s",&a);
    strcpy(b,a);
    strrev(a);
    z=strcmp(a,b);
    if(z==0)
    {
        printf("it is palindrome");
    }
    else
    {
        printf("not palindrome");
    }
    return 0;
}
    
