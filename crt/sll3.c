#include <stdio.h> 
#include<stdbool.h>
#include <stdlib.h> 
  
typedef struct list { 
    int data; 
    struct list* next; 
}node; 
node *head=NULL;
node *newNode(int element){
	node *temp=(node*)malloc(sizeof(node));
	temp->data=element;
	temp->next=NULL;
	return temp;
}
void insertBegin(int element){
	node *temp=newNode(element);
	if(head==NULL){
		head=temp;
	}
	else{
		temp->next=head;
		head=temp;
	}
}
void display(){
	node *h=head;
	if(head==NULL){
		printf("List is empty");
	}
	else{
		while(h!=NULL){
			printf("%d ",h->data);
			h=h->next;
		}
	}
	printf("\n");
}
/*
void printReverse() 
{    
	node *prev;
	node *current;
	if(head!=NULL){
		prev=head;
		current=head->next;
		head=head->next;
		prev->next=NULL;
		
		while(head!=NULL){
			head=head->next;
			current->next=prev;
			prev=current;
			current=head;  
    		printf("%d  ", head->data);
		}
		head=prev;
		
	}
	
} */
void printReverse(node* head) 
{ 
    if (head == NULL) 
 		return;
    printReverse(head->next); 
    printf("%d ", head->data); 
} 
   
int main() 
{ 
    int ele,n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
    	scanf("%d",&ele);
    	insertBegin(ele);
	}
	display();
	printf("\n");
	printReverse(head);
} 
