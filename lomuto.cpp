#include<iostream>
using namespace std;
void swap(int *,int *);
void printer(int *,int);
int partition(int *,int,int);
void quick_sort(int *,int,int);
int main(int argc ,char * argv[]){
        int a[] = {5,2,7,8,3,13,12,1,6};
        int len = sizeof(a)/sizeof(a[0]);
        printer(a,len);
//	int result = partition(a,a[0],a[len-1]);
	quick_sort(a,a[0],a[len]);
	printer(a,len);
//	cout<<result<<endl;
        return 0;
}

int partition(int *a, int low,int high){
	int pivot = a[high];
	int i = low -1;
	for(int j = low; j <= high; j++){
		if(a[j] <= pivot){
		i++;
		swap(&a[i],&a[j]);
		}
	}
	swap(&a[i+1],&a[high]);
	return (i+1);
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


void quick_sort(int a[],int low,int high){
    int pivot;
    if(low<high)
    {
        pivot=partition(a,low,high);
        quick_sort(a,low,pivot-1);
        quick_sort(a,pivot+1,high);
    }
}

