		#include<stdio.h>
		#include<conio.h>
		#define CAPACITY 5
		int stack[CAPACITY], top = -1;
		void push(int);
		int isFull();
		int pop();
		int isEmpty();
		void peek();
		void traverse();
		void main(){
		int ch, item;
		while(1){
		printf("**************************************\n");
		printf("1. Push\n");
		printf("2. Pop\n");
		printf("3. Peek\n");
		printf("4. Traverse\n");
		printf("5. Quit\n");

		printf("Enter the choice : ");
		scanf("%d",&ch);
		switch(ch){

		case 1: printf("Enter the element : ");
			scanf("%d",&item);
			push(item);
			break;
		case 2: item = pop();
			if(item == 0){
			printf("Stack is empty\n\n");
			}
			else
			printf("Popped element is %d\n",item);
			break;
		case 3: peek();
			break;
		case 4: traverse();
			break;
		case 5: exit(0);
		default: printf("Invalid input\n\n");
		}
		}
		}
		void push(int ele){
		if(isFull()){
		printf("Stack is full\n");
		}
		else{
		top++;
		stack[top] = ele;
		printf("Pushed element is %d\n",ele);
		}
		}
		int isFull(){
		if(top == CAPACITY -1){
		return 1;
		}
		else{
		return 0;
		}
		}
		int pop()
		{
		if(isEmpty()){
		return 0;
		}
		else{
		return stack[top--];
		}
		}
		int isEmpty(){
		if(top == -1){
		return 1;
		}
		else{
		return 0;
		}
		}
		void peek(){
		if(isEmpty()){
		printf("Stack is empty\n");
		}
		else{
		printf("Element at the top is %d",stack[top]);
		}
		}
		void traverse(){
		if(isEmpty()){
		printf("Stack is empty\n");
		}
		else{
		int i;
		for(i=0;i<=top;i++){
		printf("%d\n",stack[i]);
		}
		}
		}










