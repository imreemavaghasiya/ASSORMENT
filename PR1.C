#include<stdio.h>

main()
{
	int a[100];
	int i,n;
	printf("Enter Size of Array = ");
	scanf("%d",&n);
	printf("Array Elements = ");
	for(i=0;i<n;i++)
	{
		printf("a[%d] = ",i);
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
	if(a[i]<0)
	  {
	  	
		printf("%d\n",a[i]);
   	  }
		
	}
	
	
	
}
