#include<stdio.h>
#include<conio.h>
void main()
{
char str1[30];
char str2[30];
int i = 0, j, k=0;
clrscr();
printf("Enter the string to check : ");
scanf("%s",str1);
while(str1[i] != '\0')
{
i++; //length of str1
}
for(j = i-1;j>=0;j--)
{
str2[k] = str1[j];
k++;
}
str2[k] = '\0';
printf("%s\n",str2);
if(strcmp(str1, str2) == 0)
{
printf("%s is a palindrome string",str2);
}
else
{
printf("Not a palindrome string");
}
}
