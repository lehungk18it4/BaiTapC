#include <stdio.h>
#include <conio.h>
#include <string.h>

int demchucai(char *str)
{
int i,d=0;
    for (i=0;i<strlen(str);i++)
    if ((str[i]>=65 && str[i]<=90) || (str[i]>=97 && str[i]<=122)) d++;
return d;
}

int demchuso(char *str)
{
int i,d=0;
    for (i=0;i<strlen(str);i++)
    if (str[i]>=48 && str[i]<=57)
    d++;
return d;
}

int main()
{
    char *s;
    int d1,d2;
    printf("Nhap xau:");
    gets(s);
    d1=demchucai(s);
    d2=demchuso(s);
    printf("So chu cai la :%d",d1);
    printf("So chu so la :%d",d2);
getch();
return 0;
}

