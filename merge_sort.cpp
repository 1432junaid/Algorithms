#include<iostream>
using namespace std;
int * merge(int *,int,int*,int);
void printer(int *,int);
int main(){
	int a1[] = {2,4,6,8,10,12,14};
	int a2[] = {1,3,9,11,15,17};
	int len1 = sizeof(a1)/sizeof(a1[0]);
	int len2 = sizeof(a2)/sizeof(a2[0]);

	printer(a1,len1);
	printer(a2,len2);
	int *result = merge(a1,len1,a2,len2);
	printer(result,(len1+len2));
}
int * merge(int *a1,int len1,int *a2,int len2){
	int i=0,j=0,k=0;
	int *a  = new int[len1+len2];
	int m=(len1+len2);
	while(m){
		if(a1[i] <= a2[j]){
			a[k] = a1[i];
			i++;
		}else{
			a[k] = a2[j];
			j++;
		}
		k++;
		m--;
	}
	return a;
}


void printer(int *a,int len){
        for(int i=0;i<len;i++){
                cout<<"  "<< a[i];
        }
        cout<<endl;
}



