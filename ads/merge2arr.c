#include<stdio.h>


int main(){
	int a1[100], a2[100], len1, len2;

	printf("enter the arr1 and arr2 len respectively: ");

	scanf("%d",&len1);
	scanf("%d",&len2);
	printf("enter the values of a1: ");
	for(int i = 0; i<len1; i++){
		scanf("%d",&a1[i]);
	}
	printf("enter the values of a2: ");
	for(int i = 0; i<len2; i++){
		scanf("%d",&a2[i]);
	}
	
	for(int i = len1; i< len1+len2; i++){
	       a1[i] = a2[i-len1];

	}
	
	for(int i = 0; i < len1+len2; i++){
		printf("%d ",a1[i]);
	}
}
