#include<iostream>
using namespace std;
void  merge(int *,int,int*,int);
void printer(int *,int);
int main(){
	int a1[] = {7,9,15,30,35,47,59};
	int a2[] = {5,10,12,37,39,0,0,0,0,0,0,0};
	int len1 = sizeof(a1)/sizeof(a1[0]);
	int len2 = sizeof(a2)/sizeof(a2[0]);

	printer(a1,len1);
	printer(a2,len2);
	merge(a1,len1,a2,len2);
	printer(a2,len2);
}
void  merge(int *a1,int len1,int *a2,int len2){
	int i =(len1-1);
	int j = (len2-len1)-1;
	int k =(len2-1);
//	int z = k;
	while(k>=0&& j>=0 && i>=0){
//	for(z;z>=0;z--){
		if(a2[j] <= a1[i]){
			a2[k] = a1[i];
			printf("%d\n",a2[k]);
			i--;
			k--;
		}else if(a2[j] > a1[i]){
			a2[k] = a2[j];
			printf("%d\n",a2[k]);
			j--;
			k--;
		}
	}
}


void printer(int *a,int len){
        for(int i=0;i<len;i++){
                cout<<"  "<< a[i];
        }
        cout<<endl;
}



