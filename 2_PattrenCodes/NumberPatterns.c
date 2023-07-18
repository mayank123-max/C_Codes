#include<stdio.h>
void main()
{
    char rows, i, j, x;
    printf("Enter rows....\n");
    scanf("%c", &rows);
    x = 'a';
    for(i='a';i<=rows;i++)
    {
        for(j='a';j<=i;j++)
        {
            printf("%c", x++);
        }
        printf("\n");
    }
}