#include<stdio.h>
int main()
{
    int a = 10;
    int b = 20;
    int maximum;

    if (a > b)
    {
        maximum = a;
    }
    else
    {
        maximum = b;
    }
    printf("Maximum = %d\n", maximum);
    return 0;
}
