#include<iostream>

using namespace std;

int main(){
	int a;
	int b;
	int c;
	
	cin>> a>>b>>c;
	if (c-a*b>=0){
		cout<<a*b<<" "<< c-a*b;
	
	}else{
	
		cout<<c<<" "<< 0;	
}
	return 0;
}
