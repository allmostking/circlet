#include<stdio.h>
main()
{
	int n=5;
	int i,j;
	for(i=n;i>=1;i--)
	{
		for(j=n;j>=i;j--)
		{
			printf("%2d",j);
		}
		printf("\n");
	}
}
