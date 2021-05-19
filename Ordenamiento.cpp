#include<iostream>
#include<vector>

using namespace std;


int main(){
	int n;
	int num;
	cin>> n;
	
	vector <int> vec;
	
	for(int i=0 ;i<n; i++){
		cin >> num;
		
		vec.push_back(num);
		
	}

	for(int j=0;   j<vec.size();  j++){
	for(int i=0; i<vec.size()-1; i++){
		
		if (vec[i]> vec[i+1]){
			int tmp = vec[i];
			vec[i]= vec [i+1];
			vec [i+1] = tmp;
			
			
		}
	}
}
	
	for (int i=0; i<vec.size();i++){
		
		cout<< vec[i] << " ";
	}
	
	
	
	
	return 0;
}
