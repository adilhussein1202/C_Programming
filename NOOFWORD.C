			#include<stdio.h>
			#include<conio.h>
			void main()
			{
			int i = 0, count = 0;
			char s[50];
			clrscr();
			printf("Enter the string : \n");
			gets(s);
			while(s[i] != '\0')
			{
			if(s[i] == ' ' || s[i] == '\n' || s[i] == '\t')
			{
			count++;
			}
			i++;
			}
			printf("The number of words in %s is %d",s,count+1);
			}