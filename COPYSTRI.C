#include<stdio.h>
#include<conio.h>
void main()
{
int i = 0;
char dest[20];
char src[20] = "Adil";
while(src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';
clrscr();
printf("%s\n",src);
printf("%s",dest);
}