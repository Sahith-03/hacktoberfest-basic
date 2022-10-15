#include<stdio.h>
#include<stdlib.h>

int main(void)
{
    printf("%d %d %d %d",'A','a','Z','z');
    char* a=NULL;
    a=(char*)malloc(sizeof(char));
    printf("Enter the string:");
    scanf("%s",a);
    int i=0;
    while(a[i]!='\0')
    {
        int x=a[i];
        if(x>=65 && x<=90)
        {
            x=x+32;
            a[i]=x;
        }
        else if(x>=97 && x<122)
        {
            x=x-32;
            a[i]=x;
        }
        i++;
    }
    printf("%s",a);
}
