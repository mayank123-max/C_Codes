#include<stdio.h>
int minimum(int a[], int size)
{
    int min = a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i] < min)
            min = a[i];
    }
    return min;
}
int maximum(int a[], int size)
{
    int max = a[0];
    for(int i=0;i<size;i++)
    {
        if(a[i] > max)
            max = a[i];
    }
    return max;
}
void main()
{
    int n,ch;
    printf("Enter Size Of Array:-\n");
    scanf("%d", &n);
    int a[n];
    printf("Enter elements of array:-\n");
    for(int i=0;i<n;i++)
        scanf("%d", &a[i]);
    printf("Enter 1 for minimum and 2 for maximum:-\n");
    scanf("%d", &ch);
    if(ch == 1)
        printf("%d", minimum(a, n));
    else
        printf("%d", maximum(a, n));
}