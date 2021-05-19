#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a;
	int b;
	int num;
	int num2;
	cin>> a>> b;
	vector <int> vec;
	for(int i=0; i<a;i++){
		cin>> num;
		vec.push_back(num);
	}
	for(int i=0; i<b;i++){
		cin>> num2;
		cout<< vec[num2-1]<<"\n";
	}
	
	
	
	return 0;
}
