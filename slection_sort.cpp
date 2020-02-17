#include<iostream>
using namespace std;
void swap(int *,int *q);
void printer(int *,int);

int main(int argc , char* argv[]){
        int a[] = {5,2,7,8,3,13,12,6,1};
        int len = sizeof(a)/sizeof(a[0]);
        int count = 0;
        printer(a,len);
        int flag;
        for(int i =0;i<len-1;i++){
                flag = 0;
		int min = i;
                for(int j=i;j<len;j++){
                        if(a[j]<a[min]){
                                min = j;
                                count++;
                        }
                }
                if(i != min){
			swap(&a[i],&a[min]);
        	}
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


