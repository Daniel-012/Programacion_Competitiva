#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


int main(){
	int n;
	int a;
	
	vector<int> posicion;
	
	cin>> n;
	
	for(int i=0; i<n;i++){
		cin>> a;
		if(a%3==0){
		posicion.push_back(i+1);
	}
	}
	
	
	if(posicion.size()!= 0){
	
	cout<<posicion.size()<<"\n";
	
	for(int i=0; i<posicion.size();i++){
		cout<<posicion[i]<<" ";
	}
	}else{
		
		cout<< "no hay triples";
	}
	
	return 0;
}
