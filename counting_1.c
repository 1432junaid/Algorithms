
#include<stdio.h>
int main(){
	int a[] = {235,732,378,123,466,528};
	int len	= sizeof(a)/sizeof(a[0]);
	int b[10] = {0};
	int c[len];
	for(int i=0; i<len; i++){
		b[a[i]]++;
	}
	for(int i=1; i<10;i++){
		b[i] = b[i] + b[i-1];
	}
	for(int j=len-1;j>=0;j--){
		c[b[a[j]]-1] = a[j];
		b[a[j]]--;
	}
	return 0;
}

