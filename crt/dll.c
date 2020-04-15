#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
typedef struct list{
	struct list *prev;
	int data;
	struct list *next;
}node;
node *head=NULL;
node *tail=NULL;
node *newNode(int ele){
	node *temp=(node*)malloc(sizeof(node));
	temp->data=ele;
	temp->next=temp->prev=NULL;
	return temp;
}
void insertbegin(int ele){
	node *t=newNode(ele);
	if(head==NULL)
		head=tail=t;
	else{
		t->next=head;
		head->prev=t;
		head=t;
	}
}
node *findnode(int e){
	node *h=head;
	while(h!=NULL){
		if(h->data == e){
			return h;
		}
		h=h->next;
	}
	return NULL;
}
bool insertafter(int ae,int e){
	node *temp;
	node *current=findnode(ae);
	if(current == NULL)
		return false;
	else {
		temp=newNode(e);
		temp->next=current->next;
		current->next->prev=temp;
		temp->prev=current;
		current->next=temp;
		return true;
		
	}
		
} 
void insertend(int e){
	node *t=newNode(e);
	if(head==NULL)
		head=tail=t;
	tail->next=t;
	t->prev=tail;
	tail=t;
}
void display(){
	if(head==NULL)
		printf("empty");
	else{
		printf("\nhead to tail\n");
		node *temp=head;
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->next;
		}
		printf("\ntail to head\n");
		temp=tail;
		
		while(temp!=NULL){
			printf("%d ",temp->data);
			temp=temp->prev;
		}
		
	}
}
int main(void){
	insertbegin(15);
	insertbegin(10);
	insertbegin(10);
	insertend(20);
	if(insertafter(10,5)){
		printf("inserted\n");
	}
	else
		printf("Not inserted\n");
	if(insertafter(30,5)){
		printf("inserted\n");
	}
	else
		printf("Not inserted\n");
	if(insertafter(15,5)){
		printf("inserted");
	}
	else
		printf("Not inserted\n");
		
	display();
}

