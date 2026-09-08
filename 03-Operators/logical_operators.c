#include<stdio.h>
int main()
{
    int a = 10;
    int b = 5;
    
    // 1 = True, 0 = False

    /*&&  → AND → both conditions must be true
    ||  → OR  → at least one condition must be true
    !   → NOT → reverses true/false*/

    printf("AND: %d\n", (a > 5) && (b < 10));
    printf("OR: %d\n", (a > 5) || (b > 10));
    printf("NOT: %d\n", !(a > 5));
    return 0;
}
