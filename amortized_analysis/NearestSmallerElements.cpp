#include <bits/stdc++.h>

using namespace std;

vector<int> nearestSmallerElements(vector<int> &arr){
	if(arr.size() == 0) return arr;			//testCase1
	if(arr.size() == 1 || arr.size() == 2) return arr;		//testCase2
	stack<int> st;
	vector<int> result;
	int current = arr[0];
	st.push(current);
	for(int i = 1; i<arr.size(); i++){
		if(!st.empty()){
			while(arr[i] < st.top() && (!st.empty())) st.pop();
			if(arr[i] > st.top()) st.push(arr[i]);
		}
	}
	while(!st.empty()){
		result.push_back(st.top());
		st.pop();
	}
	return result;
}

void printer(vector<int> &arr){
	for(int i = 0; i< arr.size(); i++){
		cout << arr[i] << " ";
	}
	cout <<"\n";
}

int main(){
	vector<int> arr = {1,3,4,2,5,3,4,2};
//	vector<int> arr = {5,4,3,2,1};
	vector<int> result = nearestSmallerElements(arr);
	printer(result);
	return 0;
}
