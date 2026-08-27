#include<stdio.h>
int main(){
	int i,j,a[10],gap,temp;
	printf("\n Enter any 10 numbers:");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	for(gap=10/2;gap>0;gap=gap/2){
		for(i=gap;i<10;i++)
		{
			temp=a[i];
			for(j=i; j>=gap && a[j-gap]>temp;j=j-gap)
				a[j]=a[j-gap];
				
			a[j]=temp;
		}
	}
	printf("\n array is sorted(shell):");
	for(i=0;i<10;i++)
	{
		printf("%d,",a[i]);
	}
	return 0;
}