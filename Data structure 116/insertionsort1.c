#include<stdio.h>
void main(){
	int a[5],i,j,key,n;
	printf("Enter number of elements: ");
    scanf("%d",&n);
	printf("Enter array elements:");
	for(i=0;i<5;i++)
	{
		scanf("%d",& a[i]);
		
	}
	for(i=0;i<n;i++){
		key=a[i];
		j=i-1;
		while(j>=0&&a[j]>key){
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=key;
	}
		printf("Sorted aray:\n");
    for (i = 0; i < 5; i++) 
	{
        printf("%d,", a[i]);
    }
}