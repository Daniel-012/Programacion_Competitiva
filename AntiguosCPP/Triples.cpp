#include<iostream>
#include<vector>

using namespace std;

int main(){
	int l;
	int n;
	
	cin>> l;
	
	vector <int> vec;
	vector <int> vec2;
	
	
	for (int i=1; i<=l ; i++){
		cin>> n;
		int mod = n%3;
		if(mod==0){
			vec2.push_back(i);	
		}else{
			
		}
	vec.push_back(n);	
	}
	
	
	
	if(vec2.size()!=0){
	cout<< vec2.size()<<"\n";
	for(int i=0; i<vec2.size();i++){
		cout<< vec2[i] << " ";
		
	}}else{
		cout << "No hay triples.";
	}
	
	
	
	return 0;
}
