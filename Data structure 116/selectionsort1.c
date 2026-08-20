#include<stdio.h>
void main()
{
	int a[5],i,j,min,n,temp;
	printf("Enter number of elements: ");
    scanf("%d", &n);
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=0;i<n;i++)
	{
		min=i;
		for(j=i+1;j<n;j++)
		{
			if(a[j]<a[min])
			{
				min=j;
				}
			}
				temp=a[i];
				a[i]=a[min];
				a[min]=temp;
			
		
	}
	printf("Sorted aray:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d,", a[i]);
    }
}