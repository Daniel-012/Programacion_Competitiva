#include<iostream>
#include<vector>

using namespace std;

int main(){
	long int  p ;
	long int  s;
	long int  r;
	long int  min=1000000;
	vector<int> vec;
	cin>> p>> s>> r;
	int d=0;
	
	if(s>r){
		
	for(int i=0; i<=p; i++){
		d= d+s-r;
		if(d>=p){
			vec.push_back(i);
			
		}
		
	}
	
	for(int i=0; i<= vec.size();i++){
		if(vec[i]<= min){
			
			min=vec[i];
		}
		
	}
	
	
	
	cout << min;
}
	
	return 0;
}
