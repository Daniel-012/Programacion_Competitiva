#include<iostream>

using namespace std;
int main(){
	long long int g;
	long long int r=0;
	long long int s=0;
	cin>> g;
	
	for(int i=1;i<=g;i++){
		if(i%2==0 ){
			r++;
			s=s+r+10;
		}else{
			s=s+10;
		}
	}
	
	cout<< s;
	
	return 0;
}
