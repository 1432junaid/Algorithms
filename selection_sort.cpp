#include<iostream>

using namespace std;

void sel_sort(int arr[],int len,int index){
	if(len <= 1)exit(0);
	int min = arr[index];
	for(int i = 1;i <len;i++){
		if(arr[i] <= min){
			min = arr[i];
//			arr[i] = min;
		}
	}
	cout << arr[index] <<endl;
	sel_sort(arr,len-1,index++);

}
int main(){
	int arr[] = {10,6,5,8,4};
	int len =  sizeof(arr)/sizeof(arr[0]);
	sel_sort(arr,len,0);
	return 0;
}
