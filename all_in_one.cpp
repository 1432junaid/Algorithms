#include<iostream>
#include<vector>
using namespace std;

void insertion_sort(vector<int> &);
void selection_sort(vector<int> &);

void swap(int *,int *);
void printer(vector<int>);
int main(){
	vector<int>a = {2,4,5,1,7,6};

	while(1){
		int x;
		cout<<"0. create an array"<<endl;
		cout<<"1. Insertion sort"<<endl;
		cout<<"2. Selection sort"<<endl;
		cout<<"3. Bubble sort"<<endl;
		cout<<"9. Exit"<<endl<<endl<<endl;
		cout<<"Enter the option"<<endl;
		cin>>x;
		switch(x){
			case 1:
				printer(a);
				insertion_sort(a);
				printer(a);
			break;
			case 2:
				printer(a);
				selection_sort(a);
				printer(a);
			break;
			case 9 :
				return 0;
			break;
			default:
				cout<<"wrong option";
		}
	}
}
void insertion_sort(vector<int> &a){
	for(int j = 1; j < a.size(); j++){
		int key = a[j];
		int i = j-1;
		while(i >= 0 && a[i] > key){
			a[i+1] = a[i];
			i--;
		}
		a[i+1] = key;
	}
//	printer(a);
}
void selection_sort(vector<int> &a){
	int len = a.size();
	int imin;
	for(int i = 0; i < len ; i++){
		imin = i;
		for(int j = i+1; j < len; j++){
			if(a[j] < a[imin])imin = j;
		}
		if(i != imin)swap(&a[i],&a[imin]);
	}
}
void swap(int *a,int *b){
	int temp = *a;
	*a = *b;
	*b = temp;
}

void printer(vector<int>a){
	vector<int>::iterator itr1 = a.begin();
	vector<int>::iterator itr2 = a.end();
	while(itr1 != itr2){
		cout<<*itr1<<" ";
		itr1++;
	}
	cout<<endl;
}
void create(){
	vector<int>a;
	int n,data;
	cout<<"Enter size"<<endl;
	cin<<n;
	for(int i =0; i <= n; i++){
		a.push_back(data);
	}
}
