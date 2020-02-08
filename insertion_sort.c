#include<stdio.h>
int enter_number(int);
int *p;
int main(){
	int b,size;
	printf("Insertion sort\n");
//	scanf("%d",&a);
	while(1){
		printf("1.Enter numbers\n");
		printf("2.sort\n");
		printf("3.Exit");
		scanf("%d",&b);
		switch(b){
			case 1:
				printf("Enter the size of array");
				scanf("%d",&size);
				enter_number(size);
			break;

			case 2:
				sort();
			break;

			case 3:
				printf("bye-bye\n");
			break;

			default:
				printf("\n\tinvalid options!\n");
		}
	}
	return 0;
}


