		#include<stdio.h>
		#include<stdlib.h>
		#include<conio.h>
		void append();
		void addatbegin();
		void addatloc();
		void del();
		void display();
		void swap();
		int len();
		void reverse_list();
		struct node{
		int data;
		struct node* link;
		};
		struct node* root = NULL;
		void main()
		{
		int ch, list_len;
		while(1)
		{
		printf("\t-------------------------------------------\n");
		printf("\t\t1. To append\n");
		printf("\t\t2. To add at begin\n");
		printf("\t\t3. To add at a particular location\n");
		printf("\t\t4. To delete the node from the list\n");
		printf("\t\t5. To display the list\n");
		printf("\t\t6. To swap two adjacent nodes\n");
		printf("\t\t7. Length\n");
		printf("\t\t8. Reverse the list\n");
		printf("\t\t9. Quit\n");
		printf("\t--------------------------------------------\n");
		printf("Enter your choice : ");
		scanf("%d",&ch);
		switch(ch)
		{
		case 1: append();
			break;
		case 2: addatbegin();
			break;
		case 3: addatloc();
			break;
		case 4: del();
			break;
		case 5: display();
			break;
		case 6: swap();
			break;
		case 7: list_len = len();
			printf("Length of the list is %d\n",list_len);
			break;
		case 8: reverse_list();
			break;
		case 9: exit(0);
		default: printf("Invalid Input\n");
		}
		}
		}



		void append(){
		struct node* temp;
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter node data : ");
		scanf("%d",&temp->data);
		temp->link = NULL;
		if(root == NULL){
		root = temp;
		}
		else
		{
		struct node* p;
		p = root;
		while(p->link != NULL){
		p = p->link;
		}
		p->link = temp;
		}
		}



		int len(){
		int count = 0;
		struct node* temp;
		temp = root;
		while(temp != NULL){
		count++;
		temp = temp->link;
		}
		return count;
		}



		void addatbegin(){
		struct node* temp;
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter node data : ");
		scanf("%d",&temp->data);
		temp->link = NULL;
		if(root == NULL){
		root = temp;
		}
		else
		{
		temp->link = root;
		root = temp;
		}
		}



		void display(){
		struct node* temp;
		temp = (struct node*)malloc(sizeof(struct node));
		temp = root;
		if(temp == NULL){
		printf("No node in the list\n");
		}
		else{
		while(temp != NULL){
		printf("\t\t%d\n",temp->data);
		temp = temp->link;
		}
		}
		}



		void addatloc(){
		int loc, leng, i=1;
		struct node* temp, *p;
		leng = len();
		printf("Enter the location : \n");
		scanf("%d",&loc);
		if(loc > leng){
		printf("\nInvalid Location\n");
		printf("Currently the number of nodes in the list are %d\n",leng);
		}
		else{
		p = root;
		while(i<loc-1){
		p = p->link;
		i++;
		}
		temp = (struct node*)malloc(sizeof(struct node));
		printf("Enter node data : \n");
		scanf("%d",&temp->data);
		temp->link = NULL;
		temp->link = p->link;
		p->link = temp;
		}
		}



		void del(){
		struct node* temp,* p,* q;
		int loc, leng = len(), i =1;
		printf("Enter the location : ");
		scanf("%d",&loc);
		if(loc > leng){
		printf("Invalid Input\n");
		}
		else if(loc == 1){
		temp = root;
		root = temp->link;
		temp->link = NULL;
		free(temp);
		}
		else{
		p = root;
		while(i<loc-1){
		p = p->link;
		i++;
		}
		q = p->link;
		p->link = q->link;
		q->link = NULL;
		free(q);
		}
		}



		void swap(){
		struct node *p,*q,*r;
		int i=1, loc;
		printf("Enter location : ");
		printf("If you enter 2 then 2nd and 3rd nodes will be swaped\n");
		scanf("%d",&loc);
		p = root;
		while(i<loc-1){
		p = p->link;
		i++;
		}
		q = p->link;
		r = q->link;
		q->link = r->link;
		r->link = q;
		p->link = r;
		}


		void reverse_list(){
		struct node* p,* q, * temp;
		int i = 0, j = len()-1, k;
		p = q = root;
		while(i<j){
		k = 0;
		while(k<j){
		q = q->link;
		k++;
		}
		temp = p->data;
		p->data = q->data;
		q->data = temp;
		i++;
		j--;
		p = p->link;
		q = root;
		}
		}
















