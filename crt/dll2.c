#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node *next;
};
void push(struct node** head,int new_data){
	struct node* new_node=(struct node*)malloc(sizeof(struct node));
	new_node->data=new_data;
	new_node->next=(*head);
	(*head)=new_node;
	
}
void deleterepeated(struct node* head){
	struct node* current=head;
	struct node* temp;
	if(current==NULL)
		return;
	while(current->next!=NULL){
		if(current->data == current->next->data){
			temp=current->next->next;
			free(current->next);
			current->next=temp;
		}
		else{
			current =current->next;
		}
	}
}
void print(struct node* node){
	while(node!=NULL){
		printf("%d ",node->data);
		node =node->next;
	}
}
int main(void){
	int i,n,num;
	struct node *head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		push(&head,num);
	}
	deleterepeated(head);
	print(head);
	return 0;
}
