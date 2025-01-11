#include<stdio.h>
#define MAX 5

int main(){
	int arr[MAX], rear = -1, val;
	int choice;
	while(1){
		printf("enter the options\n");
		printf("1: insertion\n");
		printf("2: deletion\n");
		printf("3: display\n");
		printf("4: exit\n");

		scanf("%d",&choice);
		if(choice == 1){
			if (rear < MAX-1){
				printf("Enter the value to insert: ");
				scanf("%d",&val);
				arr[rear + 1] = val;
				rear++;
			}
			else{
				printf(" queue is full ");
			}

		}
		else if(choice == 2){
			if(rear == -1){
				printf("queue is empty \n");
				continue;
			}
			for(int i = 0; i <= rear; i++){
				arr[i] = arr[i+1];
			}
			rear--;
		}
		else if(choice == 3){
			if(rear == -1){
				printf(" The queue is empty \n");
			}else{
				for(int i = 0; i <= rear; i++){
					printf("%d, ",arr[i]);
				}
				printf("\n");
			}
		}
		else if(choice == 4){
			break;
		}
}	
}

