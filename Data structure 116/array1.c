#include<stdio.h>
int main(){
	int a[5],i;
	printf("\n enter any 5 no:");
	for(i=0;i<5;i++){
		scanf("%d",&a[i]);
	}
	printf("\n array elements:");
	for(i=0;i<5;i++){
		printf("%d",a[i]);
	}
	return 0;
}