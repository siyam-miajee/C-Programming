#include<stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    //Output- 1 = True, 0 = False
    printf("(a > 5 && b < 10): %d\n", a > 5 && b < 10);
    printf("(a > 5 || b > 10): %d\n", a > 5 || b > 10);
    printf("!(a > 5): %d\n", !(a > 5));
    return 0;
}
