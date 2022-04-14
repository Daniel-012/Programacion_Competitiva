#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int a;
	int num;
	vector<int> vec;
	
	cin>> num;
	
	for(int i=0 ; i<num ; i++){
		cin>> a;
	vec.push_back(a);
	}
	sort( vec.begin(), vec.end());
	
	if( vec[num-2] + vec[num-3] > vec[num-1]){
		cout<< vec[num-1] + vec[num-2] + vec[num-3]<< endl;
		
	}else{
		cout<< -1<< endl;
	}
	

	
	
	return 0;
}