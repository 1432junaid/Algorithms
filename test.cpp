#include<iostream>
using namespace std;
void display(int *,int);
void bubble_sort(int *,int);
void swap(int *,int *);
int main(){
	int a[] = {7,3,8,5,4,9,10,6};
	int len = sizeof(a)/sizeof(a[0]);
	display(a,len);
	bubble_sort(a,len);
	display(a,len);

	return 0;
}

void display(int *a,int len){
	for(int i = 0; i<len; i++){
		cout<<"  "<<a[i];
	}
	cout<<endl;
}
void swap(int *p,int *q){
	int temp = *p;
	*p = *q;
	*q = temp;
}

void bubble_sort(int * a, int len){
	for(int i = 0; i<len;i++){
		for(int j=0; j <len-i-1; j++){
			if(a[j]>a[j+1]){
				swap(&a[j],&a[j+1]);
			}
		}
	}
//	display(a,len);
}
