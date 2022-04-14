#include<iostream>

using namespace std;

int main(){
	int a;
	int b;
	
	cin>>a>>b;
	
	if(a==7 && b ==7){
		cout<<2;
	}else if(a==7 || b==7){
		cout<<1;
	}else{
		cout<<0;
	}
	
	
	
	
	
	return 0;
}
