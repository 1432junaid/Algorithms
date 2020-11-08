#include <iostream>
#include <string>
#include <vector>

using namespace std;

vector<int> naive(string text, string pattrn){
	int len_text = text.length();
	int len_ptrn = pattrn.length();
	int j = 0;

	vector<int> result;
	for(int i = 0; i <= (len_text-len_ptrn); i++){
		int j ;
		for(j = 0; j < len_ptrn; j++){
			if(text[i+j] != pattrn[j])break;
		}
		if(j == len_ptrn) result.push_back(i);
	}
	return result;
}

int main(){
	string text = "aabaacaadaabaaba";
	string pattrn = "aaba";
	vector<int> result = naive(text,pattrn);
	for(int i = 0; i<result.size(); i++)cout << result[i] << " ";
	cout << endl;
}
