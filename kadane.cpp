#include <iostream>
#include <algorithm>
#include <vector>
#include <climits>
using namespace std;

int kadane(vector<int> arr, int n){
	int best = 0;
	int sum  = 0;
	for(int i = 0;i<n; i++){
		sum = max(arr[i],sum+arr[i]);
		best= max(best,sum);
	}
	return best;
}

int brute_algo(vector<int> arr, int len){
	int best = 0;
	for(int i = 0; i<len; i++){
		int sum = 0;
		for(int j = i; j<len; j++){
			sum += arr[j];
			best = max(sum,best);
		}
	}
	return best;
}

int main(){
	int n;
	cout << "Enter length of array";
	cin>>n;
	vector<int> arr(n,0);
	for(int i = 0; i < n; i++) cin>> arr[i];
	cout << "kadane     = " << kadane(arr,n) << endl;
	cout << "brute_algo = " << brute_algo(arr,n) << endl;
	return 0;
}

