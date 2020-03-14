#include<stdio.h>
void count_sort(int *,int,int);
int main(){
	int arr[] = {123,234,110,96,843,609,100};
	int len = sizeof(arr)/sizeof(arr[0]);
	int k=11;
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
	printf("\n");
	return 0;
}

void count_sort(int *arr,len,k){
	int c[k];
	for(int i=0; i<k; i++){
		for(int j =1;j<len;j++){
			c[arr[j]] = c[arr[j]] + 1;
		}
	}
	for(int )
