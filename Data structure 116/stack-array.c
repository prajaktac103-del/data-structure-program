#include<stdio.h>
#define MAX 5

int stack[MAX];
int top=-1;

int isEmpty(){
   return top==-1;
	}

int isFull(){
	return top==MAX-1;
}

void push(int value){
	if(isFull()){
	
	  printf("\n stack overflow");	
	}
	else{
		top++;
		stack[top]=value;
		printf("\n %d pushed into stack",value);
	}
}
void pop(){
	if(isEmpty()){
		printf("\n stack is underflow");
	}
	else{
		printf("\n%d poped into stack",stack[top]);
		top--;
		
	}
}
int peek(){
	if(isEmpty()){
		return-1;
	}
	else{
	
	return stack[top];
}
}
void display(){
	int i;
	if(top==-1){
		printf("\n stack is empty");
		return;
		
	}
	printf("\nstack:");
	for(i=top;i>=0;i--){
		printf("%d",stack[i]);
		printf("\n");
	}
}

int main(){
	int choice,value;
	while(1){
		printf("\n--stack menu--");
		printf("\n 1.isEmpty");
		printf("\n 2.isFull");
		printf("\n 3.push");
		printf("\n 4.pop");
		printf("\n 5.peek");
		printf("\n 6.display");
    	printf("\n 7.exit");
					
					
		printf("\n enter choice:");
		scanf("%d",&choice);
	
	switch(choice){
		case 1:
			isEmpty();
			
			break;
		case 2:
			isFull();
			
			break;
		case 3:
			printf("\n enter value:");
			scanf("%d",&value);
			push(value);
			break;
		case 4:
			pop();
			break;
		case 5:
			peek();
			printf("\npeek value=%d",stack[top]);
			break;
		case 6:
		    display();
		    break;
		case 7:
		    printf("\n exit");
		    return 0;
		default:
			printf("\n invalid choice!!!!!!");
			
	}
}
	return 0;
}
