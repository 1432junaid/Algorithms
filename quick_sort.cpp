#include<iostream>	using namespace std;
int pivot(int *,int,int );
void printer(int *,int );
void swap(int *,int*);
int main(){
	int a[] = {7,3,8,5,4,9,10,6};
	int len = sizeof(a)/sizeof(a[0]);
	printer(a,len);
	cout<<endl;
	cout<<len<<endl;
	int si = a[3];
	int li = a[len-1];
//	int * a = pivot(a,si,li);
	cout<<a[si]<<endl;

	cout<<a[li]<<endl;

	return 0;
}
/*
int pivot(int *a,int si,int li);
	int pivot = si;
	int i =  si + 1,j = li;
	while(i < j){
		swap();
	
	}
	swap(&a[pivot],&a[j]);
	return j;
}
*/

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

