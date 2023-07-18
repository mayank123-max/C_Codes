#include<stdio.h>
void main()
{
    int rows, i, j, x=1, blocks;
    printf("Enter How many blocks u want...\n");
    scanf("%d", &blocks);
    while(blocks--)
    {
        printf("Enter the no. of rows...\n");
        scanf("%d", &rows);
        for(i=1;i<=rows;i++)
        {
            for(j=1;j<=i;j++)
            {
                printf("%d ", x++);
            }
            printf("\n");
        }
    }
    
}