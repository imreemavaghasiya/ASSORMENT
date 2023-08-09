#include<stdio.h>
/*
 1 2 3  = 00 01 02
 4 5 6  = 10 11 12
 7 8 9  = 20 21 22
 
 1 4 7
 2 5 8
 3 6 9
*/

main()

{
	int a[25][25];
	int n1,n2,j,i,t[25][25];
	
	printf("Enter Row = ");
	scanf("%d",&n1);
	printf("Enter Column = ");
	scanf("%d",&n2);
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		  {
		  	printf("a[%d][%d] = ",i,j);
		  	scanf("%d",&a[i][j]);
		  }
		  
	}
	for(i=0;i<n1;i++)
	{
		for(j=0;j<n2;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(i=0;i<n1;i++)
	  {
	  	for(j=0;j<n2;j++)
	  	{
	  		t[j][i]=a[i][j];
		  }
	  }
	printf("=============\n");
	for(i=0;i<n1;i++)
	 {
	 	for(j=0;j<n2;j++)
	 	{
	 		printf("%d ",t[i][j]);
	 		
		 }
		 printf("\n");
	 }
	 
	 
	
}
