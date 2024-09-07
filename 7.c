#include<stdio.h>

main()

{
	int i,j;
	for(i=10;i>=6;i--)
	{
		for(j=10;j>=i;j--)
		{
		     printf("%d ",i*i);
		}
		printf("\n");
	}
	
}