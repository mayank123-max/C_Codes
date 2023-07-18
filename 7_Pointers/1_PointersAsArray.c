#include<stdio.h>
void main()
{
    // int *arr = {1,2,3,4,5};
    // for(int i=0;i<5;i++)
    //     printf("%d", *(arr+i));

    int arr[][3] = {{1,2,3}, {4,5,6}, {7,8,9}}, *ptr;
    ptr = arr;
    for(int i=0;i<9;i++)
    {
        printf("%d ", *(ptr+i));
    }
}