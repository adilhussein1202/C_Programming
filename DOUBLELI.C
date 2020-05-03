			#include<stdio.h>
			#include<stdlib.h>
			void append();
			void display();
			void addatbegin();
			void addatloc();
			int length();
			void del();
			void reverse();
			void swap();
			struct node{
			  int data;
			  struct node* left;
			  struct node* right;
			};
			struct node* root = NULL;
			void main(){
			int ch, len;
			while(1){
			printf("\t\t-------------------------------------\n");
			printf("\t\t1. To append\n");
			printf("\t\t2. To display the data\n");
			printf("\t\t3. To add at the beginning\n");
			printf("\t\t4. To add at the particular location\n");
			printf("\t\t5. Length\n");
			printf("\t\t6. Delete the node\n");
			printf("\t\t7. Reverse\n");
			printf("\t\t8. Swap the adjacent nodes\n");
			printf("\t\t9. Quit\n");
			printf("\t\t-------------------------------------\n");

			printf("Enter your choice : ");
			scanf("%d",&ch);
			switch(ch){
			case 1: append();
				break;
			case 2: display();
				break;
			case 3: addatbegin();
				break;
			case 4: addatloc();
				break;
			case 5: len = length();
				printf("The number of nodes are %d\n",len);
				break;
			case 6: del();
				break;
			case 7: reverse();
				break;
			case 8: swap();
				break;
			case 9: exit(1);
			default: printf("Invalid input\n\n");
			}
			}
			}

			void append(){
			struct node* temp;
			temp = (struct node*)malloc(sizeof(struct node));
			printf("Enter the node data :");
			scanf("%d",&temp->data);
			temp->left = NULL;
			temp->right = NULL;
			if(root == NULL){
			root = temp;
			}
			else{
			struct node* p;
			p = root;
			while(p->right != NULL){
			p = p->right;
			}
			p->right = temp;
			temp->left = p;
			}
			}


			void display(){
			struct node* temp;
			temp = root;
			if(temp == NULL){
			printf("There is no node in the list\n");
			printf("EMPTY LIST\n\n");
			}
			else{
			while(temp != NULL){
			printf("\t\t%d\n",temp->data);
			temp = temp->right;
			}
			}
			}


			int length(){
			int count = 0;
			struct node* temp;
			temp = root;
			if(temp == NULL){
			return count;
			}
			else{
			while(temp != NULL){
			count++;
			temp = temp->right;
			}
			return count;
			}
			}




			void addatbegin(){
			struct node* temp;
			temp = (struct node*)malloc(sizeof(struct node));
			printf("Enter the node data : ");
			scanf("%d",&temp->data);
			temp->left = NULL;
			temp->right = NULL;
			if(root == NULL){
			root = temp;
			}
			else{
			temp->right = root;
			root->left = temp;
			root = temp;
			}
			}



			void addatloc(){
			int loc, i = 1;
			struct node* temp, * p;
			printf("Enter the location : ");
			scanf("%d",&loc);
			p = root;
			while(i<loc-1){
			p = p->right;
			i++;
			}
			temp = (struct node*)malloc(sizeof(struct node));
			printf("Enter node data : ");
			scanf("%d",&temp->data);
			temp->left = NULL;
			temp->right = NULL;
			temp->right = p->right;
			p->right->left = temp;
			p->right = temp;
			temp->left = p;
			p->right = temp;
			}


			void del(){
			int i = 1, loc;
			struct node* temp, *p, *q;
			printf("Enter node location : ");
			scanf("%d",&loc);
			temp = root;
			if(loc == 1){
			temp = temp->right;
			temp->left = NULL;
			root = temp;
			free(temp);
			}
			else{
			p = root;
			while(i<loc-1){
			p = p->right;
			i++;
			}
			q = p->right;


			p->right = q->right;
			q->right->left = p;
			q->left = NULL;
			q->right = NULL;
			}
			}


			void reverse(){
			int i=0, j=length()-1, k;
			struct node* p, *q, *temp;
			p = q = root;
			while(i<j){
			k = 0;
			while(k<j){
			q = q->right;
			k++;
			}
			temp = p->data;
			p->data = q->data;
			q->data = temp;
			i++;
			j--;
			}
			}



			void swap(){
			struct node* p, *q, *r;
			int i = 1, loc;
			printf("Enter the location : ");
			scanf("%d",&loc);
			p = root;
			while(i<loc-1){
			p = p->right;
			i++;
			}
			q = p->right;
			r = q->right;
			q->right = r->right;
			r->right = p->right;
			p->right = r;
			r->left = p;
			q->left = r;
			q->right->left = r->right;
			}