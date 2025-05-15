#include<stdio.h>

int main()
{
    int x=10, y=20, z;
    printf("before swap= %d y= %d", x, y);
    z = x;
    x = y;
    y = z;
    printf("after swap= %d y= %d", x, y);
}