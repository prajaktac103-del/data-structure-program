#include<stdio.h>
int main(){
	int a[5],i,key,n,low,high,mid;
	printf("\n enter any no:");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter a key value");
	scanf("%d",&key);
	n=5;
	low=0;
	high=n-1;
	while(low<=high){
	
		mid=low+high/2;
		}
	if(key==a[mid]){
	
	    printf("\n element found",mid+1);
		}
	else
	 if(key<a[mid]){
	 
	   high=mid-1; 
	     }
	 else{
	 
	  low=mid+1;
      
	
    }

    printf("\n element is not found");
	return 0;
}