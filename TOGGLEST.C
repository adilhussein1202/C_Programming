			/* ASCII Values :
				a = 97, z = 122
				A = 65, Z = 90
			*/
			#include<stdio.h>
			#include<conio.h>
			void main()
			{
			int i = 0;
			char str[50];
			clrscr();
			printf("Enter the string : ");
			gets(str);
			while(str[i] != '\0')
			{
			if(str[i] >= 'a' && str[i] <= 'z')
			{
			str[i] = str[i] - 32;
			}
			else if(str[i] >= 'A' && str[i] <= 'Z')
			{
			str[i] = str[i] + 32;
			}
			i++;
			}
			printf("String after toggle is %s",str);
			}