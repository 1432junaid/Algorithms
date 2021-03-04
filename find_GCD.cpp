#include <iostream>

using namespace std;

int gcd(int v1, int v2){
	while(v2){
		int temp = v2;
		v2 = v1%v2;
		v1 = temp;
	}
	return v1;
}

int main(){
	cout<< "Enter two numbers :";
	int x,y;
	cin>>x>>y;
	cout << gcd(x,y)<< endl;
}
