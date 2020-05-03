/*                     1
		      121
		     12321
		    1234321
		   123454321
*/
#include<stdio.h>
void main()
{
int i, j, k, l, c = 80;
for(i=1;i<=5;i++)
{
for(j=1;j<=(c/2)-i;j++)
{
printf(" ");
}
for(k=1;k<=i;k++)
{
printf("%d",k);
}
if(i != 1)
{
for(l=i-1;l>=1;l--)
{
printf("%d",l);
}
}
printf("\n");
}
}