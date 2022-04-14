#include<iostream>
#include <vector>

using namespace std;

int main(){

	int b;
	int contador=0;
	int may = 0;
	
	vector<int> vec;
	vector<int> vec2;
	
	
	for (int i=0; i<5 ;i++  ){
		cin>> b;
		vec.push_back(b);
	}
	
	for(int j=0; j<5; j++){
	
	for( int i=0; i<5; i++){
		
		if(vec[j] == vec[i]){
		 contador= contador +1 ;
		 vec2.push_back(contador);
		 	
		}else{
		}
		
	}
}
	
	
	for(int i=0;  i<5; i++){
	
	if(vec2[i]>may){
		may = vec2[i];
	}
	}

for(int i=0; i<vec2.size();i++){
	cout << vec2[i]<<" ";
}
	cout << "\n"<< may;
	

	return 0;
	}
