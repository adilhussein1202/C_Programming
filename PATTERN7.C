/*                       1
			232
		       43543
		      4567654
*/
#include<stdio.h>
void main()
{
int i, j, k, l, z = 0, x = 0, c = 80;
for(i=1;i<=4;i++){
for(j=1;j<=(c/2)-i;j++){
printf(" ");
}
for(k=1+z;k<=i+z;k++)
{
printf("%d",k);
}
if(i != 1){
for(l=i+x;l>=i;l--){
printf("%d",l);
}
x++;
}
printf("\n");
z++;
}
}