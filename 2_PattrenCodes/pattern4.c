#include<stdio.h>
void main()
{
    int rows, i, j, k;
    printf("Enter the number of rows you want in your pattern...\n");
    scanf("%d", &rows);
    for(i=1;i<=rows;i++)
    {
        for(j=rows;j>i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        printf("\n");
    }
    // for(i=0;i<=rows;i++)
    //     printf("*");
    // printf("\n");
    for(i=rows-1;i>=1;i--)
    {
        for(j=rows-1;j>=i;j--)
            printf(" ");
        for(k=1;k<=i;k++)
            printf("*");
        printf("\n");
    }
}