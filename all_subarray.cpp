#include <iostream>
#include <vector>

using namespace std;

void allSubArray(vector<int> arr){
	int len = arr.size();
	for(int i = 0; i<len; i++){
		int count = 1;
		for(int j = i; j<len; j++){
			for(int k = i; k<count; k++){
				cout << arr[k] << " ";
			}cout << endl;
			count++;
		}cout << endl;
	}cout << endl;
}

int main(){
	vector<int> arr = {1,2,3,4};
	for(int i = 0; i<arr.size(); i++){
		cout<< arr[i] << " ";
	}
	cout << endl;
	allSubArray(arr);
}
