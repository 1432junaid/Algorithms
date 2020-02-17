#include<iostream>
using namespace std;
void swap(int *,int *);
void printer(int *a,int len);

int main(int argc ,char * argv[]){
	int a[] = {5,2,7,8,3,13,12,1,6};
	int len = sizeof(a)/sizeof(a[0]);
	int count = 0;
	printer(a,len);
	int flag;
	for(int i =0;i<len-1;i++){
		flag = 0;
		for(int j=0;j<len-i-1;j++){
			if(a[j]>a[j+1]){
				flag++;
				swap(&a[j],&a[j+1]);
				count++;
			}
		}
		if(flag == 0)break;
	}
	printer(a,len);
	cout<<"no of swap = "<<count<<endl;
	cout<<"flag = "<<flag<<endl;
	return 0;
}
void swap(int *p,int *q){
	int temp = *p;
	*p =*q;
	*q = temp;
}

void printer(int *a,int len){
	for(int i=0;i<len;i++){
		cout<<"  "<< a[i];
	}
	cout<<endl;
}
