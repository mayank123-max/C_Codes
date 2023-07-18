#include<stdio.h>
void main()
{
    int num;
    scanf("%d",&num);
    int i,sum=0;
    for(i=1;i<=num;i++)
    {
        sum+=i;
    }
    printf("%d",sum);
}