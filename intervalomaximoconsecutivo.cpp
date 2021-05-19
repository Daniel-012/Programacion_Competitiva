#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	int b;
	int max=0;	
	vector<int> arreglo;
	
	cin>> n;
	
	for(int i=0;i<n;i++){
		cin>>b;
		arreglo.push_back(b);
	}
	sort(arreglo.begin(),arreglo.end());
	
	for(int i=0; i<arreglo.size()-1; i++){
		if(arreglo[i+1]-arreglo[i]>=max){
			max=arreglo[i+1]-arreglo[i];
		}
	}
	
	
	cout <<max;
	return 0;
}
