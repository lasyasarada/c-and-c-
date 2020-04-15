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
node *findNode(int aele){
	node *h = head;
    while(h != NULL)
    {
         if(h->data == aele)
             return h;
         h = h->next;
    }
    return NULL;
}
bool insertAfter(int aele,int newele){
	node *t;
	node *current=findNode(aele);
	if(current==NULL){
		return false;
	}
	else{
		t=newNode(newele);
		t->next=current->next;
		current->next=t;
		return true;
	}
}
void deleteBegin(){
	node *h;
	h = head; 
    head = (head)->next;
    free(h);
	printf("Deleted...");
	
}
void deleteAfter(int ele){
      	node *temp;
     // node *current=findNode(ele);
     	node *h;
		h = head; 
		while(h!=NULL){
     	if(h->data ==ele)
      	{
     		temp = h;
          	h = (h)->next;
          	free(temp);
          	break;
  		}
  	}

}
int main() 
{ 
    int ele,n,i,aele,newele,aelement;
    scanf("%d",&n);
    for (i=0;i<n;i++){
    	scanf("%d",&ele);
    	insertBegin(ele);
	}
	display();
	printf("After which element:");
	scanf("%d",&aele);
	printf("New element:");
	scanf("%d",&newele);
	if(insertAfter(aele,newele)){
		printf("Element inserted.\n");
	}
	else{
		printf("Element cannot be inserted.\n");
	}
	display();
	deleteBegin();
	printf("Element deleted.\n");
	display();
	printf("\n");
	scanf("%d",&aelement);
	deleteAfter(aelement);
	display();
} 
