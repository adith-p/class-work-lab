
#include<stdio.h>
#define MAX 5

int main(){
	// full case (rear + 1) % MAX == front
	// empty case front == -1
	// when deleting front = (front + 1) % MAX
	// inserion case rear = rear
	int arr[MAX], rear = -1,front = -1 ,val;
	int choice;
	while(1){
		printf("enter the options\n");
		printf("1: insertion\n");
		printf("2: deletion\n");
		printf("3: display\n");
		printf("4: exit\n");

		scanf("%d",&choice);
		if(choice == 1){
			if (((rear + 1) % MAX) == front){
				printf("The queue is full");
			}
			else{
				printf("Enter the value to insert: ");
				scanf("%d",&val);
				rear = (rear + 1) % MAX;	
				
				arr[rear] = val;
					

				if(front == -1){
					front = 0;
				}
			}

		}
		else if(choice == 2){
			if(front == -1){
				printf(" the queue is empty ");
				continue;
			}
			if(front == rear){
				front = rear = -1;

			}else{
				front = (front + 1) % MAX;

			}
		}
		else if(choice == 3){
			if(front == -1){
				printf(" The queue is empty \n");
			}else{
				int begin = front;
				while(begin <= rear){
				printf("%d,",arr[begin]);
				begin++;
				}
				printf("\n");
			}
		}
		else if(choice == 4){
			break;
		}
}}	
