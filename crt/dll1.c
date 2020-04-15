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
void alternate(struct node *head){
	if(head==NULL)
		return;
	printf("%d ",head->data);
	if(head->next!=NULL){
		alternate(head->next->next);
	}
	printf("%d ",head->data);
}
int main(void){
	int i,n,num;
	struct node *head=NULL;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&num);
		push(&head,num);
	}
	alternate(head);
	return 0;
}
