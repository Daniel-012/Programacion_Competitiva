#include<iostream>

using namespace std;

int main(){
	
	long long int n;
	long long int c=0;
	cin>> n;
	if(n%2==0){
		cout<< (n/2)*(n/2+1);
	}else{
		cout<< (n/2+1)*(n/2+1);
	}
	
	
	
	
	return 0;
}
