#include<stdio.h>
void insertion_sort(int *,int);
void printer(int *,int);
int main(){
	int a[] = {2,5,4,6,7,1};
	int len = sizeof(a)/sizeof(a[0]);
	printer(a,len);
	insertion_sort(a,len);
	printer(a,len);
	return 0;
}

void insertion_sort(int a[],int len){
	for(int j = 1; j < len; j++){
		int key = a[j];
		int i = j-1;
		while(i >= 0 && a[i] > key){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
}
void printer(int a[],int len){
	for(int i = 0; i<len; i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
