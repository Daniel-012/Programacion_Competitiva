#include<iostream>
#include<vector>

using namespace std;

int main(){
	
	int n;
	cin>> n;
	vector<int> fibo;
	vector<int> nofi;
	fibo.push_back(1);
	fibo.push_back(2);
	
	for(int i=1;i<=300;i++){
		nofi.push_back(i);
	}
	
	
	
	for(int i=0;i<=30;i++){
		fibo.push_back(fibo[i]+fibo[i+1]);	
	}
	
	
	for(int i=0;i<n;i++){
	
			if(nofi[i]!=fibo[i] && nofi[i]<n ){
				
			cout<< nofi[i]<<" ";
				
			}
	}

	
	return 0;
}
