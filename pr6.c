#include<stdio.h>

main()
{
	int a[100][100];
	int i,j,n1,n2,sum=0;
	printf("enter value of rows :");
	scanf("%d",&n1);
	printf("enter value of Column :");
	scanf("%d",&n2);
	printf("\nmatrix 1 is = \n\n");
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
			if(i==j)
			{
			   sum=sum+a[i][j];
		    }
		}
		printf("\n");
	}
	printf("\nsum of diagonal metrix : %d ",sum);
}
