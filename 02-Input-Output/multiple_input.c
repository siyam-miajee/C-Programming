#include<stdio.h>
int main()
{
    int age;
    float cgpa;
    printf("Enter your age and CGPA: ");
    scanf("%d %f", &age, &cgpa);

    printf("Age: %d\n", age);
    printf("CGPA: %.2f\n", cgpa);
    return 0;
}
