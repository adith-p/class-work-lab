#include<stdio.h>
#include<stdlib.h>
#include <string.h>

int main(){
	int choice,val,target, nodeNumber = 1,flag = 0;

	struct node{
		struct node *prev;
		int value;
		struct node *next;
	};

	struct node *head;
	struct node *temp;

	while(1){
		printf("enter the options \n");
		printf(" 1: insert\n");
		printf(" 2: deletion\n");
		printf(" 3: search\n");
		printf(" 4: display\n");
		printf(" 5: exit\n");

		scanf("%d",&choice);
		struct node *ptr;
		if(choice == 1){
			ptr = (struct node*)malloc(sizeof(struct node));
		
	
			printf("enter the val");
			scanf("%d", &val);
			if(head == NULL){
				ptr -> value = val;
				ptr -> next = NULL;
				ptr -> prev = NULL;
				head = ptr;
			}else{
				ptr -> value = val;
				ptr -> next = head;
				ptr -> prev = NULL;
				head = ptr;
			}
			
					
		}
		if(choice == 2){

			if(head == NULL){
				printf("underflow");
				continue;
			}
			if( head->next == NULL){
				free(head);
				head = NULL;
				continue;
			}
			
			temp = head;
			while(temp->next->next != NULL){
				temp = temp->next;
		
			}
			free(temp->next);
			temp->next = NULL;
		}
		if(choice == 3){
			temp = head;
			printf("enter the target value");
			scanf("%d",&target);
			
			while(temp != NULL){
			
				if(temp->value == target){
					printf("value found on %d ",nodeNumber);
					flag = 1;
					break;
				}

				temp = temp->next;
				nodeNumber++;

			}
			if(flag == 0){
			printf(" value not in list\n");
			}
		}
		if(choice == 4){
			temp = head;
			while(temp != NULL){
				printf("(%d)->",temp->value);
				temp = temp->next;
			
			}
		}
		if(choice == 5){
			break;
		}	
	}
}

		


