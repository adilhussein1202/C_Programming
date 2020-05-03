		#include<stdio.h>
		#include<stdlib.h>
		#include<conio.h>
		void push();
		void pop();
		void display();
		struct node{
		  int data;
		  struct node* link;
		  };
		struct node* top = NULL;
		void main(){
		int ch;
		clrscr();
		while(1){
		printf("\t\t-------------------------------------\n");
		printf("\t\t1. Push\n");
		printf("\t\t2. Pop\n");
		printf("\t\t3. Display\n");
		printf("\t\t4. Quit\n");
		printf("\t\t-------------------------------------\n");

		printf("Enter the choice : ");
		scanf("%d",&ch);
		switch(ch){
		case 1: push();
			break;
		case 2: pop();
			break;
		case 3: display();
			break;
		case 4: exit(1);
		default: printf("\t\tInvalid Input\n\n");
		}
		}
		}

		void push(){
		struct node* temp;
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter node data : ");
		scanf("%d",&temp->data);
		temp->link = top;
		top = temp;
		}


		void pop(){
		struct node* temp;
		if(top == NULL){
		printf("\t\tStack is empty\n\n");
		}
		else{
		printf("The popped element is %d\n",top->data);
		temp = top;
		top = top->link;
		temp->link = NULL;
		free(temp);
		}
		}


		void display(){
		struct node* temp;
		if(top == NULL){
		printf("\t\tStack is Empty\n\n");
		}
		else{
		temp = top;
		while(temp != NULL){
		printf("\t\t%d\n",temp->data);
		temp = temp->link;
		}
		}
		}