		#include<stdio.h>
		#include<conio.h>
		#define CAPACITY 5
		void insert();
		void del();
		void traverse();
		int queue[CAPACITY];
		int front = 0;
		int rear = 0;
		void main(){
		int ch;
		clrscr();
		while(1){
		printf("\t\t1. Insert\n");
		printf("\t\t2. Delete\n");
		printf("\t\t3. Traverse\n");
		printf("\t\t4. Quit\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch){
		case 1: insert();
			break;
		case 2: del();
			break;
		case 3: traverse();
			break;
		case 4: exit(1);
		default: printf("\t\tInvalid Input\n\n");
		}
		}
		}


		void insert(){
		int ele;
		if(rear == CAPACITY){
		printf("\t\tThe queue is full\n\n");
		}
		else{
		printf("Enter the element : ");
		scanf("%d",&ele);
		queue[rear] = ele;
		rear++;
		}
		}


		void del(){
		int i;
		if(front == rear){
		printf("\t\tThe queue is empty\n\n");
		}
		else{
		printf("\t\tThe deleted element is %d\n",queue[front]);
		for(i=0;i<rear;i++){
		queue[i] = queue[i+1];
		}
		rear--;
		}
		}


		void traverse(){
		int i;
		if(front == rear){
		printf("\t\tThe Queue is empty\n\n");
		}
		else{
		for(i = front; i<rear; i++){
		printf("\t\t%d\n",queue[i]);
		}
		}
		}