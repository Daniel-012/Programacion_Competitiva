#include<iostream>


int main(){
	long long int a;
	long long int b;
	long long int r=1;
	
	std::cin>>a>>b;
	
	
	
	 for(int i=0;i<b-1;i++){
	 	r*=a;
	 }
	
	
	std::cout<<r*a;
	return 0;
}
