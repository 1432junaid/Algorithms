#include<iostream>
using namespace std;
void  merge(int *,int);
void printer(int *,int);
int main(){
	int a[] = {7,9,15,30,35,47,59,5,10,12,37,39};
	int len = sizeof(a)/sizeof(a[0]);

	printer(a,len);
	merge(a,len);
//	printer(a1,len1);
}
void  merge(int *a,int len){
	int i = 0;
	int j = 0;
	while(a[i] <= (len-1)){
		if(a[i] <= a[j])j = i;
		j++;
	}
	cout<<j<<endl;
}



void printer(int *a,int len){
        for(int i=0;i<len;i++){
                cout<<"  "<< a[i];
        }
        cout<<endl;
}



