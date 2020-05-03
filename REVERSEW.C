			#include<stdio.h>
			#include<string.h>
			#include<conio.h>
			void main()
			{
			int len, j, i, i2var=0, counter = 0;
			char str[50];
			char str2[50];
			char temp;
			clrscr();
			printf("Enter the string : ");
			gets(str);
			len = strlen(str);
			j = 0;
			for(i=len-1;i>=0;i--)
			{
			str2[j] =str[i];
			j++;
			}
			str2[j] = '\0';
			printf("%s\n",str2);
			i = 0, j = 0;
			for(i=0;i<=len;i++)
			{
			if(str2[i] == ' ' || str2[i] == '\0')
			{
			while(j<i2var)
			{
			temp = str2[j];
			str2[j] = str2[i2var-1];
			str2[i2var-1] = temp;
			i2var--;
			j++;
			}
			j = i+1;
			i2var++;
			}
			else
			{
			i2var++;
			counter++;
			i2var = counter;
			}
			}
			 printf("%s",str2);
			}