#include<stdio.h>
void main()
{
    char ch[] = "Hello";
    int count = 0, i=0;
    int len = sizeof(ch);
    while(i < len)
    {
        if(ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U')
            count++;
        i++;
    }
    printf("Count of vowels = %d\n", count);
}