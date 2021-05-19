#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main(){
	int n;
	int a;
	int aux;
	cin>> n;
	vector<int> num;
	
	for(int i=0;i<n;i++){
		cin>> a;
		num.push_back(a);
		
	}
		
	for(int i=0; i<num.size();i++){
		for(int j=i+1; j<num.size();j++){
			if(num[i]<num[j]){
				aux=num[i];
				num[i]=num[j];
				num[j]=aux;
			}
			
		}
	
	
	}
	
	
	for(int i=0; i<num.size();i++){
		cout<< num[i]<<"\n";
	}
return 0;	
}
