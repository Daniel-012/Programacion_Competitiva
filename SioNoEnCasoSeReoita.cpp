#include<iostream>

using namespace std;

int  main(){
	int a ;
	int b;
	int c;
	cin>> a>>b>>c;
	
	
	if(a==b || a==c){
		cout<<"Si";	
	}else if(b==a || b==c){
		cout<<"Si";	
	}else{
		cout<<"No";
	}
	
	
	
	
	
	
	
	return 0;
}
