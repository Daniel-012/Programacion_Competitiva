#include<iostream>
#include<string>

using namespace std;

int main(){
	int a ;
	int b;
	int c=0;
	
	string  original;
	string cambio;

	cin>> a >> b;

	getline(cin,original);
	
	


	for(int i=1; i<=a;i++){
		cambio.push_back(original[i]);
}
	
	for(int i=a; i<=b;i++){
		cambio.push_back(original[b+1-c]);
	c++;
			
	}
	
	for(int i=b+1;i<=original.size();i++){
		
		cambio.push_back(original[i+1]);
	}
	
	
	cout <<cambio;
	return 0;
}
