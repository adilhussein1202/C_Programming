/*               1
		23
	       345
*/
#include<stdio.h>
void main()
{
int c = 80, i, j, k, z = 0;
for(i=1;i<=4;i++){
for(j=1;j<=(c/2)-i;j++){
printf(" ");
}
for(k=1+z;k<=i+z;k++){
printf("%d",k);
}
printf("\n");
z = z+1;
}
}