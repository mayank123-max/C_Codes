#include<stdio.h>
void main()
{
    char ch[50] = "Hell";
    char *ch2 = "HelloWorld";
    // for(int i=0;i<5;i++)
    //     printf("%c", ch[5]);
    for(int i=0;i<5;i++)
        printf("%c", *(ch2+i));
}