	#include<stdio.h>
	#include<stdlib.h>
	#include<conio.h>
	void del();
	void insert();
	void display();
	struct node{
	int data;
	struct node* link;
	};
	struct node* front = NULL;
	struct node* rear = NULL;
	void main(){
	int ch;
	clrscr();
	while(1){
	printf("\t\t1. Insert\n");
	printf("\t\t2. Delete\n");
	printf("\t\t3. Display\n");
	printf("\t\t4. Quit\n");
	printf("Enter your choice : ");
	scanf("%d",&ch);
	switch(ch){
	case 1: insert();
		break;
	case 2: del();
		break;
	case 3: display();
		break;
	case 4: exit(1);
	default: printf("\t\tI N V A L I D  I N P U T\n\n");
	}
	}
	}



	void insert(){
	struct node* temp;
	temp = (struct node*)malloc(sizeof(struct node));
	printf("Enter data : ");
	scanf("%d",&temp->data);
	temp->link = NULL;
	if(front == NULL && rear == NULL){
	front = temp;
	rear = temp;
	}
	else{
	rear->link = temp;
	rear = temp;
	}
	}


	void del(){
	struct node* temp;
	temp = front;
	if(front == NULL){
	printf("\t\tQueue is empty\n");
	}
	else if(front == rear){
	printf("\t\tDeleted element is %d\n",temp->data);
	front = NULL;
	rear = NULL;
	}
	else{
	printf("\t\tDeleted element is %d\n",temp->data);
	front = temp->link;
	free(temp);
	}
	}


	void display(){
	struct node* temp;
	temp = front;
	if(front == NULL){
	printf("\t\tQueue is empty\n\n");
	}
	else{
	while(temp != NULL){
	printf("\t\t%d\n",temp->data);
	temp = temp->link;
	}
	}
	}