#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


int main(){
	
	int a;
	int b;
	int r;
	vector<int> vec;
	vector<int> vec2;	
	cin>>a;
	for(int i =0;i<a;i++){
		cin>> b;
		vec.push_back(b);
		vec2.push_back(b);
	}

	sort(vec.begin(),vec.end());
	int i=0;
	
	r=vec[(vec.size()/2)];
	
	while(i<=vec2.size() ){
	
	if(vec2[i]== r){
		cout<<r<<" "<<i;
	}
	i++;
}
	
	
	return 0;
}
