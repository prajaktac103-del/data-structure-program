#include<stdio.h>
int main(){
	int i,a[5],key,n;
	printf("\n enter any 5 no:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("enter a key value");
	scanf("%d",&key);
	
	
	printf("\n array elements:");
	for(i=0;n-a[i];i++)
	{
	  if(a[i]==key){
	  
	  	printf("\n element found ",i+1);
	  	return 0;
	  }
    }
	  
	 printf("\n element not found");
       
	   
    
	
	return 0;
}