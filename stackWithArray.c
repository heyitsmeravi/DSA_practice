#include<stdio.h>
#include<stdlib.h>

#define n 5
int stack[n];
int top=-1;
int isEmpty(){
	if (top==-1){
		return 1;
	}else{
		return 0;
	}
}
int isFull(){
	if (top==n-1){
                return 1;
        }else{
                return 0;
        }
}
void push(int x){
	if(isFull()){
		printf("Stack OverFlow!\n");
	}else{
		top++;
		stack[top]=x;
	}
}
void pop(){
	if (isEmpty()){
		printf("Stack UnderFlow!\n");
	}else{
		printf("Popped %d\n",stack[top]);
		top--;
	}
}
void peek(){
	if (isEmpty()){
		printf("Stack is Empty!\n");
	}else{
		printf("The Element at Top is %d\n",stack[top]);
	}
}
void display(){
	int i;
	for (int i=top;i>=0;i--){
		printf("| %d |",stack[i]);
		printf("\n");
	}
	printf("------\n");
}
/*
int main(){
	int ch;
	do{
	printf("enter the choice: \n"
	"1 for push  \n"
	"2 for pop  \n"
	"3 for peek  \n"
	"4 for display \n"
	"5 for exit\n");
	scanf("%d",&ch);
	switch(ch){
		case 1: 
			int x;
			printf("Enter the data to push: " );
			scanf("%d",&x);
			push(x);
			break;
		case 2:
			pop();
			break;
		case 3: 
			peek();
			break;
		case 4: 
			display();
			break;
		case 5:
			ch=0;
			break;
		default: 
			printf("Invalid Case!!\n");
		}
	}
	while(ch!=0);



	return 0;
}
*/
