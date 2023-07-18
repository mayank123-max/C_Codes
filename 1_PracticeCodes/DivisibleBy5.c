#include<stdio.h>
void main()
{
    int num, i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(i%5 == 0 || i%7 == 0)
            printf("%d ", i);
    }
}