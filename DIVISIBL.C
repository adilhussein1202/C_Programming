/*      Divisible sum pair
	Given an array, we have to find the number of pairs
	where ar[i]<ar[j] and also the sum of the pair is
	divisible by k;
*/
		#include<stdio.h>
		#include<conio.h>
		void main()
		{
		int ar[50];
		int i,n,k, count = 0, j;
		clrscr();
		printf("Enter the number of elements : ");
		scanf("%d",&n);
		printf("Enter the elements :-\n");
		for(i=0;i<n;i++)
		{
		scanf("%d",&ar[i]);
		}
		printf("Array elemets are :-\n");
		for(i=0;i<n;i++)
		printf("%d ",ar[i]);
		printf("\nEnter the value of k : ");
		scanf("%d",&k);
		i = 0;
		while(i<n)
		{
		for(j=1;j<n;j++)
		{
		if(ar[i]<ar[j] && (ar[i]+ar[j])%k==0)
		{
		count++;
		}
		}
		i++;
		}
		printf("%d",count);
		}