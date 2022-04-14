#include<iostream>


using namespace std;

int main(){
	int p ;
	int s;
	int r;
	int b=0;
	int d=0;

	cin>> p>> s>> r;

	while(b<=p){
		b=b+s;
		d++;
		if(d>=p){
			cout<<d<<" ";
		}
		b=b-r;


	}
	
	
	
	return 0;
}
