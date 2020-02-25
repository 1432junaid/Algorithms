#include<iostream>
using namespace std;
void insertion_sort(int *,int );
void printer(int *,int);
int main(){
	int a[] = {7,3,8,5,4,9,10,6};
	int len = sizeof(a)/sizeof(a[0]);
	printer(a,len);
	insertion_sort(a,len);
	printer(a,len);
	cout<<endl;
	return 0;
}
void insertion_sort(int *a,int len){
	for(int i = 0;i<len;i++){
		int temp = a[i];
		int j = i-1;
		while(j >= 0 && a[j] > temp){
			a[j+1] = a[j];
			j--;
		}
		a[j+1]=temp;
	}
}

void printer(int *a,int len){
        for(int i=0;i<len;i++){
                cout<<"  "<< a[i];
        }
        cout<<endl;
}

