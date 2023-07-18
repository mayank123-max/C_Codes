#include<stdio.h>
#include<stdlib.h>
void main()
{
    int *ptr, n;
    printf("Enter the size of array...\n");
    scanf("%d", &n);
    ptr = (int*)malloc(n * sizeof(int));
    // ptr = (int*)calloc(n, sizeof(int));
    printf("Enter the array elements:-\n");
    // for(int i=0;i<n;i++)
    // {
    //     printf("Enter the %d element:- ", i+1);
    //     scanf("%d", ptr+i);
    // }
    printf("-------------------------------------------------------------------------------\n");
    printf("Element\t\tAddress\t\tValue\n");
    printf("-------------------------------------------------------------------------------\n");
    for(int i=0;i<n;i++)
    {
        printf("%d\t\t%x\t\t%d\n", i+1, ptr+i, *(ptr+i));
        printf("\n");
    }
    printf("-------------------------------------------------------------------------------\n");  
}