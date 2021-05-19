#include<iostream>
#include<vector>

using namespace std;


int main(){
	int a;
	int b;
	int num;
	
	cin>> a>> b;
	vector <int> vec;
	for (int i=0;i<a; i++){
		cin>> num;
		vec.push_back(num);
	}
	
	
	int sum=0;
	for(int i=0;i<b;i++){
	sum=sum+vec[i];
	if(sum==b){
		cout << i+1;

	}else {
	
		
	}
}
	
	
	
	return 0;
}
