#include<stdio.h>
void main()
{
    int rows, columns, i, j;
    printf("Enter the number of rows and columns:-\n");
    printf("-------------------------------------------------------\n");
    printf("Enter rows:-\n");
    scanf("%d",&rows);
    printf("Enter columns:-\n");
    scanf("%d",&columns);
    printf("-------------------------------------------------------\n");

    int matrix1[rows][columns], matrix2[rows][columns], add[rows][columns];

    printf("Enter the elements of a 1st matrix\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            scanf("%d", matrix1[i][j]);
    }

    printf("Enter the elements of a 2nd matrix\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            scanf("%d", matrix2[i][j]);
    }


    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            add[i][j] = matrix1[i][j] + matrix2[i][j];
    }
    printf("Resultant Matrix After The Addition:-\n");
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
            printf("%d ",add[i][j]);
        printf("\n");
    }
}