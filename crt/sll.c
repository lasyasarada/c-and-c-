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
int main() 
{ 
    int ele,n,i;
    scanf("%d",&n);
    for (i=0;i<n;i++){
    	scanf("%d",&ele);
    	insertBegin(ele);
	}
	display();
} 
