#include <iostream>
#include <climits>
using namespace std;

int knapsack(int *,int*,int ,int);
int knapsak1(int*,int*,int ,int);

int main(){
	unsigned int capacity;
	cout << "Enter capacity  =" ;
	cin >> capacity;
	int W[] = {10,8,12,4,7,16};
	int V[] = {8,12,23,7,2,13};

	int len = sizeof(W)/sizeof(W[0]);
//	int result = knapsak1(W,V,len,capacity);
	int result = knapsack(W,V,len,capacity);
	cout << " maximum value  = " << result << endl;

	return 0;
}


int knapsack(int w[],int v[], int len, int c){
	int max = INT_MIN;
	for(int i = 0; i< len; i++){
		int combination = 0;
		for(int j = i+1; j<len; j++){
//			cout << w[j] << "  ";
			if(combination <= c){
				cout << w[j] << "  ";
				combination += w[j];
//				c -= w[j];
			}
		}cout << endl;
		max = (combination > max)?combination:max;
		cout << "max = " << max << endl;
	}
	return max;
}


int knapsak1(int w[],int v[],int len,int c){

	int max = INT_MIN;
	if(len <= 0 || c <= 0) return 0;
	if(w[len -1] > c) return knapsak1(w,v,len-1,c);
	int x = v[len -1]+knapsak1(w,v,len-1,c-w[len-1]);
	int y = knapsak1(w,v,len-1,c);
	max = (x > y)?x:y;
	return max;
}
