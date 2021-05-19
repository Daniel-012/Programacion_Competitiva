#include<iostream>

using namespace std;

int main(){
	
	int e;
	cin >>e;
	
	if(e>=0 && e<=10){
		cout<<2;
	}else if(e>=11 && e<=17){
		cout<<5;
	}else if(e>=18 && e<=60){
		cout<<8;
	}else if(e>=61){
		cout<<10;
	}
	
	
	return 0;
}
