#include<stdio.h>
void swap(int *a, int *b)
{
    int t;
    t = *a;
    *a = *b;
    *b = t;
}
void main()
{
    int a,b;
    printf("Enter the two numbers:- \n");
    scanf("%d %d", &a, &b);
    printf("Before Swap --> a = %d and b = %d\n", a, b);
    swap(&a, &b);
    printf("After Swap --> a = %d and b = %d", a, b);
}