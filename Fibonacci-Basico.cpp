#include<iostream>
#include<vector>

using namespace std;

int main(){
	int a ;
	cin>> a;
	
	int n= 1;
	int b= 2;
	int c;
	
	vector<int> fiba;
	fiba.push_back(1);
	fiba.push_back(2);
	
	for(int i=0;i<30;i++){
	  
	  	fiba.push_back(fiba[i]+fiba[i+1]);
	
		if (fiba[i]<=a){
			cout << fiba[i]<<" ";
		}
	
	}
	
	
	
	
	
	
	return 0;
}
