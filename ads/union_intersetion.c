#include<stdio.h>

int main(){
	int arr1[100], arr2[100], arr3[100],arr4[100],len1,len2;

	printf(" enter the length of the arr1 and arr2 respectivly ");
	scanf("%d",&len1);
	scanf("%d",&len2);

	printf("enter the arr1 elements");
	for(int i = 0; i<len1; i++){
		scanf("%d",&arr1[i]);
	}
	printf(" enter the arr2 elements");
	for(int i = 0; i<len2; i++){
		scanf("%d",&arr2[i]);
	}

	// intersection
	int k = 0;
	for(int i=0; i<len1 ;i++){
		for(int j = 0; j<len2; j++){
			if (arr1[i]==arr2[j]){
				arr3[k] = arr1[i];
				k++;
				break;
			}
		}
	}

	// union
	
	for( int i = 0;i <len2; i++){
		int isDuplicate = 0;
		for (int j = 0; j<len1;j++){
			if (arr2[i] == arr1[j]){
				isDuplicate = 1;
				break;
			}
		}
		
		if (!isDuplicate){
			arr1[len1] = arr2[i];
			len1++;
		}
	}


    printf("Union of arrays: ");
    for(int i = 0; i < len1; i++) {
        printf("%d ", arr1[i]);
    }
    printf("\n");
	
	
}
