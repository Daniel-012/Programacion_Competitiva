#include<iostream>

using namespace std;

int main(){
	long long int n;
	long long int i=0;
	long long int max=0;
	cin>> n;
	 
	 if(n==1){
	 	cout<<i<<" "<<1;
	 }else{
	 
	 
	while(n!=1){
		if(n%2==0){
			if(n>=max){
			max=n;
		}
	
			n=n/2;
		}else{
			if(n>=max){
			max=n;
		}
	
			n=n*3+1;
			
		}
		
	i++;
	}

	
	cout<<i<<" "<<max;
	
}
	
	return 0;
}
