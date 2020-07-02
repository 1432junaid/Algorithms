#include<iostream>
#include<vector>
using namespace std;

void display(vector<vector<int>>);
int main(){
	int process;
	cout<<"Enter number of process :";
	cin>>process;
	cout<<endl;
	vector<vector<int>>max[process];
	display(max);
}

void display(vector<vector<int>> &max){
	for(int i =0; i<max.size();i++){
		for(int j =0; j<max[0].size(); j++){
			cout<<"P"<<i<<":\t"<<max[i][j];
		}
		cout<<endl;
	}
}
