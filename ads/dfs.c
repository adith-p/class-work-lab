#include<stdio.h>

void dfs(int);

int adjmat[5][5], visited[5];
int nodes;

int main(){

	printf("enter the no of nodes\n");
	scanf("%d",&nodes);
	
	printf("enter the adj matrixs");
	for(int i = 0; i < nodes; i ++){
		for(int j = 0; j <nodes; j++){
			scanf("%d", &adjmat[i][j]);
		}
	}

	for(int i = 0; i < nodes; i++){
		visited[i] = 0;

	}
	printf(" search starting from 0");
	dfs(0);



}

void dfs(int i){
	int j;
	printf("\n %d",i);
	visited[i] = 1;

	for(int j = 0; j < nodes;j++){
	if(!visited[j] && adjmat[i][j] == 1){
	dfs(j);
	}
}}

