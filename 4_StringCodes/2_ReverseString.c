#include<stdio.h>
void main()
{
    char ch[] = "Hello";
    int len = sizeof(ch), i=len - 2, k=0;
    char rev[len];
    while(i>=0)
    {
        rev[k++] = ch[i];
        i--;
    }
    printf("Reversed String = %s\n", rev);
}