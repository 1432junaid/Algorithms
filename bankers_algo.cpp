#include<iostream>
#include<vector>
using namespace std;

class max{				//this is use to initiallize for the max instance of all process
	int instance;
	int process;
	int matrix[process][instance];
	public:
	max(int process,int instance){
		this->process  = process;
		this->instance = instance;
	}
	friend void set(int max[process][instance]);
	friend void display(int max[process][instance]);
};
void max::set(){
	for(int i =0; i < process; i++){
		for(int j=0; j < columns; j++){
			cout<<"P"<<i<<": ";
			cin>>matrix[i][j];
		}
		cout<<endl;
	}
}

void max::display(){
	for(int i=0; i < process; i++){
		for(int j=0; j < instance; j++){
			cout<<"P"<<i<<":\t"<<matrix[i][j];
		}
		cout<<endl;
	}
}

int main(){
	int process;
	int instance;
	cout<<"Enter the number of process :"<<endl;
	cin>>process;
	cout<<"Enter the number of resource: "<<endl;
	cin>>instance;
	cout<<endl;

	max m1(process,instance);				//creating object of max class
	m1.set();
	m1.display();
	return 0;
}
